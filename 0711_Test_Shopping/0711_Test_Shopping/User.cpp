#include "User.h"
#include <iostream>

#include<Windows.h>
#include<string>

using namespace std;


User::User()
{
}


User::~User()
{
}

User::User(int _id, string _pw, int _mile)
{
	id = _id;
	pw = _pw;
	mile = _mile;
}



void User::Login()
{
	cout << "아이디를 입력하세요 :: ";
	cin >> id;

	cout << "비밀번호를 입력하세요 :: ";
	cin >> pw;


}

void User::search()
{
	int choice;
	cout << "1. 상품 이름으로 검색" << endl;
	cout << "2. 상품 타입으로 검색" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;

	while (true)
	{
		if (choice == 1) // 상품 이름으로 검색
		{
			string keyword, p_name;

			cout << "상품 이름을 검색하세요 :: ";
			cin >> keyword;

			system("cls");

			//모든 상품.......해야되는데.............
			if (strstr(p_name.c_str(), keyword.c_str()))
			{
				int p_num, choice;

				cout << p_name << endl;


				cout << "상품의 번호를 입력하세요 :: ";
				cin >> p_num;

				system("cls");

				cout << "상품 이름 :: " << p_name;
				cout << "상품 상세 정보 :: " << endl;
				//상세.......정보............

				cout << "1. 장바구니에 추가" << endl;
				cout << "2. 관심 상품 목록에 추가" << endl;
				cin >> choice;

				if (choice == 1)//장바구니....추가........
				{

				}

				else if (choice == 2)//관심상품목록......추가.......
				{

				}
			}

			else
			{
				cout << "해당 상품을 찾을 수 없습니다." << endl;
				system("break");
			}

		}

		else if (choice == 2) // 상품 타입으로 검색
		{
			string keyword, p_type, p_name;

			cout << "상품 이름을 검색하세요 :: ";
			cin >> keyword;

			system("cls");

			//타입 일치 상품의 이름......다..해야되는데............
			if (p_type == keyword)
			{
				int p_num;

				cout << p_name;

				cout << "상품의 번호를 입력하세요 :: ";
				cin >> p_num;

				system("cls");

				cout << "상품 이름 :: " << p_name;
				cout << "상품 상세 정보 :: " << endl;
				//상세.......정보............

				cout << "1. 장바구니에 추가" << endl;
				cout << "2. 관심 상품 목록에 추가" << endl;
				cin >> choice;

				if (choice == 1)//장바구니....추가........
				{

				}

				else if (choice == 2)//관심상품......목록......추가.......
				{

				}
			}

			else
			{
				cout << "해당 상품을 찾을 수 없습니다." << endl;
				system("break");
			}

		}

		else if (choice == 3)
		{
			system("pause");
		}

		else
		{
			cout << "잘못된 입력입니다." << endl;
			system("break");
		}

	}
}
