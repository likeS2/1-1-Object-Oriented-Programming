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
		cout << "현재 리스트 ::";
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
			cout << endl << "추가할 숫자를 입력하세요: ";
			cin >> temp1;
			
			insert(li, temp1);
			cout << endl << "성공적으로 추가하였습니다." << endl;
		}

		else if (command == 2)
		{
			cout << endl << "삭제할 숫자를 입력하세요: ";
			cin >> temp1;
			if (remove(li, temp1))
				cout << endl << "성공적으로 삭제하였습니다." << endl;
			else
				cout << endl << "삭제에 실패하였습니다." << endl;
		}

		else if (command == 3)
		{
			cout << endl << "제거할 인덱스를 입력하세요: ";
			cin >> temp1;

			if (remove_at(li, temp1))
				cout << endl << "성공적으로 삭제하였습니다." << endl;
			else
				cout << endl << "삭제에 실패하였습니다." << endl;
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
	cout << "1. 추가" << endl;
	cout << "2. 제거(숫자로)" << endl;
	cout << "3. 제거(인덱스로)" << endl;
	cout << "4. 정렬" << endl;
	cout << "5. 파일로 저장(언제든지 가능)" << endl;
	cout << "6. 파일에서 불러오기(언제든지 가능, 기존존재하면 기존껀 파일로 저장)" << endl;
	cout << "0. 종료" << endl;
	cout << "-------------------------------" << endl;
	cout << "입력 :: " << " ";
	cin >> command;
	cout << endl;

	return command;

}