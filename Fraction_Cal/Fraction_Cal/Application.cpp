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

	cout << "1번 분수를 입력하시오(분자 분모 순서):: ";
	cin >> num_1st >> dem_1st;
	cout << "2번 분수를 입력하시오(분자 분모 순서):: ";
	cin >> num_2nd >> dem_2nd;

	Fraction frac1(dem_1st, num_1st);
	Fraction frac2(dem_2nd, num_2nd);
	Fraction result;

	system("cls");

	int input;

	cout << "1번 분수 " << endl;
	frac1.print();
	cout << "2번 분수 " << endl;
	frac2.print();
	cout << "---------------------------------------" << endl;
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "4. 나눗셈" << endl;
	cout << "0. 종료" << endl;
	cout << "---------------------------------------" << endl;
	cout << "입력 :: " << " ";
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
