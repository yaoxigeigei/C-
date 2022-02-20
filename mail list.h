#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)


#define name_MAX 20
#define number_MAX 11
#define add_MAX 50
#define default_capacity 3

enum Options
{
	quit=0,   //0
	Add,    //1
	Del,
	search,
	modify,
	show,
	sort,
	save
};

struct  a                   //ÿ���˵���Ϣ
{            
	int age;
	char name[name_MAX];
	char number[number_MAX];
	char sex[5];
	char add[add_MAX];
};
struct PeoInfo             //ͨѶ¼
{     
	struct a *con;              //��̬�ڴ�ָ��
	int size;                  //ͨѶ¼��Ԫ�ظ���
	int capacity;              //������С
};

//��������
void InitContact(struct PeoInfo* ps);
void AddContact(struct PeoInfo* ps);
void ShowContact(const struct PeoInfo* ps);
void DelContact(struct PeoInfo* ps);
void SearchContact(const struct PeoInfo* ps); 
void modifyContact(struct PeoInfo* ps);
void SortContact(struct PeoInfo* ps);
void SaveContact(struct PeoInfo* ps);
void LoadContact(struct PeoInfo* ps);