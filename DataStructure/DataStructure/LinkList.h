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

Status InitLinkList(LinkList *L);  //��ʼ����ʽ��

Status DestroyLinkList(LinkList *L);  //������ʽ��


//��������
//��������벢������ǰ�������һ������������в���һ�����������ᴴ��ʧ��
Status InsertLinkList(LinkList L, int i, ElemType e);   

//ȡ������
//ȡ��ĳһ�������д��ڵĽڵ�����,���������e��
Status GetElemLinkList(LinkList L, int i, ElemType *e);
#endif // !LINK_LIST
