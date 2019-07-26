// Visual Studio���� �ۼ��� �ڵ��Դϴ�.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { ROCK = 1, SCISSORS, PAPPER };

void player_data_output(int player);
void computer_data_output(int computer);

int main()
{
	int player, computer;
	int win = 0, draw = 0;

	while (1)
	{
		srand(time(NULL));

		printf("������ 1, ������ 2, ���� 3 : ");
		scanf_s("%d", &player);

		computer = rand() % 3 + 1;

		player_data_output(player);
		computer_data_output(computer);

		if (player == computer)
		{
			puts("�����ϴ�.");
			draw++;
		}
		else if ((player == 1 && computer == 2) || (player == 2 && computer == 3) || (player == 3 && computer == 1))
		{
			puts("�̰���ϴ�.");
			win++;
		}
		else
		{
			puts("����� �����ϴ�!");
			printf("\n");
			printf("������ ��� : %d��, %d��\n", win, draw);
			break;
		}
	}

	return 1;
}

void player_data_output(int player)
{
	switch (player)
	{
	case ROCK:
		printf("����� ���� ����,");
		break;
	case SCISSORS:
		printf("����� ���� ����,");
		break;
	case PAPPER:
		printf("����� �� ����,");
		break;
	}
}

void computer_data_output(int computer)
{
	switch (computer)
	{
	case ROCK:
		printf("��ǻ�ʹ� ���� ����,");
		break;
	case SCISSORS:
		printf("��ǻ�ʹ� ���� ����,");
		break;
	case PAPPER:
		printf("��ǻ�ʹ� �� ����,");
		break;
	}
}