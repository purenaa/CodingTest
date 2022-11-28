#include <stdio.h>

int N;			// 게임판의 크기 (가로: N, 세로 4*(N-1))
int M;			// 이동카드의 사용할 수 있는 횟수
int cost;		// 통행료
//int totalCost;	// 총 최소 비용
/*int movecard[6] = { 1, 2, 3, 4, 5, 6 };	*/	// 이동카드 번호 종류
int movecard;

//int section;	// 칸의 영역번호

int* gamepan;	// 게임판
int i, j;		// j:행, i: 열
int r;
int index = 0;	// 자리 위치

int main()
{
	//int AnswerN;
	//int N = 10;
	//int t;

	//scanf("%d", &t);

	//for (int test_case = 1; test_case <= t; test_case++) {
	//	printf("#%d %d\n", test_case, AnswerN);
	//}

	while (1)
	{
		scanf("%d", &N);										// 게임판 크기 입력
		if (6 <= N <= 21)										// 게임판 크기 조건
		{
			gamepan[(4 * (N - 1))][(int*)N] = { NULL };			// 게임판

			for (i = N; i > 0; i--)								// 게임판 맨아래 (이동방향: 오른쪽->왼쪽)
			{
				gamepan[(4 * (N - 1))][(int*)N - i];			// ...이동중...
				index = i++;									// 이동할 때마다 영역 자리번호
			}

			scanf("&d", &M);										// 이동카드 사용 횟수 입력
			for (r = 1; r <= M; r++)										// 이동카드의 사용할 수 있는 횟수
			{
				//각 영역마다 통행료를 비교해서 최소값을 찾아야함
				//for (movecard = 1; movecard <= 6; movecard++)			// 이동카드를 한번씩 사용( 하여 비교해서 최소값을 찾기 위함 )
				//{
				gamepan[(4 * (N - 1))][(int*)N - movecard];		// 이동카드로 이동한 위치
				if (index == (N - movecard))
				{
					scanf("%d", &cost);						// 비용 입력
					if (0 <= cost <= 2000)
					{
						printf("%d", cost);					// 총 최소 비용
					}
					else
						continue;
				}
			}
			break;
		}
	}
	//게임판 위치와 무브카드의 위치가 일치할때 구현
	return 0;
}









////연습
//#include <stdio.h>
//
//int N;			// 게임판의 크기 (가로: N, 세로 4*(N-1))
//int M;			// 이동카드의 사용할 수 있는 횟수
//int cost;		// 통행료
//int totalCost;	// 총 최소 비용
//int movecard[6] = { 1, 2, 3, 4, 5, 6 };		// 이동카드 번호 종류
////int movecard;
//
//int section;	// 칸의 영역번호
//
//int* gamepan;	// 게임판
//int i, j;		// j:행, i: 열
//int r;
//int index = 0;	// 자리 위치
//
//int main()
//{
//	scanf("%d", &N);										// 게임판 크기 입력
//	if (6 <= N <= 21)										// 게임판 크기 조건
//	{
//		gamepan[(4 * (N - 1))][(int*)N] = { NULL };			// 게임판
//
//		for (i = N; i > 0; i--)								// 게임판 맨아래 (이동방향: 오른쪽->왼쪽)
//		{
//			gamepan[(4 * (N - 1))][(int*)N - i];
//
//			scanf("&d", &M);								// 이동카드 사용 횟수 입력
//			if (1 <= M <= 4)								// 이동카드의 사용할 수 있는 횟수
//			{
//
//				//게임판 위치와 무브카드의 위치가 일치할때 구현
//
//
//				for (section = 1; section < N; section++)	// 게임판 맨아래 영역번호
//				{
//					scanf("%d", &cost);						// 비용 입력
//					if (0 <= cost <= 2000)
//					{
//						totalCost = section * cost;			// 총 최소 비용
//					}
//				}
//			}
//		}
//	}
//
//	else
//		return 0;
//}
