#include<stdio.h>
#include"LinkList.h"
#include"SqStack.h"

int main()
{
	SqStack L;
	SElemType e=1;
	if (InitSqStack(&L) == 0)
	{
		printf("��ʼ��ʧ��");
		return 0;
	}
	if (DestroySqStack(&L) == 0)
	{
		printf("����ʧ��");
		return 0;
	}
	for(int i=0;i<)
	if (PushSqStack(&L,1)==0)
	{
		printf("��ջʧ��");
		return 0;
	}
	return 0;
}