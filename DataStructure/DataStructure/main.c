#include<stdio.h>
#include"LinkList.h"
#include<vector>

int main()
{
	LinkList L;
	ElemType e;
	if (InitLinkList(&L) == 0)
	{
		printf("��ʼ��ʧ��");
		return 0;
	}
	if (InsertLinkList(L, 1, 2) == 0)
	{
		printf("����ʧ��");
		return 0;
	}

	if (GetElemLinkList(L, 1, &e) == 0)
	{
		printf("ȡ��ʧ��");
		return 0;
	}
	printf("%d", e);
	return 0;
}