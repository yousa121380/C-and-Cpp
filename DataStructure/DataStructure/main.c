#include<stdio.h>
#include "SqList.h"

int main()
{
	SqList L;
	ElemType e;
	InitList(&L);
	InsertList(&L, 1, 2);
	InsertList(&L, 1, 3);
	
	for (int i = 1; i <= L.length; i++)
	{
		GetElem(L, i, &e);
		printf("%d",e);
	};
	DestroyList(&L);
	return 0;
}