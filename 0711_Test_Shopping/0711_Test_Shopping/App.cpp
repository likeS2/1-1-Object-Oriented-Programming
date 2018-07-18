#include "App.h"
#include"User.h"
#include<iostream>

using namespace std;



App::App()
{
}


App::~App()
{
}

void App::run()
{
	User login;
	login.Login();
}

