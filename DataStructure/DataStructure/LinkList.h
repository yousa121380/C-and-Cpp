#pragma once
#ifndef LINK_LIST
#define LINK_LIST
/*============================================
 *算法2 链式表
 *顺序表的链式储存结构（链式表）
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

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;

typedef LNode* LinkList;

Status InitLinkList(LinkList *L);  //初始化链式表

Status DestroyLinkList(LinkList *L);  //销毁链式表


//插入链表
//仅允许插入并创建当前链表的下一项或者在链表中插入一项，其他情况都会创建失败
Status InsertLinkList(LinkList L, int i, ElemType e);   

//取出链表
//取出某一个链表中存在的节点数据,并将其存在e中
Status GetElemLinkList(LinkList L, int i, ElemType *e);
#endif // !LINK_LIST
