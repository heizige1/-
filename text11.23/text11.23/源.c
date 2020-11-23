#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	float f = 0.f;
	scanf("%f", &f);
	
	printf("%d", int(f) % 10);
	return 0;
}

//四位数从后往前输出

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a %10);
//	a = a / 10;
//	printf("%d", a % 10);
//	a = a / 10;
//	printf("%d", a % 10);
//	a = a / 10;
//	printf("%d\n", a % 10);
//	a = a / 10;
//	return 0;
//}

//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("%c%c%c%c\n", str[3], str[2], str[1], str[0]);
//	return 0;
//}