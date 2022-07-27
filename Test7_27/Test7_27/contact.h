#pragma once

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 11
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>


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

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数
};


//声明函数
//初始化通讯录函数
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//
void SearchContact(const struct Contact* ps);

void M0difyContact(struct Contact* ps);