#pragma once
#ifndef LINK_LIST
#define LINK_LIST
/*============================================
 *�㷨2 ��ʽ��
 *˳������ʽ����ṹ����ʽ��
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

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;

typedef LNode* LinkList;

Status InitList(LinkList *L);  //��ʼ����ʽ��

Status DestroyList(LinkList *L);  //������ʽ��

Status 
#endif // !LINK_LIST
