#include<stdio.h>
void main()
{
char str3[] = "2*2/4*1/1*2*3/2"; 
	int result;
	result = str3[0] - '0';
	for (int i = 1; str3[i] != '\0'; i++)
	{
		if (str3[i] == '*' || str3[i] == '/')
		{
			switch (str3[i])
			{
			case '*':result = result * (str3[i + 1] - '0'); break;
			case '/':result = result / (str3[i + 1] - '0'); break;
			}
		}
	}
	printf("result=%d\n\n", result);
}