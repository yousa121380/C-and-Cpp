#include<stdio.h>
#include"LinkList.h"
#include"SqStack.h"
#include"LinkStack.h"

int main()
{
	//����ջ���ֵ��������
	/*SqStack L;
	SElemType e=1;
	//��ʼ��
	if (InitSqStack(&L) == 0)
	{
		printf("��ʼ��ʧ��");
		return 0;
	}
	//��ջ
	for (int i = 0; i < 10; ++i)
	{
		if (PushSqStack(&L, 1) == 0)
		{
			printf("��ջʧ��");
			return 0;
		}
	}

	//ȡջ��Ԫ��
	if (GetTopSqStack(&L, &e) == 0)
	{
		printf("ȡջ��Ԫ��ʧ��");
		return 0;
	}

	//��ջ
	for (int i = 0; i < 10; ++i)
	{
		if (PopSqStack(&L, &e) == 0)
		{
			printf("��ջʧ��");
			return 0;
		}
		printf("%d", e);
	}

	//����
	if (DestroySqStack(&L) == 0)
	{
		printf("����ʧ��");
		return 0;
	}*/


	//��ʽջ���������

	LinkStack L;
	SElemType e=1;

	//��ʼ��
	if (InitLinkStack(&L) == ERROR)
	{
		printf("��ʼ����ʽջʧ��");
		return 0;
	}
	//
	return 0;
}