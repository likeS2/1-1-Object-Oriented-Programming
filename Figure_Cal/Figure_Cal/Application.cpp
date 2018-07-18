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


	cout << "도형 선택" << endl;
	cout << "-------------------------" << endl;
	cout << "1. 직사각형" << endl;
	cout << "2. 정사각형" << endl;
	cout << "3. 삼각형" << endl;
	cout << "4. 정삼각형" << endl;
	cout << "5. 원" << endl;
	cout << "-------------------------" << endl;
	cout << "입력::";
	cin >> input;

	if (input == 1) //직사각형
	{
		double width, height;
		int RorA;

		system("cls");

		cout << "현재 도형 :: 직사각형" << endl;
		cout << "---------------------------" << endl;
		cout << "가로 길이 입력 :: ";
		cin >> width;
		cout << "세로 길이 입력 :: ";
		cin >> height;

		system("cls");

		cout << "현재 도형 :: 직사각형" << endl;
		cout << "가로 길이 :: " << width << endl;
		cout << "세로 길이 :: " << height << endl;
		cout << "---------------------------" << endl;
		cout << "1. 둘레" << endl;
		cout << "2. 넓이" << endl;
		cout << "---------------------------" << endl;
		cout << "입력 :: ";
		cin >> RorA;
		cout << endl;
		
		if (RorA == 1) //둘레
		{
			choice = new Rectang();
			double round = choice->round();

		
			cout << "둘레는" << round << "입니다." << endl;
		}

		if (RorA == 2) //넓이
		{
			choice = new Rectang();
			double area = choice->area();

			cout << "넓이는" << area << "입니다." << endl;
		}


	}

	else if (input == 2) //정사각형
	{
		double side_length;
		int RorA;

		cout << "현재 도형 :: 정사각형" << endl;
		cout << "---------------------------" << endl;
		cout << "한 변의 길이 입력 :: ";
		cin >> side_length;

		system("cls");

		cout << "현재 도형 :: 정사각형" << endl;;
		cout << "한 변의 길이 :: " << side_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. 둘레" << endl;
		cout << "2. 넓이" << endl;
		cout << "---------------------------" << endl;
		cout << "입력 :: ";
		cin >> RorA;
		cout << endl;
		
		if (RorA == 1)
		{
			choice = new Square();
			double round = choice->round();

			cout << "둘레는 " << round << "입니다." << endl;
		}

		if (RorA == 2)
		{
			choice = new Square();
			double area = choice->area();

			cout << "넓이는 " << area << "입니다." << endl;
		}

	}

	else if (input == 3) //삼각형
	{
		double a_length, b_length, c_length;
		int RorA;

		cout << "현재 도형 :: 삼각형" << endl;
		cout << "---------------------------" << endl;
		cout << "변 a의 길이 입력 :: ";
		cin >> a_length;
		cout << "변 b의 길이 입력 :: ";
		cin >> b_length;
		cout << "변 c의 길이 입력 :: ";
		cin >> c_length;
		cout << endl;

		system("cls");

		cout << "현재 도형 :: 삼각형" << endl;
		cout << "변 a의 길이 :: " << a_length << endl;
		cout << "변 b의 길이 :: " << b_length << endl;
		cout << "변 c의 길이 :: " << c_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. 둘레" << endl;
		cout << "2. 넓이" << endl;
		cout << "---------------------------" << endl;
		cout << "입력 :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new Triangle();
			double round = choice->round();

			cout << "둘레는 " << round << "입니다." << endl;
		}

		if (RorA == 2)
		{
			choice = new Triangle();
			double area = choice->area();

			cout << "넓이는 " << area << "입니다." << endl;
		}

	}

	else if (input == 4) //정삼각형
	{
		double side_length;
		int RorA;

		cout << "현재 도형 :: 정삼각형" << endl;
		cout << "---------------------------" << endl;
		cout << "한 변의 길이 입력 :: ";
		cin >> side_length;
		
		system("cls");

		cout << "현재 도형 :: 정삼각형" << endl;
		cout << "한 변의 길이 :: " << side_length << endl;
		cout << "---------------------------" << endl;
		cout << "1. 둘레" << endl;
		cout << "2. 넓이" << endl;
		cout << "---------------------------" << endl;
		cout << "입력 :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new EquTriangle();
			double round = choice->round();

			cout << "둘레는 " << round << "입니다." << endl;

		}

		if (RorA == 2)
		{
			choice = new EquTriangle();
			double area = choice->area();

			cout << "넓이는 " << area << "입니다." << endl;
		}
		
	}

	else if (input == 5) //원
	{
		double radius;
		int RorA;

		cout << "현재 도형 :: 원" << endl;
		cout << "---------------------------" << endl;
		cout << "반지름 길이 입력 :: ";
		cin >> radius;

		system("cls");

		cout << "현재 도형 :: 원" << endl;
		cout << "반지름 길이 :: " << radius << endl;
		cout << "---------------------------" << endl;
		cout << "1. 둘레" << endl;
		cout << "2. 넓이" << endl;
		cout << "---------------------------" << endl;
		cout << "입력 :: ";
		cin >> RorA;
		cout << endl;

		if (RorA == 1)
		{
			choice = new Circle();
			double round = choice->round();

			cout << "둘레는 " << round << "입니다." << endl;
		}

		if (RorA == 2)
		{
			choice = new Circle();
			double area = choice->area();

			cout << "넓이는 " << area << "입니다." << endl;
		}
	}

}