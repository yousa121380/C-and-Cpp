#include<winsock2.h>
#include<stdio.h>
#include<stdlib.h>
#pragma comment(lib,"ws2_32.lib")

int main()
{
	WSADATA wsaData;
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		printf("ÎÞ·¨");
		return 0;
	}
	printf("%d %d", LOBYTE(wsaData.wVersion), HIBYTE(wsaData.wHighVersion));
	WSACleanup();
	return 0;
}