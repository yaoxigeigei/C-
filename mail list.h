#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#define con_MAX 1000
#define name_MAX 20
#define number_MAX 11
#define add_MAX 50

enum Options
{
	exit,   //0
	Add,    //1
	Del,
	search,
	modify,
	show,
	sort
};

struct  a                   //每个人的信息
{            
	int age;
	char name[name_MAX];
	char number[number_MAX];
	char sex[5];
	char add[add_MAX];
};
struct PeoInfo             //通讯录
{     
	struct a con[con_MAX];     
	int size;                  //通讯录的元素个数
};

//声明函数
void InitContact(struct PeoInfo* ps);
void AddContact(struct PeoInfo* ps);
void ShowContact(const struct PeoInfo* ps);
void DelContact(struct PeoInfo* ps);
void SearchContact(const struct PeoInfo* ps);
void modifyContact(struct PeoInfo* ps);
void SortContact(struct PeoInfo* ps);
