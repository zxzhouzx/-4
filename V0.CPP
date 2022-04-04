#include<stdio.h>
int main()
{
	char str1[] = "3+4";  
	int a, b;
	a = str1[0] - '0';
	b = str1[2] - '0';
	printf("3+4=%d\n\n", a + b);
}