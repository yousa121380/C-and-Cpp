#include<stdio.h>
#include"LinkList.h"
#include"SqStack.h"

int main()
{
	SqStack L;
	SElemType e=1;
	if (InitSqStack(&L) == 0)
	{
		printf("≥ı ºªØ ß∞‹");
		return 0;
	}
	if (DestroySqStack(&L) == 0)
	{
		printf("œ˙ªŸ ß∞‹");
		return 0;
	}
	for(int i=0;i<)
	if (PushSqStack(&L,1)==0)
	{
		printf("»Î’ª ß∞‹");
		return 0;
	}
	return 0;
}