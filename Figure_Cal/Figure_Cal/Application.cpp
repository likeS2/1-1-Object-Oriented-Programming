#include "Application.h"



using namespace std;



Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{
	int input;


	cout << "���� ����" << endl;
	cout << "-------------------------" << endl;
	cout << "1. ���簢��" << endl;
	cout << "2. ���簢��" << endl;
	cout << "3. �ﰢ��" << endl;
	cout << "4. ���ﰢ��" << endl;
	cout << "5. ��" << endl;
	cout << "-------------------------" << endl;
	cout << "�Է�::";
	cin >> input;

	if (input == 1) //���簢��
	{
		double width, height;
		int RorA;

		system("cls");

		cout << "���� ���� :: ���簢��" << endl;
		cout << "---------------------------" << endl;
		cout << "���� ���� �Է� :: ";
		cin >> width;
		cout << "���� ���� �Է� :: ";
		cin >> height;

		system("cls");

		cout << "���� ���� :: ���簢��" << endl;
		cout << "���� ���� :: " << width << endl;
		cout << "���� ���� :: " << height << endl;
		cout << "---------------------------" << endl;
		cout << "1. �ѷ�" << endl;
		cout << "2. ����" << endl;
		cout << "---------------------------" << endl;
		cout << "�Է� :: ";
		cin >> RorA;
		cout << endl;
		
		if (RorA == 1) //�ѷ�
		{
			choice = new Rectang();
			double round = choice->round();

		
			cout << "�ѷ���" << round << "�Դϴ�." << endl;
		}

		if (RorA == 2) //����
		{
			choice = new Rectang();
			double area = choice->area();

			cout << "���̴�" << area << "�Դϴ�." << endl;
		}


	}

	else if (input == 2) //���簢��
	{
		double side_length;
		int RorA;

		cout << "���� ���� :: ���簢��" << endl;
		cout << "---------------------------" << endl;
		cout << "�� ���� ���� �Է� :: ";
		cin >> side_length;

		system("cls");

		cout << "���� ���� :: ���簢��" << endl;;
		cout << "�� ���� ���� :: " << side_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. �ѷ�" << endl;
		cout << "2. ����" << endl;
		cout << "---------------------------" << endl;
		cout << "�Է� :: ";
		cin >> RorA;
		cout << endl;
		
		if (RorA == 1)
		{
			choice = new Square();
			double round = choice->round();

			cout << "�ѷ��� " << round << "�Դϴ�." << endl;
		}

		if (RorA == 2)
		{
			choice = new Square();
			double area = choice->area();

			cout << "���̴� " << area << "�Դϴ�." << endl;
		}

	}

	else if (input == 3) //�ﰢ��
	{
		double a_length, b_length, c_length;
		int RorA;

		cout << "���� ���� :: �ﰢ��" << endl;
		cout << "---------------------------" << endl;
		cout << "�� a�� ���� �Է� :: ";
		cin >> a_length;
		cout << "�� b�� ���� �Է� :: ";
		cin >> b_length;
		cout << "�� c�� ���� �Է� :: ";
		cin >> c_length;
		cout << endl;

		system("cls");

		cout << "���� ���� :: �ﰢ��" << endl;
		cout << "�� a�� ���� :: " << a_length << endl;
		cout << "�� b�� ���� :: " << b_length << endl;
		cout << "�� c�� ���� :: " << c_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. �ѷ�" << endl;
		cout << "2. ����" << endl;
		cout << "---------------------------" << endl;
		cout << "�Է� :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new Triangle();
			double round = choice->round();

			cout << "�ѷ��� " << round << "�Դϴ�." << endl;
		}

		if (RorA == 2)
		{
			choice = new Triangle();
			double area = choice->area();

			cout << "���̴� " << area << "�Դϴ�." << endl;
		}

	}

	else if (input == 4) //���ﰢ��
	{
		double side_length;
		int RorA;

		cout << "���� ���� :: ���ﰢ��" << endl;
		cout << "---------------------------" << endl;
		cout << "�� ���� ���� �Է� :: ";
		cin >> side_length;
		
		system("cls");

		cout << "���� ���� :: ���ﰢ��" << endl;
		cout << "�� ���� ���� :: " << side_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. �ѷ�" << endl;
		cout << "2. ����" << endl;
		cout << "---------------------------" << endl;
		cout << "�Է� :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new EquTriangle();
			double round = choice->round();

			cout << "�ѷ��� " << round << "�Դϴ�." << endl;

		}

		if (RorA == 2)
		{
			choice = new EquTriangle();
			double area = choice->area();

			cout << "���̴� " << area << "�Դϴ�." << endl;
		}
		
	}

	else if (input == 5) //��
	{
		double radius;
		int RorA;

		cout << "���� ���� :: ��" << endl;
		cout << "---------------------------" << endl;
		cout << "������ ���� �Է� :: ";
		cin >> radius;

		system("cls");

		cout << "���� ���� :: ��" << endl;
		cout << "������ ���� :: " << radius << endl;
		cout << "---------------------------" << endl;
		cout << "1. �ѷ�" << endl;
		cout << "2. ����" << endl;
		cout << "---------------------------" << endl;
		cout << "�Է� :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new Circle();
			double round = choice->round();

			cout << "�ѷ��� " << round << "�Դϴ�." << endl;
		}

		if (RorA == 2)
		{
			choice = new Circle();
			double area = choice->area();

			cout << "���̴� " << area << "�Դϴ�." << endl;
		}
	}

}