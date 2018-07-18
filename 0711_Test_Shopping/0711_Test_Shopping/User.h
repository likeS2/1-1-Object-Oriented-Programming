#pragma once
#include<iostream>
#include"App.h"
#include<string>

class User
	:public App
{
public:
	User();
	~User();

	User(int _id, string _pw, int _mile);

	void Login();
	void search();

	Product* keep_arr[3];
	Product* interest_arr[3];

private:
	int id;
	string pw;
	int mile;


};

