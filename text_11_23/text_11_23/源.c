#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char str = [10];
	scanf("%s", str);
	printf( )
		return 0;
}


//�̺�����
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
//    //ʹ��%0�������ǰ��0��%m����ָ����������
//	printf("year=%d\n", year);
//
//	printf("month=%d\n", month);
//	
//	printf("day=%d\n", day);
//	
//	return 0;
//}


//ASCII��ת�����ַ�
//int main()
//{
//	char string[] = { 73,32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	printf("%s\n", string);
//	return 0;
//}
//



//�����������
//int main()
//{
//	char a;//����һ���ַ���
//	scanf("%c", &a);
//	for (int i = 1; i <= 5; i++)//��һ��forѭ�����ɼ�ѭ��5�Σ��������������5��
//	{
//		for (int j = 5 - i; j>0; j--)//��ӡ�ַ�ǰ�Ŀո񣬵�һ��4���գ��ڶ���3�����еݼ���
//			printf(" ");
//		for (int m = 1; m <= i; m++)//��ӡ�ַ�����һ��1�����ڶ���2�������е�����
//			printf("%c ", a);
//		printf("\n");
//	}
//	return 0;
//}



//printf�ķ���ֵ
//int main()
//{
//	int ret = printf("hello world\n");
//
//	printf("%d\n", ret);
//	return 0;
//}




//ʮ����ת���˽��ƺ�ʮ�����ơ�%o����%x��
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
//16����ת10����
//int main()
//{
//	int val = 0xABCDEF;
//
//	printf("%15d\n", val);
//	
//	return 0;
//}