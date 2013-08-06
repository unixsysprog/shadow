#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

/*
 * 通用顺序线性表
 */

#include <stdbool.h>

#define ARRAY_LIST_INIT_SIZE 50
#define ARRAY_LIST_INCREMENT 20

/*
 * 顺序线性表节点结构
 */
typedef struct ArrayListNodeTag {
  void *data;
} ArrayListNode;

/*
 * 顺序线性表结构
 */
typedef struct {
  ArrayListNode *elements;
  long size;
  long limit;
} ArrayList;

/*
 * 构造一个空的线性表
 *
 * list   目标线性表指针
 */
void init_list( ArrayList *list );

/*
 * 销毁线性表，调用后list不能再被使用
 *
 * list   目标线性表指针
 * clear  清理函数，用户提供
 */

void destroy_list( ArrayList *list, void (*clear)(void *) );

/*
 * 重置线性表，将线性表重置为空表
 *
 * list   目标线性表指针
 * clear  清理函数，用户提供
 */
void clear_list( ArrayList *list, void (*clear)(void *) );

/*
 * 判断线性表是否为空表
 *
 *  空表返回TRUE
 *  否则返回FALSE
 *
 * list   目标线性表指针
 */
bool is_empty_list( ArrayList *list );

/*
 * 线性表大小
 *
 *  返回线性表中元素个数
 *
 * list   目标线性表指针
 */
long list_size( ArrayList *list );

/*
 * 获取线性表中某位置的数据
 *
 *  返回该位置的元素，若找不到，返回空
 *
 * list   目标线性表指针
 * index  元素下标, 定义域为 [0, list_size( list )]
 */
void * get_list_element( ArrayList *list, long index );

/*
 * 搜索线性表中与key满足compare关系的的第一个数据元素位置
 *
 *  返回与key满足compare关系的第一个元素的位置
 *  找不到返回-1
 *
 * list      目标线性表指针
 * key       目标元素
 * compare   函数指针，定义目标元素和数据元素之间关系
 */
long locate_list_element( ArrayList *list, void *key, int (*compare)(const void *, const void *) );

/*
 * 搜索线性表中前驱节点
 *
 *   返回前驱节点数据
 *   无前驱节点返回空
 *
 * list       目标线性表指针
 * location   元素下标, 定义域为 [1, list_size( list )]
 */
void * get_previous_element( ArrayList *list, long location );

/*
 * 搜索线性表中的后继节点
 *
 *   返回后继结点数据
 *   无后继结点返回空
 *
 * list       目标线性表指针
 * location   元素下标，定义域为[0, list_size( list ) - 1 ]
 */
void * get_next_element( ArrayList *list, long location );

/*
 * 在index前插入一个节点
 *
 * list    目标线性表指针
 * data    元素数据指针
 * index   元素下标，定义域为[0, list_size( list )]
 */
void list_insert( ArrayList *list, void *data, long index );

/*
 * 删除一个节点
 *
 *   返回删除节点数据
 *   若未找到待删除节点，返回空
 *
 * list   目标线性表指针
 * index  待删除节点下标，定义域为[0, list_size( list ) - 1]
 */
void *list_delete( ArrayList *list, long index );

/*
 * 链表遍历
 *
 * list    目标线性表指针
 * handle  函数句柄，对线性表中的每一个元素做相应的操作
 */
void list_traverse( ArrayList *list, void (*handle)(void *) );

#endif
