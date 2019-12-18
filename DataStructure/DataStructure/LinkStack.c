#include "LinkStack.h"

Status InitLinkStack(LinkStack * L)
{
	*L = (LinkStack)malloc(sizeof(SNode));
	if (*L == NULL) exit(OVERFLOW);
	(*L)->data = 0;
	(*L)->next = NULL;
	return OK;
}
Status PushLinkStack(LinkStack *L,SElemType e)
{
	LinkStack s,p;
	p = *L;
	if (L == NULL || *L == NULL) return ERROR;
	s = (LinkStack)malloc(sizeof(SNode));
	if (s == NULL) exit(OVERFLOW);


}
Status DestroyLinkStack(LinkStack * L)
{

	return OK;
}
