#include"mail list.h"

void menu()
{
	printf("**************************************************\n");
	printf("********       1:Add           2:Del        ******\n");
	printf("********       3:search        4:modify     ******\n");
	printf("********       5:show          6:sort       ******\n");
	printf("********       0:exit                       ******\n");
	printf("**************************************************\n");
	printf("**************************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼ 
	struct PeoInfo con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("ѡ������Ҫ�Ĳ���>>");
		scanf_s("%d", &input);
		switch (input)
		{
		case Add:AddContact(&con); break;
		case Del:DelContact(&con); break;
		case search:SearchContact(&con); break;
		case modify:modifyContact(&con); break;
		case show:ShowContact(&con); break;
		case sort:SortContact(&con); break;
		case exit:printf("�˳�"); break;
		default:printf("�����ʽ�Ƿ�,����������:\n"); break;
		}
	} while (input);
	return 0;
}