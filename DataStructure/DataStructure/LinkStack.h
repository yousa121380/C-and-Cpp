#ifndef LINK_STACK_H
#define LINK_STACK_H

/*============================================
 *�㷨3 ��ʽջ
 *���Ա�����ⴢ��ṹ
 *�ṩ
 *============================================
 */

#include<stdlib.h>
#include"Status.h"

/*============================================
 *bug��¼
 *
 *============================================
 */

typedef int SElemType;

typedef struct 
{
	SElemType data;
	SNode *next;
}SNode;

typedef SNode* LinkStack;

Status InitLinkStack(LinkStack *L);

Status DestroyLinkStack(LinkStack *L);

Status PushLinkStack(LinkStack *L, SElemType e);




#endif // !LINK_STACK_H

