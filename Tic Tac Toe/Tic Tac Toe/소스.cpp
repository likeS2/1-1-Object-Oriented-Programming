//1. player1 혼자만의 게임임 ㅠㅠ
//2. "결과는 0입니다" 가 계속 뜸
//3. 온갖 짓을 다 해도 안 된ㄷㅏ. 모르겠다미ㅣㅣㅣㅣㅣㅣㅣ


#include<iostream>
#include<stdio.h>
using namespace std;

char square[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

int player1 = 1;
int player2 = 2;

int TTT()
{
	//player1이 이기는 경우
	if (square[0] == 'X' && square[1] == 'X' && square[2] == 'X')
		return 1;

	else if (square[3] == 'X' && square[4] == 'X' && square[5] == 'X')
		return 1;

	else if (square[6] == 'X' && square[7] == 'X' && square[8] == 'X')
		return 1;

	else if (square[0] == 'X' && square[3] == 'X' && square[6] == 'X')
		return 1;

	else if (square[1] == 'X' && square[4] == 'X' && square[7] == 'X')
		return 1;

	else if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X')
		return 1;
	
	else if (square[0] == 'X' && square[4] == 'X' && square[8] == 'X')
		return 1;

	else if (square[2] == 'X' && square[4] == 'X' && square[6] == 'X')
		return 1;

	else if (square[0] == 'X' && square[3] == 'X' && square[6] == 'X')
		return 1;

	// player2가 이기는 경우
	else if (square[0] == 'O' && square[1] == 'O' && square[2] == 'O')
		return 2;

	else if (square[3] == 'O' && square[4] == 'O' && square[5] == 'O')
		return 2;

	else if (square[6] == 'O' && square[7] == 'O' && square[8] == 'O')
		return 2;

	else if (square[0] == 'O' && square[3] == 'O' && square[6] == 'O')
		return 2;

	else if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O')
		return 2;

	else if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O')
		return 2;

	else if (square[0] == 'O' && square[4] == 'O' && square[8] == 'O')
		return 2;

	else if (square[2] == 'O' && square[4] == 'O' && square[6] == 'O')
		return 2;

	else if (square[0] == 'O' && square[3] == 'O' && square[6] == 'O')
		return 2;

	else
		return 0;
	
}

void mark(int player, int x, int y)
{
	if (player = player1)
	{
		if (x == 0 && y == 0)
			square[0] = 'X';
		else if (x == 0 && y == 1)
			square[1] = 'X';
		else if (x == 0 && y == 2)
			square[2] = 'X';
		else if (x == 1 && y == 0)
			square[3] = 'X';
		else if (x == 2 && y == 0)
			square[6] = 'X';
		else if (x == 1 && y == 1)
			square[4] = 'X';
		else if (x == 1 && y == 2)
			square[5] = 'X';
		else if (x == 2 && y == 1)
			square[7] = 'X';
		else if (x == 2 && y == 2)
			square[8] = 'X';
	}
	else
	{
		if (x == 0 && y == 0)
			square[0] = 'O';
		else if (x == 0 && y == 1)
			square[1] = 'O';
		else if (x == 0 && y == 2)
			square[2] = 'O';
		else if (x == 1 && y == 0)
			square[3] = 'O';
		else if (x == 2 && y == 0)
			square[6] = 'O';
		else if (x == 1 && y == 1)
			square[4] = 'O';
		else if (x == 1 && y == 2)
			square[5] = 'O';
		else if (x == 2 && y == 1)
			square[7] = 'O';
		else if (x == 2 && y == 2)
			square[8] = 'O';
	}
}

//int Player()
//{
	//int player = 0;

	//if (int(player % 2) == 1)
		//player = player1;
	//else
		//player = player2;

	//player++;
	
	//return player;
//}

void board()
{
	cout << "---|---|---" << endl;
	cout << " " << square[0] << " | " << square[1] << " | " << square[2] << endl;
	cout << "---|---|---" << endl;
	cout << " " << square[3] << " | " << square[4] << " | " << square[5] << endl;
	cout << "---|---|---" << endl;
	cout << " " << square[6] << " | " << square[7] << " | " << square[8] << endl;
	cout << "---|---|---" << endl;
	cout << "(-1:중단 0:무승부 1:X의승리 2:O의승리)" << endl;
}

int main(int x, int y)
{
	while (x != -1 && y != -1)
	{	
		int player = 1;

		if (int(player % 2) == 1)
			player = player1;
		else
			player = player2;

		cout << "(x, y) 좌표(종료-1, -1):" << " ";
		cin >> x >> y;

		if (player = player1)
		{
			mark(player1, x, y);
			board();
			player++;
		}
		else if (player = player2)
		{
			mark(player2, x, y);
			board();
			player++;
		}

		int result;
		result = TTT();

		if (result == 1)
		{
			cout << "결과는 1입니다." << endl;
			break;

		}

		else if (result == 2)
		{
			cout << "결과는 2입니다." << endl;
			break;

		}

		else if (result == 0)
		{
			cout << "결과는 0입니다." << endl;
			
		}

	}
	if (x == -1 && y == -1)
	{
		cout << "게임을 중단합니다." << endl;
	
	}
	return 0;
}
