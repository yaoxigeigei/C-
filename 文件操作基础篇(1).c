#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>
//int main()                                                                 //д1���ַ�
//{ 
//    FILE* fwrite = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt","w");
//    if (fwrite == NULL)
//    {
//        printf("������Ϣ:",strerror(errno));
//    }
//    //д���ļ�
//    fputc('a', fwrite);
//    fputc('b', fwrite);
//    fputc('c', fwrite);
//    //�ر��ļ�
//    fclose(fwrite);
//    fwrite = NULL;
//
//    return 0;
//}

//int main()                                                                //��1���ַ�
//{
//    FILE* fread = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "r");
//    if (fread == NULL)
//    {
//        printf("������Ϣ:%s", strerror(errno));
//    }
//    //���ļ�
//    printf("%c ", fgetc(fread));
//    printf("%c ", fgetc(fread)); 
//    printf("%c ", fgetc(fread));
//
//    //�ر��ļ�
//    fclose(fread);
//    fread = NULL;
//
//    return 0;
//}



int main()
{
	char arr[1024] = { 0 };
	//fgets(arr,1024,stdin);   //�ӱ�׼��������ȡ����
	//fputs(arr,stdout);       //�������׼�����

	gets(arr);  
	puts(arr);
	return 0;
}