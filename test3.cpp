#include<stdio.h>

int main()
{
	int i, j, k;
	int kong[10];
	for ( i = 0; i < 10; i++)
	{
		printf("请输入第%d个整数：", i + 1);
		scanf_s("%d", &kong[i]);

	}
	for ( i = 0; i < 10; i++)
	{
		printf("你输入的数组：a[%d]= %d \n", i, kong[i]);
	}
	for (i = 0; i < 10; i++)
	{


		for (j = 0; j < 9; j++)
		{
			if (kong[j] > kong[j + 1])
			{
				k = kong[j + 1];
				kong[j + 1] = kong[j];
				kong[j] = k;
			}
		}
	}
	for ( i = 0; i < 10; i++)
	{
		printf("从小到大排序是：a[%d]=%d \n",i,kong[i]);

	}
	return 0;
}

