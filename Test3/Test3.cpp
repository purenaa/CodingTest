#include <stdio.h>

int main(void)
{
	int T, j;		// T: �׽�Ʈ ���̽��� ��
	int N;			// N: ������ ��
	int e, k = 0;
	int sum = 0;
	int v;
		
	scanf("%d", &T);											// T: �׽�Ʈ ���̽��� �� �Է�
	for (j = 1; j <= T; j++)									// �Է�
	{
		scanf("%d", &N);										// N: ������ �� �Է�
		if (1 <= N <= 200000 || -10000 <= k <= 10000);			// ����ó��
		{
			for (e = 0; e < N; e++)								// ������ �� ��ŭ �Է¹ޱ�
			{
				scanf("%d", &k);								// k: ������ �Ƿ� �Է�	
				sum += k;										// sum: ���� �Ƿ��� ��
			}
		}
	}
	printf("\n");

	for (j = 1; j <= T; j++)									// ���
	{
		for (e = 0; e < N; e++)									// ������ �� ��ŭ �Է¹ޱ�
		{
			sum += k;											// sum: ���� �Ƿ��� ��
			sum = (sum % 1000000007);							// sum: ���� �Ƿ��� ���� 1000000007�� ���� ������ ��
		}
		printf("#%d %d\n", j, sum);
	}
	return 0;
}




//int main(void)
//{
//	int T, j;		// T: �׽�Ʈ ���̽��� ��
//	int N;			// N: ������ ��
//	int e, k = 0;
//	int sum1, sum2, sum3 = 0;
//	int v;
//
//	scanf("%d", &T);
//	for (j = 1; j <= T; j++)									// �Է�
//	{
//		scanf("%d", &N);										// N: ������ �� �Է�
//		if (1 <= N <= 200000 || -10000 <= k <= 10000);			// ����ó��
//		{
//			if (j == 1)
//			{
//				for (e = 0; e < N; e++)								// ������ �� ��ŭ �Է¹ޱ�
//				{
//					scanf("%d", &k);								// k: ������ �Ƿ� �Է�	
//					sum1 += k;										// sum: ���� �Ƿ��� ��
//				}
//			}
//			if (j == 2)
//			{
//				for (e = 0; e < N; e++)								// ������ �� ��ŭ �Է¹ޱ�
//				{
//					scanf("%d", &k);								// k: ������ �Ƿ� �Է�	
//					sum2 += k;										// sum: ���� �Ƿ��� ��
//				}
//			}
//			if (j == 3)
//			{
//				for (e = 0; e < N; e++)								// ������ �� ��ŭ �Է¹ޱ�
//				{
//					scanf("%d", &k);								// k: ������ �Ƿ� �Է�	
//					sum3 += k;										// sum: ���� �Ƿ��� ��
//				}
//			}
//
//
//		}
//	}
//	printf("\n");
//
//	for (j = 1; j <= T; j++)									// ���
//	{
//		printf("#%d %d\n", j, sum1);
//		printf("#%d %d\n", j, sum2);
//		printf("#%d %d\n", j, sum3);
//	}
//	return 0;
//}




	
	
	
	
//#include<stdio.h>
//int main(void) {
//	int AnswerN;
//	int N = 10;
//	int t;
//
//	scanf("%d", &t);
//
//	for (int test_case = 1; test_case <= t; test_case++) {
//		printf("#%d %d\n", test_case, AnswerN);
//	}
//
//	return 0;
//}
