#include<stdio.h>
//int check()                           //������
//{
//	int a = 1;
//	short* b = (short*)&a;
//	return *b;
//}
int check()                             //�Ż�������
{
	int a = 1;
	return *(short*)&a;
}
int main()
{
	//int a = 1;                            //����һ
	//char* b = (char*)&a;
	//if (*b == 0)
	//	printf("���豸Ϊ��˴洢ģʽ");
	//else
	//	printf("���豸ΪС�˴洢ģʽ");

	//дһ���жϴ�С�˵ĺ���
	//�������1����С�� ����0���Ǵ��
	int a = 1;
	int b=check();
	if (b == 1)
		printf("���豸��С�˴洢ģʽ");
	else
		printf("���豸�Ǵ�˴洢ģʽ");
	return 0;
}