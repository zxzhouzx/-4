#include<stdio.h>
void main()
{
	char str2[] = "1+2+2+1+2+5+4-1-3+4-8";
	int i, sum;
	sum = str2[0] - '0';
	for (i = 1; str2[i] != '\0'; i++)
	{
		if (str2[i] == '+' || str2[i] == '-')
		{
			switch (str2[i])
			{
			case '+':sum=sum + (str2[i+1] - '0'); break;
			case '-':sum=sum - (str2[i+1] - '0'); break;
			}
		}
	}
	printf("sum=%d\n\n", sum);
}