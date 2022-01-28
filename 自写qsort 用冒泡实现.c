#include<stdio.h>
void swap(char* e1, char* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++; 
	}
}
int cmp_int(const void*e1,const void* e2)
{
	return *(int *)e1 - *(int*)e2;
}
void my_qsort(void* base,int sz,int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		//每一趟比较的对数	
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
}

int cmp_struct()
{

}
struct str {
	int age;
	char name[20];
};
void test2()
{
	struct str s[3] = { {20,"八嘎"},{65,"要洗"},{11,"卡没收"} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s,sz,sizeof(s[0]),cmp_struct);
}
int main()
{
	test1();
	test2();
	return 0;
}


