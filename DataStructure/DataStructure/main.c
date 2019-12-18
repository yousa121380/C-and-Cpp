#include<stdio.h>
#include"LinkList.h"
#include"SqStack.h"
#include"LinkStack.h"

int main()
{
	//线性栈部分的试验操作
	/*SqStack L;
	SElemType e=1;
	//初始化
	if (InitSqStack(&L) == 0)
	{
		printf("初始化失败");
		return 0;
	}
	//入栈
	for (int i = 0; i < 10; ++i)
	{
		if (PushSqStack(&L, 1) == 0)
		{
			printf("入栈失败");
			return 0;
		}
	}

	//取栈顶元素
	if (GetTopSqStack(&L, &e) == 0)
	{
		printf("取栈顶元素失败");
		return 0;
	}

	//出栈
	for (int i = 0; i < 10; ++i)
	{
		if (PopSqStack(&L, &e) == 0)
		{
			printf("出栈失败");
			return 0;
		}
		printf("%d", e);
	}

	//销毁
	if (DestroySqStack(&L) == 0)
	{
		printf("销毁失败");
		return 0;
	}*/


	//链式栈的试验操作

	LinkStack L;
	SElemType e=1;

	//初始化
	if (InitLinkStack(&L) == ERROR)
	{
		printf("初始化链式栈失败");
		return 0;
	}
	//
	return 0;
}