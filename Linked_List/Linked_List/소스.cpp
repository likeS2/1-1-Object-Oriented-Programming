#include<iostream>
#include<fstream>
#include<string>
#include"LinkedList.h"

using namespace std;

int get_command();

int main()
{
	int command = -1;
	int temp1;
	List li;

	
	while (command != 0)
	{
		cout << "���� ����Ʈ ::";
		Node* temp = li.head;
		while (temp != nullptr)
		{
			cout << temp->val;
			if (temp->next != nullptr)
				cout << " -> ";
			temp = temp->next;
	
		}
		cout << endl;

		command = get_command();
		if (command == 1)
		{
			cout << endl << "�߰��� ���ڸ� �Է��ϼ���: ";
			cin >> temp1;
			
			insert(li, temp1);
			cout << endl << "���������� �߰��Ͽ����ϴ�." << endl;
		}

		else if (command == 2)
		{
			cout << endl << "������ ���ڸ� �Է��ϼ���: ";
			cin >> temp1;
			if (remove(li, temp1))
				cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			else
				cout << endl << "������ �����Ͽ����ϴ�." << endl;
		}

		else if (command == 3)
		{
			cout << endl << "������ �ε����� �Է��ϼ���: ";
			cin >> temp1;

			if (remove_at(li, temp1))
				cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			else
				cout << endl << "������ �����Ͽ����ϴ�." << endl;
		}

		else if (command == 5)
		{
			string file = "file.txt";

			ofstream writeFile(file.data());
			if (writeFile.is_open())
			{
				Node* temp = li.head;

				while (temp != nullptr)
				{
					writeFile << temp->val;
					if (temp->next != nullptr)
						writeFile << endl;
					temp = temp->next;
				}

				writeFile.close();
			}
		}

		else if (command == 6)
		{
			string file = "file.txt";

			ifstream ifile(file.data());
			{
				int line;

				while (ifile>>line)
					insert(li, line);
				
				ifile.close();
			}
		}

	}
}

int get_command()
{
	int command;

	cout << "-------------------------------" << endl;
	cout << "1. �߰�" << endl;
	cout << "2. ����(���ڷ�)" << endl;
	cout << "3. ����(�ε�����)" << endl;
	cout << "4. ����" << endl;
	cout << "5. ���Ϸ� ����(�������� ����)" << endl;
	cout << "6. ���Ͽ��� �ҷ�����(�������� ����, ���������ϸ� ������ ���Ϸ� ����)" << endl;
	cout << "0. ����" << endl;
	cout << "-------------------------------" << endl;
	cout << "�Է� :: " << " ";
	cin >> command;
	cout << endl;

	return command;

}