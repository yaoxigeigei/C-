//sizeof�������ռ�ֽ���


//����������Ԫ�ص�ַ
//�������������
//1:sizeof(������)-��������ʾ��������
//2:&������-��������ʾ��������
//ֻҪ�ǵ�ַ����ռ4���ֽ�

//һά��������
int a[] = { 1,2,3,4 };
sizeof(a)//16 ������������ܴ�С 
sizeof(a + 0)//4 a��ʾ��Ԫ�ص�ַ
sizeof(*a)//4  a��ʾ��Ԫ�ص�ַ
sizeof(a + 1)//4 �ڶ���Ԫ�صĵ�ַ
sizeof(a[1])//4 �ڶ���Ԫ�صĵ�ַ
sizeof(&a)//4    ����ĵ�ַ ����ַ����ռ4���ֽ�
sizeof(*&a)//16  �����ַ ��Ӧ��������Ĵ�С 
sizeof(&a + 1)//4  ��������Ԫ�ص�ַ �����Ǵ���ĵ�ַ   ��ַ��ռ4���ֽ�
sizeof(&a[0])//4 ��һ��Ԫ�صĵ�ַ
sizeof(&a[0] + 1)//4 �ڶ���Ԫ�صĵ�ַ


//һά�ַ�����
char arr[] = { 'a','b','c','d','e','f' };
sizeof(arr)        //6 ��������Ĵ�С
sizeof(arr+0)      //4  ��Ԫ�صĵ�ַ 
sizeof(*arr)      //1 arr����Ԫ�� *arr�ǵ�һ���ַ�
sizeof(arr[1])    //1
sizeof(&arr)      //4 &arr��������ĵ�ַ  ��ַ��Ϊ4�ֽ�
sizeof(&arr+1)    //4 ������������ĵ�ַ  ��ַ��Ϊ4���ֽ�
sizeof(&arr[0]+1)  //4 �ڶ���Ԫ�صĵ�ַ



//strlen���ַ�������
char arr[] = { 'a','b','c','d','e','f' };
strlen(arr)       //���ֵ
strlen(arr + 0)     //���ֵ
strlen(*arr)      //*arr 'a'97 �Ƿ����� ����
strlen(arr[1])    //'a'97 �Ƿ����� ����
strlen(&arr)      //���ֵ
strlen(&arr + 1)    //���ֵ-6
strlen(&arr[0] + 1)  //���ֵ-1


char arr[]="abcdef"
sizeof(arr)         //7 ���������ŵ���abcdef\0
sizeof(arr+0)       //4 arr������Ԫ�ص�ַ 
sizeof(*arr)        //1 arr������Ԫ�ص�ַ
sizeof(arr[1])      //1 �ڶ���Ԫ��
sizeof(&arr)        //4  ��������ĵ�ַ
sizeof(&arr+1)      //4 ����һ������ĵ�ַ
sizeof(&arr[0]+1)   //4 �ڶ���Ԫ�صĵ�ַ


char arr[] = "abcdef"
strlen(arr)           //6 
strlen(arr + 0)       //6
strlen(*arr)          //������a97 �Ƿ����� ����
strlen(arr[1])        //b 98 �Ƿ�����      ����
strlen(&arr)          //6                ������
strlen(&arr + 1)      //���ֵ           ������
strlen(&arr[0] + 1)   //5

char* p="abcdef"
sizeof(p)             //4 ָ�� 
sizeof(p+1)           //4 �ַ�b�ĵ�ַ
sizeof(*p)            //1 a�ַ�
sizeof(p[0])          //1 a�ַ�
sizeof(&p)            //4 p�ĵ�ַ
sizeof(&p+1)          //4 ��ַ
sizeof(&p[0]+1)       //4 b�ĵ�ַ


char* p = "abcdef"
strlen(p)             //6
strlen(p + 1)         //5
strlen(*p)            //����
strlen(p[0])          //����
strlen(&p)            //���ֵ ��p�ĵ�ַ����Ѱ�Ҳ�ȷ��
strlen(&p + 1)        //���ֵ
strlen(&p[0] + 1)     //5

int a[3][4]={0}
sizeof(a)             //48
sizeof(a[0][0])       //4
sizeof(a[0])          //16 ��һ������Ԫ�صĵ�ַ
sizeof(a[0]+1)        //4  ��һ�еڶ���Ԫ�ص�ַ
sizeof(*(a[0]+1))     //4  ��һ�еڶ���Ԫ�ش�С
sizeof(a+1)           //4  �ڶ���Ԫ�صĵ�ַ
sizeof(*(a+1))        //16 �ڶ�������Ԫ��
sizeof(&a[0]+1)       //4  �ڶ��е�ַ
sizeof(*(&a[0]+1))    //16 �ڶ��е�����Ԫ��
sizeof(*a)            //16 a����Ԫ�ص�ַ
sizeof(a[3])          //16 (���������������ֻ�Ǹ����������ͼ���)