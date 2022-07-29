#pragma once

//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 11
#define MAX_ADDR 30
#define DEFAULT_SZ 3

#include <stdio.h>
#include <string.h>
#include<stdlib.h>


//枚举
enum Option
{
	EXIT, //0
	ADD,  //1
	DEL,  //2
	SELECT,
	MODIFY,
	SHOW,
	SORT

};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录类型
typedef struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;


//声明函数
//初始化通讯录函数
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查询指定的联系人
void SearchContact(const struct Contact* ps);
//更改指定的联系人
void M0difyContact(struct Contact* ps);
//排序通讯录内容
void SortContact(struct Contact* ps);
//释放内存
void DestroyContact(Contact* ps);