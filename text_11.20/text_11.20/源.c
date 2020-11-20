#include<stdio.h>

//求两数最大公约数

//相减法
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("%d\n", a);//此时a b相等，跳出循环，a或者b的值都是我们要的最大公约数的值
}

//穷举法
//int main()
//{
//	int a, b, c;
//	while (1)
//	{
//		scanf("%d %d", &a, &b);
//		c = (a > b) ? b : a;//三目运算符，取a和b中的较小值做穷举的起点
//	
//		//两个数中有任何一个数无法被c整除，则继续穷举c--，直到第一个能使两个数都被整除的c出现，这个数就是我们要找的最大公约数
//		
//		while (a%c != 0 || b%c != 0)
//		{
//			c--;
//		}
//		printf("%d", c);
//	}
//	
//	return 0;
//}




//辗转相除
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}