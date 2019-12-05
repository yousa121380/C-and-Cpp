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

Status InitList(LinkList *L);  //初始化链式表

Status DestroyList(LinkList *L);  //销毁链式表

Status 
#endif // !LINK_LIST
