#include <stdio.h>

int N;			// �������� ũ�� (����: N, ���� 4*(N-1))
int M;			// �̵�ī���� ����� �� �ִ� Ƚ��
int cost;		// �����
//int totalCost;	// �� �ּ� ���
/*int movecard[6] = { 1, 2, 3, 4, 5, 6 };	*/	// �̵�ī�� ��ȣ ����
int movecard;

//int section;	// ĭ�� ������ȣ

int* gamepan;	// ������
int i, j;		// j:��, i: ��
int r;
int index = 0;	// �ڸ� ��ġ

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
		scanf("%d", &N);										// ������ ũ�� �Է�
		if (6 <= N <= 21)										// ������ ũ�� ����
		{
			gamepan[(4 * (N - 1))][(int*)N] = { NULL };			// ������

			for (i = N; i > 0; i--)								// ������ �ǾƷ� (�̵�����: ������->����)
			{
				gamepan[(4 * (N - 1))][(int*)N - i];			// ...�̵���...
				index = i++;									// �̵��� ������ ���� �ڸ���ȣ
			}

			scanf("&d", &M);										// �̵�ī�� ��� Ƚ�� �Է�
			for (r = 1; r <= M; r++)										// �̵�ī���� ����� �� �ִ� Ƚ��
			{
				//�� �������� ����Ḧ ���ؼ� �ּҰ��� ã�ƾ���
				//for (movecard = 1; movecard <= 6; movecard++)			// �̵�ī�带 �ѹ��� ���( �Ͽ� ���ؼ� �ּҰ��� ã�� ���� )
				//{
				gamepan[(4 * (N - 1))][(int*)N - movecard];		// �̵�ī��� �̵��� ��ġ
				if (index == (N - movecard))
				{
					scanf("%d", &cost);						// ��� �Է�
					if (0 <= cost <= 2000)
					{
						printf("%d", cost);					// �� �ּ� ���
					}
					else
						continue;
				}
			}
			break;
		}
	}
	//������ ��ġ�� ����ī���� ��ġ�� ��ġ�Ҷ� ����
	return 0;
}









////����
//#include <stdio.h>
//
//int N;			// �������� ũ�� (����: N, ���� 4*(N-1))
//int M;			// �̵�ī���� ����� �� �ִ� Ƚ��
//int cost;		// �����
//int totalCost;	// �� �ּ� ���
//int movecard[6] = { 1, 2, 3, 4, 5, 6 };		// �̵�ī�� ��ȣ ����
////int movecard;
//
//int section;	// ĭ�� ������ȣ
//
//int* gamepan;	// ������
//int i, j;		// j:��, i: ��
//int r;
//int index = 0;	// �ڸ� ��ġ
//
//int main()
//{
//	scanf("%d", &N);										// ������ ũ�� �Է�
//	if (6 <= N <= 21)										// ������ ũ�� ����
//	{
//		gamepan[(4 * (N - 1))][(int*)N] = { NULL };			// ������
//
//		for (i = N; i > 0; i--)								// ������ �ǾƷ� (�̵�����: ������->����)
//		{
//			gamepan[(4 * (N - 1))][(int*)N - i];
//
//			scanf("&d", &M);								// �̵�ī�� ��� Ƚ�� �Է�
//			if (1 <= M <= 4)								// �̵�ī���� ����� �� �ִ� Ƚ��
//			{
//
//				//������ ��ġ�� ����ī���� ��ġ�� ��ġ�Ҷ� ����
//
//
//				for (section = 1; section < N; section++)	// ������ �ǾƷ� ������ȣ
//				{
//					scanf("%d", &cost);						// ��� �Է�
//					if (0 <= cost <= 2000)
//					{
//						totalCost = section * cost;			// �� �ּ� ���
//					}
//				}
//			}
//		}
//	}
//
//	else
//		return 0;
//}
