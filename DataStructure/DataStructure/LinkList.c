#include "LinkList.h"

Status InitList(LinkList *L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	if (*L == NULL) exit(OVERFLOW);

	(*L)->next = NULL;
}


Status DestroyList(LinkList *L)
{
	LinkList p;

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