//sizeof是求得所占字节数


//数组名是首元素地址
//除以下两种情况
//1:sizeof(数组名)-数组名表示整个数组
//2:&数组名-数组名表示整个数组
//只要是地址都是占4个字节

//一维整形数组
int a[] = { 1,2,3,4 };
sizeof(a)//16 计算的是数组总大小 
sizeof(a + 0)//4 a表示首元素地址
sizeof(*a)//4  a表示首元素地址
sizeof(a + 1)//4 第二个元素的地址
sizeof(a[1])//4 第二个元素的地址
sizeof(&a)//4    数组的地址 但地址都是占4个字节
sizeof(*&a)//16  数组地址 解应用总数组的大小 
sizeof(&a + 1)//4  跳过整个元素地址 但还是代表的地址   地址都占4个字节
sizeof(&a[0])//4 第一个元素的地址
sizeof(&a[0] + 1)//4 第二个元素的地址


//一维字符数组
char arr[] = { 'a','b','c','d','e','f' };
sizeof(arr)        //6 整个数组的大小
sizeof(arr+0)      //4  首元素的地址 
sizeof(*arr)      //1 arr是首元素 *arr是第一个字符
sizeof(arr[1])    //1
sizeof(&arr)      //4 &arr整个数组的地址  地址都为4字节
sizeof(&arr+1)    //4 跳过整个数组的地址  地址都为4个字节
sizeof(&arr[0]+1)  //4 第二个元素的地址



//strlen求字符串长度
char arr[] = { 'a','b','c','d','e','f' };
strlen(arr)       //随机值
strlen(arr + 0)     //随机值
strlen(*arr)      //*arr 'a'97 非法访问 错误
strlen(arr[1])    //'a'97 非法访问 错误
strlen(&arr)      //随机值
strlen(&arr + 1)    //随机值-6
strlen(&arr[0] + 1)  //随机值-1


char arr[]="abcdef"
sizeof(arr)         //7 数组里面存放的是abcdef\0
sizeof(arr+0)       //4 arr代表首元素地址 
sizeof(*arr)        //1 arr代表首元素地址
sizeof(arr[1])      //1 第二个元素
sizeof(&arr)        //4  整个数组的地址
sizeof(&arr+1)      //4 跳过一个数组的地址
sizeof(&arr[0]+1)   //4 第二个元素的地址


char arr[] = "abcdef"
strlen(arr)           //6 
strlen(arr + 0)       //6
strlen(*arr)          //传的是a97 非法访问 错误
strlen(arr[1])        //b 98 非法访问      错误
strlen(&arr)          //6                报警告
strlen(&arr + 1)      //随机值           报警告
strlen(&arr[0] + 1)   //5

char* p="abcdef"
sizeof(p)             //4 指针 
sizeof(p+1)           //4 字符b的地址
sizeof(*p)            //1 a字符
sizeof(p[0])          //1 a字符
sizeof(&p)            //4 p的地址
sizeof(&p+1)          //4 地址
sizeof(&p[0]+1)       //4 b的地址


char* p = "abcdef"
strlen(p)             //6
strlen(p + 1)         //5
strlen(*p)            //错误
strlen(p[0])          //错误
strlen(&p)            //随机值 对p的地址进行寻找不确定
strlen(&p + 1)        //随机值
strlen(&p[0] + 1)     //5

int a[3][4]={0}
sizeof(a)             //48
sizeof(a[0][0])       //4
sizeof(a[0])          //16 第一行整个元素的地址
sizeof(a[0]+1)        //4  第一行第二个元素地址
sizeof(*(a[0]+1))     //4  第一行第二个元素大小
sizeof(a+1)           //4  第二行元素的地址
sizeof(*(a+1))        //16 第二行所有元素
sizeof(&a[0]+1)       //4  第二行地址
sizeof(*(&a[0]+1))    //16 第二行的所有元素
sizeof(*a)            //16 a是首元素地址
sizeof(a[3])          //16 (里的数不参与运算只是根据它的类型计算)