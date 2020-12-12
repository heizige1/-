#include<stdio.h>

int CountBitNum(int x)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (x % 2 == 1)
		{
			++count;
		}
		x >>= 1;
	}
	return count;
}

int main()
{
	printf("%d\n", CountBitNum(0xFFFFFFFF));
	return 0;
}
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count + 1);
//	return 0;
//}

//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//1/2-1/3+1/4-1/5+1/6......+1/n
c

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	printf("%d\n", sizeof(arr));//arr数组名，代表首元素地址，只有在sizeof中代表整个数组
//
//	return 0;
//}




//void BubbleSort(int* p, int n)
//{
//	int end = n;//多趟，通过end控制程序中止
//	while (end > 0)
//	{
//		int flag = 0;
//		//单趟冒泡
//		int i = 1;
//		for (; i < n; ++i)
//		{
//			if (p[i - 1]>p[i])
//			{
//				int tmp = p[i - 1];
//				p[i - 1] = p[i];
//				p[i] = tmp;
//
//				flag = 1;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		--end;
//	}
//}
//
//
//
//
////void BubbleSort(int* p, int n)
////{
////	//单趟冒泡
////	int i = 1;
////	for (; i < n; ++i)
////	{
////		if (p[i - 1]>p[i])
////		{
////			int tmp = p[i - 1];
////			p[i - 1] = p[i];
////			p[i] = tmp;
////		}
////	}
////}
//
//int main()
//{
//
//
//	return 0;
//}