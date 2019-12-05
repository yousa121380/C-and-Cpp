#include "SqList.h"

//初始化线性表
Status InitList(SqList *L)
{
	(*L).elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if ((*L).elem == NULL) exit(OVERFLOW);
	(*L).length = 0;
	(*L).listsize = LIST_INIT_SIZE;
	return OK;
}

//销毁线性表

Status DestroyList(SqList *L)
{
	if (L == NULL || (*L).elem == NULL) exit(ERROR);
	free((*L).elem);
	(*L).elem = NULL;
	(*L).length = 0;
	(*L).listsize = 0;
	return OK;
}

//插入线性表

Status InsertList(SqList *L, int i, ElemType e)
{
	if (i > LIST_INIT_SIZE) return ERROR;
	if (L == NULL || (*L).elem == NULL) exit(ERROR);
	ElemType *p, *q;
	p = &((*L).elem[i - 1]);
	for (q = &((*L).elem[(*L).length - 1]); q >= p; --q)
	{
		*(q + 1) = *(q);
	}
	*(p) = e;
	++((*L).length);
	return OK;
}

//取出线性表中元素

Status GetElem(SqList L, int i, ElemType* e)
{
	if (L.elem == NULL) exit(ERROR);
	if (i<1 || i>L.length) exit(ERROR);
	
	*e = L.elem[i - 1];
	return OK;
}


//弹出线性表中的元素

Status PopElem(SqList *L, int i, ElemType* e)
{
	ElemType *p, *q;
	if (L == NULL || (*L).elem == NULL) exit(ERROR);
	if (i<1 || i>(*L).length) exit(ERROR);
	*e = (*L).elem[i - 1];
	q = &(*L).elem[(*L).length - 1];
	for (p = &(*L).elem[i - 1]; p <= q; ++p)
	{
		*p = *(p + 1);
	}

	--((*L).length);
	return OK;
}