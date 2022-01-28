#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)    //int�Ƚ�
{ 
	return *(int*)e1 - *(int*)e2;                 //����
} 
void test1()      //int����
{
	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);       
	//1:Ҫ�����������
	//2:����ĸ���
	//3:������ÿ��Ԫ�ص���ռ�ֽ���
	//4:ʹ�ú���(�̶���ʽ,��ʲô����дʲô����)
	int i = 0;//int����
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}




int cmp_float(const void* e1, const void* e2)   //float�Ƚ�
{
	if (*(float*)e1 == *(float*)e2)
		return 0;                                //��ȷ���0
	else if (*(float*)e1 > *(float*)e2)
		return 1;                                //ǰ���ں󷵻ش���0����
	else
		return -1;                               //ǰС�ں󷵻�С��0����

	//���߿���
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()     //float����
{
	double arr2[] = { 1.0,5.6,9.88,5.44,3.22,0.55,5.99 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);
	//1:Ҫ�����������
	//2:����ĸ���
	//3:������ÿ��Ԫ�ص���ռ�ֽ���
	//4:ʹ�ú���(�̶���ʽ,��ʲô����дʲô����)
	int j = 0;
	for (j = 0; j < sz2; j++)
	{
		printf("%f ", arr2[j]);
	}
}





struct str {                                //�ṹ�����ͱȽ�
	int age;
	char name[20];
};
int cmp_struct_age(const void* e1, const void* e2)               //������Ƚ�
{
	return ((struct str*)e1)->age - ((struct str*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)             //�����ֱȽ�
{
	return *((struct str*)e1)->name - *((struct str*)e2)->name;
}
void test3()
{
	struct str s[3] = { {20,"�˸�"},{30,"��¹"},{15,"����"} };
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


