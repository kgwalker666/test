#include <stdio.h>

int main()
{
	int num = 0;
	int d1, d2, d3, m1, m2, m3;
	int result[20] = { 0 };
	int index = 0;

	printf("请输入数据组数：");
	scanf("%d", &num);


	while (num--)

	{
		printf("请输入第一组数：");
		scanf("%d %d", &d1, &m1);
		
		printf("请输入第二组数：");
		scanf("%d %d", &d2, &m2);

		printf("请输入第三组数：");
		scanf("%d %d", &d3, &m3);

		for (int n = 1; n < 1000000; n++)
		{
			if ((n%d1 == m1) && (n%d2 == m2) && (n%d3 == m3))
			{
				result[index++] = n;
				break;
			}
		}

		printf("\n");

	}

	for (int i = 0; i < index; i++)
	{
		printf("第%d组结果：\t%d\n", i+1, result[i]);
	}

	return 0;
}