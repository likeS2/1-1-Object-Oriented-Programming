#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{

	int dem_1st, num_1st, dem_2nd, num_2nd;

	cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����):: ";
	cin >> num_1st >> dem_1st;
	cout << "2�� �м��� �Է��Ͻÿ�(���� �и� ����):: ";
	cin >> num_2nd >> dem_2nd;

	Fraction frac1(dem_1st, num_1st);
	Fraction frac2(dem_2nd, num_2nd);
	Fraction result;

	system("cls");

	int input;

	cout << "1�� �м� " << endl;
	frac1.print();
	cout << "2�� �м� " << endl;
	frac2.print();
	cout << "---------------------------------------" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "0. ����" << endl;
	cout << "---------------------------------------" << endl;
	cout << "�Է� :: " << " ";
	cin >> input;

	if (input == 1)
	{
		result = frac1.add(frac2);
		result.print();
	}

	else if (input == 2)
	{
		result = frac1.sub(frac2);
		result.print();
	}

	else if (input == 3)
	{
		result = frac1.mul(frac2);
		result.print();
	}

	else if (input == 4)
	{
		result = frac1.div(frac2);
		result.print();
	}

	else if (input == 0)
	{
		system("pause");
	}

}
