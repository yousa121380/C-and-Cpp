#ifndef LINK_STACK_H
#define LINK_STACK_H

/*============================================
 *算法3 链式栈
 *线性表的特殊储存结构
 *提供
 *============================================
 */

#include<stdlib.h>
#include"Status.h"

/*============================================
 *bug记录
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

