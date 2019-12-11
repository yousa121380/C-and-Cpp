#include "LinkList.h"

Status InitLinkList(LinkList *L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	if (*L == NULL) exit(OVERFLOW);

	(*L)->next = NULL;
	return OK;
}


Status DestroyLinkList(LinkList *L)
{
	LinkList p;
	//确保链表存在，否则创建失败
	if (L == NULL || *L == NULL) return ERROR;

	p = *L;
	while (p != NULL)
	{
		p = (*L)->next;
		free(*L);
		(*L) = p;
	}
	/* p=*L;
	 * while(p!=NULL)
	 * {
	 * 	 (*L)=(*L)->next;
	 *	 free(*p);
	 *	 p=(*L);
	 * }
	 */

	*L = NULL;
	return OK;

}

Status InsertLinkList(LinkList L, int i, ElemType e)
{
	if (L == NULL) return ERROR;
	LinkList p,s;
	p = L;
	int j = 0;
	//运行完这个循环会到达p=NULL或者要插入节点的前一项
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		++j;
	}
	//如果p=NULL或者i-1为负数，插入失败
	if (p == NULL || j > i - 1) {
		return ERROR;
	}

	//堆栈溢出，分配失败，结束程序
	s = (LinkList)malloc(sizeof(LNode));
	if (s == NULL) exit(OVERFLOW);

	s->data = e;
	s->next = p->next;
	p->next = s;

	return OK;
}

Status GetElemLinkList(LinkList L, int i, ElemType * e)
{
	if (L == NULL) return ERROR;
	LinkList p;
	int j = 0;
	p = L;
	while (p != NULL && j <= i - 1)
	{
		p = p->next;
		++j;
	}
	if (p == NULL || j > i) return ERROR;

	*e = p->data;
	return OK;
}
