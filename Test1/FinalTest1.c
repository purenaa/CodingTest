#include <stdio.h>

int main()
{
	//char X;		//�̵� ������ ��
	//char Y;		//�̵� �Ұ����� �ٸ� ��
	//char H;		//�Ϲ� ��
	/*char L;	*/	//��ĭ
	
	int i, j;
	
	char a = 76;	//'L'
	char b = 72;	//'H'
	char c = 89;	//'Y'
	char d = 88;	//'X'

	int count, n;	//count: Test case�� ����, N: �ٵ����� ũ��
	int flag = 0;

	//printf("Test case�� ������ �ٵ����� ũ��N�� �Է��ϼ���\n");
	scanf_s("%d %d", &count, &n);
	

	/*n* n;*/

	/*do {
		if(flag==1)
			scanf("%d", &n);
		
	} while (n < 8 || n > 100);*/

	
	if (n >= 8 || n <= 100)
	{
		do {
			scanf_s("%d", &n);
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					printf("%c ", a);
				}
				printf("\n");
			}
		} while ((count--)-1);

		/*if (i == 5 && j == 6)
		{
			printf("%c", b);
		}*/
	}
	return 0;
}