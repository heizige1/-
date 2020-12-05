#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;

	for (i = 0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i<10; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	printf("max = %d\n", max);
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);//%2d预留两个位置
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

	//int main()
	//{
	//	int a, b, c;
	//	while (1)
	//	{
	//		scanf("%d %d", &a, &b);
	//		c = (a > b) ? b : a;//三目运算符，取a和b中的较小值做穷举的起点

	//		//两个数中有任何一个数无法被c整除，则继续穷举c--，直到第一个能使两个数都被整除的c出现，这个数就是我们要找的最大公约数

	//		while (a%c != 0 || b%c != 0)
	//		{
	//			c--;
	//		}
	//		printf("%d", c);
	//	}

	//	return 0;
	//}




//int main()
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b);
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c);
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c);
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

