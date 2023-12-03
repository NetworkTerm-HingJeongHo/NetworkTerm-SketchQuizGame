while (1) {
	// ���� �� �ʱ�ȭ
	FD_ZERO(&rset);
	FD_SET(listen_sock4, &rset);
	FD_SET(listen_sock6, &rset);
	for (int i = 0; i < nTotalSockets; i++) {
		FD_SET(SocketInfoArray[i]->sock, &rset);
	}

	// select()
	retval = select(0, &rset, NULL, NULL, NULL);
	if (retval == SOCKET_ERROR) err_quit("select()");

	// ���� �� �˻�(1): Ŭ���̾�Ʈ ���� ����
	if (FD_ISSET(listen_sock4, &rset)) { // TCP/IPv4
		addrlen = sizeof(clientaddr4);
		client_sock = accept(listen_sock4,
			(struct sockaddr *)&clientaddr4, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			break;
		}
		else {
			// Ŭ���̾�Ʈ ���� ���
			char addr[INET_ADDRSTRLEN];
			inet_ntop(AF_INET, &clientaddr4.sin_addr, addr, sizeof(addr));
			printf("\n[TCP/IPv4 ����] Ŭ���̾�Ʈ ����: IP �ּ�=%s, ��Ʈ ��ȣ=%d\n",
				addr, ntohs(clientaddr4.sin_port));
			// ���� ���� �߰�: ���� �� ���� ����
			if (!AddSocketInfo(client_sock, false, false))
				closesocket(client_sock);
		}
	}
	if (FD_ISSET(listen_sock6, &rset)) { // TCP/IPv6
		addrlen = sizeof(clientaddr6);
		client_sock = accept(listen_sock6,
			(struct sockaddr *)&clientaddr6, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			break;
		}
		else {
			// Ŭ���̾�Ʈ ���� ���
			char addr[INET6_ADDRSTRLEN];
			inet_ntop(AF_INET6, &clientaddr6.sin6_addr, addr, sizeof(addr));
			printf("\n[TCP/IPv6 ����] Ŭ���̾�Ʈ ����: IP �ּ�=%s, ��Ʈ ��ȣ=%d\n",
				addr, ntohs(clientaddr6.sin6_port));
			// ���� ���� �߰�: ���� �� ���� ����
			if (!AddSocketInfo(client_sock, true, false))
				closesocket(client_sock);
		}
	}

	 ====== ���� ======
	// ���� ���� Ŭ���̾�Ʈ���� ���� ��ȭ ���� ����
	SOCKETINFO* curClientPtr = SocketInfoArray[nTotalSockets - 1];
	int sendLen = sizeof(g_msgQueue);
	// ���� ���� ����
	retval = sendn(curClientPtr->sock, (char*)&sendLen, sizeof(int), 0);
	if (retval == SOCKET_ERROR)
	{
		err_display("send()");
		continue;
	}

 

	// ���� ���� ����
	retval = sendn(curClientPtr->sock, (char*)&g_msgQueue, recvLen, 0);
	if (retval == SOCKET_ERROR)
	{
		err_display("send()");
		continue;
	}

	// =========================
	

	// ���� �� �˻�(2): ������ ���
	for (int i = 0; i < nTotalSockets; i++) {
		SOCKETINFO *ptr = SocketInfoArray[i];
		if (FD_ISSET(ptr->sock, &rset)) {
			// ������ �ޱ�

			// ============ ��ȣ ============
			// ���� ũ�� ������ �ޱ�
			retval = recvn(ptr->sock, (char*)&recvLen, sizeof(int), 0);
			if (retval == 0 || retval == SOCKET_ERROR)
			{
				RemoveSocketInfo(i);
				continue;
			}
			// ���� ũ�� ������ �ޱ�
			retval = recvn(ptr->sock, ptr->buf, recvLen, 0);
			if (retval == 0 || retval == SOCKET_ERROR) {
				RemoveSocketInfo(i);
				continue;
			}

			//// ���� ����Ʈ �� ����
			//ptr->recvbytes += retval;
			//sendLen = ptr->recvbytes;
			//// ���� ����Ʈ �� ����
			//ptr->recvbytes = 0;

			// ���� ������ ��� Ŭ���̾�Ʈ�� ������ ����
			for (int j = 0; j < nTotalSockets; j++) {
				SOCKETINFO *ptr2 = SocketInfoArray[j];

				// ======== ��ȣ ==========
				// ���� ���� ����
				retval = sendn(ptr2->sock, (char*)&recvLen, sizeof(int), 0);
				if (retval == SOCKET_ERROR) 
				{
					err_display("send()");
					RemoveSocketInfo(j);
					--j; // ���� �ε��� ����
					continue;
				}

				// ���� ���� ����
				retval = sendn(ptr2->sock, ptr->buf, recvLen, 0);
				if (retval == SOCKET_ERROR) 
				{
					err_display("send()");
					RemoveSocketInfo(j);
					--j; // ���� �ε��� ����
					continue;
				}
			}
		}
	} /* end of for */
} /* end of while (1) */