#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)    //int比较
{ 
	return *(int*)e1 - *(int*)e2;                 //升序
} 
void test1()      //int类型
{
	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);       
	//1:要排序的数组名
	//2:数组的个数
	//3:数组里每个元素的所占字节数
	//4:使用函数(固定形式,求什么类型写什么类型)
	int i = 0;//int类型
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}




int cmp_float(const void* e1, const void* e2)   //float比较
{
	if (*(float*)e1 == *(float*)e2)
		return 0;                                //相等返回0
	else if (*(float*)e1 > *(float*)e2)
		return 1;                                //前大于后返回大于0的数
	else
		return -1;                               //前小于后返回小于0的数

	//或者可以
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()     //float类型
{
	double arr2[] = { 1.0,5.6,9.88,5.44,3.22,0.55,5.99 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);
	//1:要排序的数组名
	//2:数组的个数
	//3:数组里每个元素的所占字节数
	//4:使用函数(固定形式,求什么类型写什么类型)
	int j = 0;
	for (j = 0; j < sz2; j++)
	{
		printf("%f ", arr2[j]);
	}
}





struct str {                                //结构体类型比较
	int age;
	char name[20];
};
int cmp_struct_age(const void* e1, const void* e2)               //按年龄比较
{
	return ((struct str*)e1)->age - ((struct str*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)             //按名字比较
{
	return *((struct str*)e1)->name - *((struct str*)e2)->name;
}
void test3()
{
	struct str s[3] = { {20,"八嘎"},{30,"雅鹿"},{15,"阿达"} };
	int sz3 = sizeof(s) / sizeof(s[0]);
	qsort(s, sz3, sizeof(s[0]), cmp_struct_age);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}


