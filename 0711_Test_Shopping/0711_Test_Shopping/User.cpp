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
	cout << "���̵� �Է��ϼ��� :: ";
	cin >> id;

	cout << "��й�ȣ�� �Է��ϼ��� :: ";
	cin >> pw;


}

void User::search()
{
	int choice;
	cout << "1. ��ǰ �̸����� �˻�" << endl;
	cout << "2. ��ǰ Ÿ������ �˻�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;

	while (true)
	{
		if (choice == 1) // ��ǰ �̸����� �˻�
		{
			string keyword, p_name;

			cout << "��ǰ �̸��� �˻��ϼ��� :: ";
			cin >> keyword;

			system("cls");

			//��� ��ǰ.......�ؾߵǴµ�.............
			if (strstr(p_name.c_str(), keyword.c_str()))
			{
				int p_num, choice;

				cout << p_name << endl;


				cout << "��ǰ�� ��ȣ�� �Է��ϼ��� :: ";
				cin >> p_num;

				system("cls");

				cout << "��ǰ �̸� :: " << p_name;
				cout << "��ǰ �� ���� :: " << endl;
				//��.......����............

				cout << "1. ��ٱ��Ͽ� �߰�" << endl;
				cout << "2. ���� ��ǰ ��Ͽ� �߰�" << endl;
				cin >> choice;

				if (choice == 1)//��ٱ���....�߰�........
				{

				}

				else if (choice == 2)//���ɻ�ǰ���......�߰�.......
				{

				}
			}

			else
			{
				cout << "�ش� ��ǰ�� ã�� �� �����ϴ�." << endl;
				system("break");
			}

		}

		else if (choice == 2) // ��ǰ Ÿ������ �˻�
		{
			string keyword, p_type, p_name;

			cout << "��ǰ �̸��� �˻��ϼ��� :: ";
			cin >> keyword;

			system("cls");

			//Ÿ�� ��ġ ��ǰ�� �̸�......��..�ؾߵǴµ�............
			if (p_type == keyword)
			{
				int p_num;

				cout << p_name;

				cout << "��ǰ�� ��ȣ�� �Է��ϼ��� :: ";
				cin >> p_num;

				system("cls");

				cout << "��ǰ �̸� :: " << p_name;
				cout << "��ǰ �� ���� :: " << endl;
				//��.......����............

				cout << "1. ��ٱ��Ͽ� �߰�" << endl;
				cout << "2. ���� ��ǰ ��Ͽ� �߰�" << endl;
				cin >> choice;

				if (choice == 1)//��ٱ���....�߰�........
				{

				}

				else if (choice == 2)//���ɻ�ǰ......���......�߰�.......
				{

				}
			}

			else
			{
				cout << "�ش� ��ǰ�� ã�� �� �����ϴ�." << endl;
				system("break");
			}

		}

		else if (choice == 3)
		{
			system("pause");
		}

		else
		{
			cout << "�߸��� �Է��Դϴ�." << endl;
			system("break");
		}

	}
}
