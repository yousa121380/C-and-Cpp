/*============================================
 *算法1 线性表
 *顺序表的线性储存结构（顺序表）
 *提供初始化函数，销毁函数，插入函数，取出函数，弹出函数
 *============================================
 */
#ifndef SQLIST_H
#define SQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Status.h"

 /*============================================
  *bug记录
  *1.在第二位插入数值后，之后在第一位插入数值，会导致第二位未初始化
  *
  *============================================
  */

#define LIST_INIT_SIZE 100  // 顺序表存储空间的初始分配量
#define LISTINCREMENT  10   // 顺序表存储空间的分配增量

typedef int ElemType; //储存元素类型

typedef struct {
	ElemType* elem;     // 顺序表存储空间的基址（指向顺序表所占内存的起始位置）
	int length;   // 当前顺序表长度（包含多少元素）
	int listsize; // 当前分配的存储容量（可以存储多少元素）
}SqList;

Status InitList(SqList *L);    //初始化函数，为线性表分配储存空间

Status DestroyList(SqList *L);   //销毁函数，销毁线性表的储存函数

Status InsertList(SqList *L, int i, ElemType e);    //插入函数，插入对应位置的元素，将之后的元素退后一位

Status GetElem(SqList L, int i, ElemType* e);       //取出函数，取出对应位置的元素，储存在e中

Status PopElem(SqList *L, int i, ElemType* e);      //弹出函数，弹出对应位置的元素，储存在e中，并将之后的元素前移一位





#endif // !SQLIST_H

