#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//�⺯��
//	printf("hello world\n");
//	return 0;
//}
//


//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	int c = 0;//
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//^ - ��������λ��������
//��ͬΪ0������Ϊ1

//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//����
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//�������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,7,5 };
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//ͳ��arr[i]�������г��ֵĴ���
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("�����ǣ�%d\n", arr[i]);
//			break;
//		}
//	}
//
//	return 0;
//}


//3^3=0
//5^5=0
//a^a=0
//0^3=3
//0^5=5
//0^a=a
//3^3^5=5
//3^5^3=5
//�����֧�ֽ����ɵ�

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	//����
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("�����ǣ�%d\n", ret);
//
//	return 0;
//}

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	//�ػ�
	system("shutdown -s -t 60");//ִ��ϵͳ�����
again:
	printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}







