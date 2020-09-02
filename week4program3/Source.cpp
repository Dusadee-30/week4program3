#include<Stdio.h>
int fact(int num)
{
	int all{ 1 };
	for (int a = 1;a <= num;a++)
	{
		all = all * a;
	}
	return all;
}
int main()
{
	int r, n[100],sum=0;
	printf("Input the range : ");
	scanf_s("%d", &r);
	for (int i = 1;i <= r;i++)
	{
		printf("number %d : ", i);
		scanf_s("%d",&n[i]);
	}
	for (int i = 1;i <= r;i++)
	{
		int sum = 0;
		for (int j = 1;j <= i;j++)
		{
			
			printf("%d! ", n[j]);
			sum += fact(n[j]);
			if (j == i)
			{
				break;
			}
			printf("+ ");
		}
		printf(" = %d", sum);
		printf("\n");
	}
}