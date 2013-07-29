#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <stdbool.h>

/*
 * 节点结构
 */
typedef struct ListNodeTag {
  void *data;
  struct ListNodeTag *next;
} ListNode;

/*
 * 链表结构
 */
typedef struct {
  ListNode *head;
  ListNode *tail;
  long size;
} LinkedList;

/*
 * 构造一个空的线性表
 */
void list_init( LinkedList *list );

/*
 * 若list为空表，返回TRUE,否则返回FALSE
 */
bool is_empty( LinkedList *list );

/*
 * 销毁线性表
 */
void list_destroy( LinkedList *list, void (*destroy)(void *) );

#endif
