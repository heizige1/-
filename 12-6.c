#include<stdio.h>

//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 3;
//	swap(&a, &b);
//
//	return 0;
//}

// 闰年返回1 否则返回0
//int IsLeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) 
//		|| year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//
//	if (IsLeapYear(year))
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 是平年\n", year);
//	}
//
//	return 0;
//}



//int main()
//{
//	int a[] = {10,20,30,40,50,60,70,80,90,100};
//	int n = sizeof(a) / sizeof(int);
//
//	int x;
//	scanf("%d", &x);
//
//	// []
//	//int left = 0, right = n - 1;
//	//while (left <= right)
//	//{
//	//	//int mid = (left + right) / 2;
//	//	int mid = (left + right) >> 1;
//	//	if (a[mid] < x)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else if (a[mid] > x)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else
//	//	{
//	//		printf("找到了:%d\n", mid);
//	//		break;
//	//	}
//	//}
//
//	// [)
//	int left = 0, right = n;
//	while (left < right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = (left + right) >> 1;
//		if (a[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//
//	return 0;
//}

// 找到了返回下标
// 没找到返回-1
//int BinarySearch(int* a, int n, int x)
//{
//	// [)
//	int left = 0, right = n;
//	while (left < right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = (left + right) >> 1;
//		if (a[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			right = mid;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//	int n = sizeof(a) / sizeof(int);
//
//	//int x;
//	//scanf("%d", &x);
//
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d\n", BinarySearch(a, n, a[i]));
//	}
//
//	printf("%d\n", BinarySearch(a, n, 25));
//
//	
//	return 0;
//}

//void AddOne(int* pnum)
//{
//	*pnum += 1;
//}
//
//int main()
//{
//	int num = 0;
//	AddOne(&num);
//
//	printf("%d\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//
//// 前置声明
//void three_line();
//void new_line();
//
//// 编译调用函数的和变量时，只会向上查找
//int main()
//{
//	three_line();
//	return 0;
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//void new_line()
//{
//	printf("hehe\n");
//}

//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	//这里介绍一下strlen函数
//
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 4300)));
//	//结果是啥？
//	return 0;
//}

//#include "game.h"
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	swap(&a, &b);
//
//	return 0;
//}

//void PrintInt(int num)
//{
//	if (num == 0)
//		return;
//
//	printf("%d\n", num % 10);
//
//	PrintInt(num / 10);
//}
//
//int main()
//{
//	// 分离出一个整数的各个整数位
//	int x = 4321;
//	PrintInt(x);
//
//	return 0;
//}

// 不用循环实现1+2+3+4...+n
// f(n) = f(n-1)+n
int Add1ToN(int n)
{
	if (n == 1)
		return 1;

	int ret = Add1ToN(n - 1);
	return n + ret;
}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", Add1ToN(n));
//
//
//	return 0;
//}

//"hello\n\\t\nworld"
// 递归子问题：如果我自己不是\0,转换成我自己的长度1+后面子串的长度(下一个字符到\0位置的长度)
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char a[] = "hello\n\\t\nworld";
//	// 模拟实现strlen，但是这个strlen不能用循环
//	printf("%d\n", my_strlen(a));
//	//printf("%d\n", strlen(a));
//
//	
//	return 0;
//}

//int fib(int n)
//{
//	if (n < 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

int fib1(int n)
{
	if (n < 2)
	{
		return n;
	}

	return fib1(n - 1) + fib1(n - 2);
}

unsigned long long fib2(int n)
{
	if (n < 2)
	{
		return n;
	}

	unsigned long long  f0 = 0, f1 = 1, f2;
	int i = 2;
	while (i <= n)
	{
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		++i;
	}

	return f2;
}

//int main()
//{
//	printf("%lld\n", fib2(50));
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", Add1ToN(100000));
//
//	return 0;
//}

#define N 10

//int main()
//{
//	int a;
//	int arr1[10];
//	int arr2[N];
//
//	/*const int n = 10;
//	int arr3[n];*/
//
//	//int n;
//	//scanf("%d", &n);
//	//int arr4[n];
//	//int* arr4 = malloc(n*sizeof(int));
//
//
//	return 0;
//}

//int main()
//{
//	int arr0[5]; // 随机值
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 1, 2, 3 }; // 后两个默认是0
//	int arr3[] = { 1, 2, 3, 4 }; 
//	// 初始化给几个，默认就会初始化多大
//
//	char str1[5] = { 'a', 'b', 'c' };
//
//	// 字符数组的特殊初始化方式
//	char str2[6] = "abcd";
//	char str3[] = "abcd";
//	int size = sizeof(str3) / sizeof(char);
//
//
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	for (int i = 4; i >= 0; --i)
//	{
//		printf("%p\n", &arr1[i]);
//	}
//	printf("\n");
//
//	//int arr2[10] = { 0 };
//
//	return 0;
//}

//-----------------------------------------------------
// 二维数组

//int main()
//{
//	// 二维数组 第一个[]中是行 第二个[]中列
//	// 行列只能用常量
//	int arr1[5][3];
//	// ***
//	// ***
//	// ***
//	// ***
//	// ***
//
//	// 初始化
//	int arr2[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int arr3[3][2] = { { 1, 2 }, { 3}};
//	// 只初始化了一部分，默认会给0
//
//	// 必须给列的值
//	int arr4[][2] = { { 1, 2 }, { 3, 4 } };
//
//	// 打印arr2  使用
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 2; ++j)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//
//	// 二维数组在内存是如何存储的呢？
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 2; ++j)
//		{
//			printf("%p ", &arr2[i][j]);
//		}
//		printf("\n");
//	}
//
//	int* p = &arr2[0][0];
//	for (int i = 0; i < 6; ++i)
//	{
//		printf("%d", *(p + i));
//	}
//	printf("\n");
//
//	int x = 2, y = 1;
//	printf("%d == %d", arr2[x][y], *(p+x*2+y));
//
//
//	return 0;
//}

// c语言不允许传数组，传过去都是首元素的地址
// 下面3种写法都可以，但是传过来的都只首元素地址
//void fun(int a[10])
//void fun(int a[])
//void fun(int* a)
//{
//	printf("%d\n", sizeof(a));
//}
//
//int main()
//{
//	int a[10] = {1,2,3};
//	printf("%d\n", sizeof(a));
//	
//	fun(a);
//
//	return 0;
//}


