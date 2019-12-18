/*============================================
 *�㷨1 ���Ա�
 *˳�������Դ���ṹ��˳���
 *�ṩ��ʼ�����������ٺ��������뺯����ȡ����������������
 *============================================
 */
#ifndef SQLIST_H
#define SQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Status.h"

 /*============================================
  *bug��¼
  *1.�ڵڶ�λ������ֵ��֮���ڵ�һλ������ֵ���ᵼ�µڶ�λδ��ʼ��
  *
  *============================================
  */

#define LIST_INIT_SIZE 100  // ˳���洢�ռ�ĳ�ʼ������
#define LISTINCREMENT  10   // ˳���洢�ռ�ķ�������

typedef int ElemType; //����Ԫ������

typedef struct {
	ElemType* elem;     // ˳���洢�ռ�Ļ�ַ��ָ��˳�����ռ�ڴ����ʼλ�ã�
	int length;   // ��ǰ˳����ȣ���������Ԫ�أ�
	int listsize; // ��ǰ����Ĵ洢���������Դ洢����Ԫ�أ�
}SqList;

Status InitList(SqList *L);    //��ʼ��������Ϊ���Ա���䴢��ռ�

Status DestroyList(SqList *L);   //���ٺ������������Ա�Ĵ��溯��

Status InsertList(SqList *L, int i, ElemType e);    //���뺯���������Ӧλ�õ�Ԫ�أ���֮���Ԫ���˺�һλ

Status GetElem(SqList L, int i, ElemType* e);       //ȡ��������ȡ����Ӧλ�õ�Ԫ�أ�������e��

Status PopElem(SqList *L, int i, ElemType* e);      //����������������Ӧλ�õ�Ԫ�أ�������e�У�����֮���Ԫ��ǰ��һλ





#endif // !SQLIST_H

