// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// 5x5 사각형
	int _row1 = 5;
	int _col1 = 5;

	for (int i = 0; i < _row1; i++)
	{
		for (int j = 0; j < _col1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;


	// 5*5 직각 삼각형
	int _row2 = 5;
	int _col2 = 5;

	for (int i = 0; i < _row2; i++)
	{
		for (int j = 0; j < _col2 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;


	// 삼각형
	for (int i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (int j = 0; j < 5; j++)
			{
				if (j < 4 - i)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		else
		{
			for (int j = 0; j < 5; j++)
			{
				if (j < i - 4)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	// 모래시계 Hourglass

	for (int i = 0; i < 5; i++)
	{
		if (i == 0 || i == 4)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << "*";
			}
		}
		else if (i == 2)
		{
			for (int j = 0; j < 5; j++)
			{
				if (j == i)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		else
		{
			for (int j = 0; j < 5; j++)
			{
				if (j == 0 || j == 4)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	// DNA

	for (int i = 0; i < 18; i++)
	{
		
		cout << endl;
	}
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
