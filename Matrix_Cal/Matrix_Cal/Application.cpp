#include "Application.h"
#include <list>


Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{
	int row1, col1, row2, col2, input = -1;
	list<int> mat1_el_list, mat2_el_list, mat1_el_list_copy, mat2_el_list_copy;

	while (input != 0)
	{

		cout << "1�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
		cin >> row1 >> col1;
		cout << (row1*col1) << "���� ����� ��Ҹ� �Է��Ͻÿ�" << endl;

		for (int i = 1; i <= (row1*col1); i++)
		{
			int mat1_el;
			cout << "�Է�::";
			cin >> mat1_el;
			mat1_el_list.push_back(mat1_el);
		}

		cout << "2�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
		cin >> row2 >> col2;
		cout << (row2*col2) << "���� ����� ��Ҹ� �Է��Ͻÿ�" << endl;

		for (int i = 1; i <= (row2*col2); i++)
		{
			int mat2_el;
			cout << "�Է�::";
			cin >> mat2_el;
			mat2_el_list.push_back(mat2_el);
		}


		system("cls");

		mat1_el_list_copy = mat1_el_list;
		mat2_el_list_copy = mat2_el_list;

		cout << "1�� ���" << endl;
		for (int i = 1; i <= row1; i++)
		{
			for (int j = 1; j <= col1; j++)
			{
				cout << mat1_el_list_copy.front() << " ";
				mat1_el_list_copy.pop_front();
			}
			cout << endl;
		}

		cout << "2�� ���" << endl;
		for (int i = 1; i <= row2; i++)
		{
			for (int j = 1; j <= col2; j++)
			{
				cout << mat2_el_list_copy.front() << " ";
				mat2_el_list_copy.pop_front();
			}
			cout << endl;
		}


		cout << endl;
		cout << "--------------------------------" << endl;
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ����" << endl;
		cout << "0. ����" << endl;
		cout << "--------------------------------" << endl;
		cout << "�Է� :: ";
		cin >> input;

		if (input == 1)
		{

		}

		else if (input == 2)
		{

		}

		else if (input == 3)
		{

		}
	}

}