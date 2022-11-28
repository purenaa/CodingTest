#include <stdio.h>

int main()
{
	//char X;		//이동 가능한 포
	//char Y;		//이동 불가능한 다른 포
	//char H;		//일반 알
	/*char L;	*/	//빈칸
	
	int i, j;
	
	char a = 76;	//'L'
	char b = 72;	//'H'
	char c = 89;	//'Y'
	char d = 88;	//'X'

	int count, n;	//count: Test case의 개수, N: 바둑판의 크기
	int flag = 0;

	//printf("Test case의 개수와 바둑판의 크기N을 입력하세요\n");
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