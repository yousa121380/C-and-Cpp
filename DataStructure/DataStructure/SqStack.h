#ifndef SQSTACK_H
#define SQSTACK_H


/*============================================
 *�㷨3 ����ջ
 *���Ա�����ⴢ��ṹ
 *�ṩ
 *============================================
 */

#include<stdio.h>
#include<stdlib.h>
#include"Status.h"

 /*============================================
  *bug��¼
  *
  *============================================
  */

#define MAXSIZE 100     //ջ�ĳ�ʼ�������

typedef int SElemType;  //ջ�Ĵ���Ԫ������

typedef struct
{
	SElemType *base;    //ջ��ָ��
	SElemType *top;     //ջ��ָ��
	int stacksize;      //ջ���������
}SqStack;

Status InitSqStack(SqStack *S);   //��ʼ��һ����ջ

Status DestroySqStack(SqStack *S); //����һ����ջ

Status PushSqStack(SqStack *S, SElemType e); //��ջ

Status PopSqStack(SqStack *S, SElemType *e); //��ջ

Status GetTopSqStack(SqStack *S, SElemType *e); //ȡջ��Ԫ��




#endif // !SQSTACK_H


