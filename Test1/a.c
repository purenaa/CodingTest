#include <stdio.h>

int main()
{
	int i, j;

	char a = 76;

	int count, n;	//count: Test case�� ����, N: �ٵ����� ũ��
	int flag = 0;


	printf("Test case�� ������ �ٵ����� ũ��N�� �Է��ϼ���\n");
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