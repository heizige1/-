#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char str = [10];
	scanf("%s", str);
	printf( )
		return 0;
}


//商和余数
//int main()
//{
//	int a, b,ret1,ret2;
//	scanf("%d %d", &a, &b);
//	ret1 = a%b;
//	ret2 = a / b;
//	printf("%d %d", ret2,ret1);
//	return 0;
//}


//int main() {
//
//	int a = 0, b = 0, tmp;
//	scanf("%d,%d", &a, &b);
//	
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int x = 0;
//
//	scanf("a=%d,b=%d", &a, &b);
//	x = a;
//	a = b;
//	b = x;
//	
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//int main() {
//
//	int year = 0, month = 0, day = 0;
//
//	scanf("%4d%2d%2d", &year, &month, &day);
//    //使用%0可以填充前导0，%m可以指定输入的域宽
//	printf("year=%d\n", year);
//
//	printf("month=%d\n", month);
//	
//	printf("day=%d\n", day);
//	
//	return 0;
//}


//ASCII码转换成字符
//int main()
//{
//	char string[] = { 73,32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	printf("%s\n", string);
//	return 0;
//}
//



//金字塔型输出
//int main()
//{
//	char a;//定义一个字符串
//	scanf("%c", &a);
//	for (int i = 1; i <= 5; i++)//第一层for循环，可见循环5次，即这个金字塔有5层
//	{
//		for (int j = 5 - i; j>0; j--)//打印字符前的空格，第一行4个空，第二行3个逐行递减。
//			printf(" ");
//		for (int m = 1; m <= i; m++)//打印字符，第一行1个，第二行2个，逐行递增。
//			printf("%c ", a);
//		printf("\n");
//	}
//	return 0;
//}



//printf的返回值
//int main()
//{
//	int ret = printf("hello world\n");
//
//	printf("%d\n", ret);
//	return 0;
//}




//十进制转换八进制和十六进制“%o”“%x”
//int main()
//{
//	int val = 0;
//	scanf("%d", &val);
//	
//
//	printf("%#o %#x", val, val);
//
//	return 0;
//}
//16进制转10进制
//int main()
//{
//	int val = 0xABCDEF;
//
//	printf("%15d\n", val);
//	
//	return 0;
//}