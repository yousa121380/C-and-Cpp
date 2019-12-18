#include "SqStack.h"

Status InitSqStack(SqStack * S)
{
	if (S == NULL) return ERROR;
	(*S).base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
	if ((*S).base == NULL) exit(OVERFLOW);
	(*S).top = (*S).base;
	(*S).stacksize = MAXSIZE;
	return OK;
}

Status DestroySqStack(SqStack * S)
{
	if (S == NULL || (*S).base == NULL) return ERROR;
	free(S->base);
	S->base = NULL;
	S->top = NULL;
	S->stacksize = 0;
	return OK;
}

Status PushSqStack(SqStack * S, SElemType e)
{
	if (S == NULL || (*S).base == NULL) return ERROR;
	if (S->top - S->base >= S->stacksize) return ERROR;
	*(S->top) = e;
	++S->top;
	return OK;
}

Status PopSqStack(SqStack * S, SElemType * e)
{
	if (S == NULL || (*S).base == NULL) return ERROR;
	if (S->top == S->base) return ERROR; //Õ»¿Õ
	*e = *(--S->top);
	return OK;
}

Status GetTopSqStack(SqStack * S, SElemType * e)
{
	if (S == NULL || (*S).base == NULL) return ERROR;
	if (S->top == S->base) return ERROR;
	*e= *(S->top-1);
	return OK;
}
