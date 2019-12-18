#ifndef SQSTACK_H
#define SQSTACK_H


/*============================================
 *算法3 线性栈
 *线性表的特殊储存结构
 *提供
 *============================================
 */

#include<stdio.h>
#include<stdlib.h>
#include"Status.h"

 /*============================================
  *bug记录
  *
  *============================================
  */

#define MAXSIZE 100     //栈的初始最大容量

typedef int SElemType;  //栈的储存元素类型

typedef struct
{
	SElemType *base;    //栈底指针
	SElemType *top;     //栈顶指针
	int stacksize;      //栈的最大容量
}SqStack;

Status InitSqStack(SqStack *S);   //初始化一个空栈

Status DestroySqStack(SqStack *S); //销毁一个空栈

Status PushSqStack(SqStack *S, SElemType e); //入栈

Status PopSqStack(SqStack *S, SElemType *e); //出栈

Status GetTopSqStack(SqStack *S, SElemType *e); //取栈顶元素




#endif // !SQSTACK_H


