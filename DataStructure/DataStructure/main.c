#include<stdio.h>
#include"LinkList.h"
#include<vector>

int main()
{
	LinkList L;
	ElemType e;
	if (InitLinkList(&L) == 0)
	{
		printf("初始化失败");
		return 0;
	}
	if (InsertLinkList(L, 1, 2) == 0)
	{
		printf("插入失败");
		return 0;
	}

	if (GetElemLinkList(L, 1, &e) == 0)
	{
		printf("取出失败");
		return 0;
	}
	printf("%d", e);
	return 0;
}