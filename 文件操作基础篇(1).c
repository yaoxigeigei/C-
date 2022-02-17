#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>
//int main()                                                                 //写1个字符
//{ 
//    FILE* fwrite = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt","w");
//    if (fwrite == NULL)
//    {
//        printf("错误信息:",strerror(errno));
//    }
//    //写入文件
//    fputc('a', fwrite);
//    fputc('b', fwrite);
//    fputc('c', fwrite);
//    //关闭文件
//    fclose(fwrite);
//    fwrite = NULL;
//
//    return 0;
//}

//int main()                                                                //读1个字符
//{
//    FILE* fread = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "r");
//    if (fread == NULL)
//    {
//        printf("错误信息:%s", strerror(errno));
//    }
//    //读文件
//    printf("%c ", fgetc(fread));
//    printf("%c ", fgetc(fread)); 
//    printf("%c ", fgetc(fread));
//
//    //关闭文件
//    fclose(fread);
//    fread = NULL;
//
//    return 0;
//}



int main()
{
	char arr[1024] = { 0 };
	//fgets(arr,1024,stdin);   //从标准输入流读取数据
	//fputs(arr,stdout);       //输出到标准输出流

	gets(arr);  
	puts(arr);
	return 0;
}