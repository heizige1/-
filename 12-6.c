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

// ���귵��1 ���򷵻�0
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
//		printf("%d ������\n", year);
//	}
//	else
//	{
//		printf("%d ��ƽ��\n", year);
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
//	//		printf("�ҵ���:%d\n", mid);
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
//			printf("�ҵ���:%d\n", mid);
//			break;
//		}
//	}
//
//	return 0;
//}

// �ҵ��˷����±�
// û�ҵ�����-1
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
//// ǰ������
//void three_line();
//void new_line();
//
//// ������ú����ĺͱ���ʱ��ֻ�����ϲ���
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
//	//�������һ��strlen����
//
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 4300)));
//	//�����ɶ��
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
//	// �����һ�������ĸ�������λ
//	int x = 4321;
//	PrintInt(x);
//
//	return 0;
//}

// ����ѭ��ʵ��1+2+3+4...+n
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
// �ݹ������⣺������Լ�����\0,ת�������Լ��ĳ���1+�����Ӵ��ĳ���(��һ���ַ���\0λ�õĳ���)
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
//	// ģ��ʵ��strlen���������strlen������ѭ��
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
//	int arr0[5]; // ���ֵ
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 1, 2, 3 }; // ������Ĭ����0
//	int arr3[] = { 1, 2, 3, 4 }; 
//	// ��ʼ����������Ĭ�Ͼͻ��ʼ�����
//
//	char str1[5] = { 'a', 'b', 'c' };
//
//	// �ַ�����������ʼ����ʽ
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
// ��ά����

//int main()
//{
//	// ��ά���� ��һ��[]������ �ڶ���[]����
//	// ����ֻ���ó���
//	int arr1[5][3];
//	// ***
//	// ***
//	// ***
//	// ***
//	// ***
//
//	// ��ʼ��
//	int arr2[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int arr3[3][2] = { { 1, 2 }, { 3}};
//	// ֻ��ʼ����һ���֣�Ĭ�ϻ��0
//
//	// ������е�ֵ
//	int arr4[][2] = { { 1, 2 }, { 3, 4 } };
//
//	// ��ӡarr2  ʹ��
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 2; ++j)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//
//	// ��ά�������ڴ�����δ洢���أ�
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

// c���Բ��������飬����ȥ������Ԫ�صĵ�ַ
// ����3��д�������ԣ����Ǵ������Ķ�ֻ��Ԫ�ص�ַ
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


