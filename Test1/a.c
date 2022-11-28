#include <stdio.h>

int main()
{
	int i, j;

	char a = 76;

	int count, n;	//count: Test case의 개수, N: 바둑판의 크기
	int flag = 0;


	printf("Test case의 개수와 바둑판의 크기N을 입력하세요\n");
	scanf("%d %d", &count, &n);

	if (n >= 8 || n <= 100)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				printf("%c ", a);
			}
			printf("\n");
		}
	}
	return 0;
}