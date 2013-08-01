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
 * 插入一个节点
 */
void list_insert( LinkedList *list, void *data );
// 头插法
void list_insert_head( LinkedList *list, void *data );
// 尾插法
void list_insert_tail( LinkedList *list, void *data );
// 随插法
void list_insert_index( LinkedList *list, void *data, long index );

/*
 * 链表遍历
 */
void list_traverse( LinkedList *list, void (*handle)(void *) );

/*
 * 删除一个节点
 */
void *list_delete( LinkedList *list, void *key, int (*compare)(const void *, const void *) );

/*
 * 搜索
 */
void *list_search( LinkedList *list, void *key, int (*compare)(const void *, const void *) );

/*
 * 获取链表某节点的数据
 */
void * get_element( LinkedList *list, long index );

/*
 * 求长度
 */
long get_length( LinkedList *list );

/*
 * 销毁线性表
 */
void list_destroy( LinkedList *list, void (*destroy)(void *) );

#endif