#include <stdio.h>

int main(void)
{
	int T, j;		// T: 테스트 케이스의 수
	int N;			// N: 선수의 수
	int e, k = 0;
	int sum = 0;
	int v;
		
	scanf("%d", &T);											// T: 테스트 케이스의 수 입력
	for (j = 1; j <= T; j++)									// 입력
	{
		scanf("%d", &N);										// N: 선수의 수 입력
		if (1 <= N <= 200000 || -10000 <= k <= 10000);			// 예외처리
		{
			for (e = 0; e < N; e++)								// 선수의 수 만큼 입력받기
			{
				scanf("%d", &k);								// k: 선수의 실력 입력	
				sum += k;										// sum: 선수 실력의 합
			}
		}
	}
	printf("\n");

	for (j = 1; j <= T; j++)									// 출력
	{
		for (e = 0; e < N; e++)									// 선수의 수 만큼 입력받기
		{
			sum += k;											// sum: 선수 실력의 합
			sum = (sum % 1000000007);							// sum: 선수 실력의 합을 1000000007로 나눈 나머지 값
		}
		printf("#%d %d\n", j, sum);
	}
	return 0;
}




//int main(void)
//{
//	int T, j;		// T: 테스트 케이스의 수
//	int N;			// N: 선수의 수
//	int e, k = 0;
//	int sum1, sum2, sum3 = 0;
//	int v;
//
//	scanf("%d", &T);
//	for (j = 1; j <= T; j++)									// 입력
//	{
//		scanf("%d", &N);										// N: 선수의 수 입력
//		if (1 <= N <= 200000 || -10000 <= k <= 10000);			// 예외처리
//		{
//			if (j == 1)
//			{
//				for (e = 0; e < N; e++)								// 선수의 수 만큼 입력받기
//				{
//					scanf("%d", &k);								// k: 선수의 실력 입력	
//					sum1 += k;										// sum: 선수 실력의 합
//				}
//			}
//			if (j == 2)
//			{
//				for (e = 0; e < N; e++)								// 선수의 수 만큼 입력받기
//				{
//					scanf("%d", &k);								// k: 선수의 실력 입력	
//					sum2 += k;										// sum: 선수 실력의 합
//				}
//			}
//			if (j == 3)
//			{
//				for (e = 0; e < N; e++)								// 선수의 수 만큼 입력받기
//				{
//					scanf("%d", &k);								// k: 선수의 실력 입력	
//					sum3 += k;										// sum: 선수 실력의 합
//				}
//			}
//
//
//		}
//	}
//	printf("\n");
//
//	for (j = 1; j <= T; j++)									// 출력
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
