#include<stdio.h>

//���������Լ��

//�����
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
	printf("%d\n", a);//��ʱa b��ȣ�����ѭ����a����b��ֵ��������Ҫ�����Լ����ֵ
}

//��ٷ�
//int main()
//{
//	int a, b, c;
//	while (1)
//	{
//		scanf("%d %d", &a, &b);
//		c = (a > b) ? b : a;//��Ŀ�������ȡa��b�еĽ�Сֵ����ٵ����
//	
//		//�����������κ�һ�����޷���c��������������c--��ֱ����һ����ʹ����������������c���֣��������������Ҫ�ҵ����Լ��
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




//շת���
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