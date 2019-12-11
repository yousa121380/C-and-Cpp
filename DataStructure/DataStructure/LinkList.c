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
	//ȷ��������ڣ����򴴽�ʧ��
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
	//���������ѭ���ᵽ��p=NULL����Ҫ����ڵ��ǰһ��
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		++j;
	}
	//���p=NULL����i-1Ϊ����������ʧ��
	if (p == NULL || j > i - 1) {
		return ERROR;
	}

	//��ջ���������ʧ�ܣ���������
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
