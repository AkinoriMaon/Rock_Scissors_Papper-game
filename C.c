// Visual Studio에서 작성된 코드입니다.

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

		printf("바위는 1, 가위는 2, 보는 3 : ");
		scanf_s("%d", &player);

		computer = rand() % 3 + 1;

		player_data_output(player);
		computer_data_output(computer);

		if (player == computer)
		{
			puts("비겼습니다.");
			draw++;
		}
		else if ((player == 1 && computer == 2) || (player == 2 && computer == 3) || (player == 3 && computer == 1))
		{
			puts("이겼습니다.");
			win++;
		}
		else
		{
			puts("당신이 졌습니다!");
			printf("\n");
			printf("게임의 결과 : %d승, %d무\n", win, draw);
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
		printf("당신은 바위 선택,");
		break;
	case SCISSORS:
		printf("당신은 가위 선택,");
		break;
	case PAPPER:
		printf("당신은 보 선택,");
		break;
	}
}

void computer_data_output(int computer)
{
	switch (computer)
	{
	case ROCK:
		printf("컴퓨터는 바위 선택,");
		break;
	case SCISSORS:
		printf("컴퓨터는 가위 선택,");
		break;
	case PAPPER:
		printf("컴퓨터는 보 선택,");
		break;
	}
}