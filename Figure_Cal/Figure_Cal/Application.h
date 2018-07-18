#pragma once
#include<iostream>
#include<Windows.h>

#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "EquTriangle.h"
#include "Square.h"
#include "Triangle.h"
 


class Application
{
public:
	Application();
	~Application();
	void run();

	Figure * choice;

private:
	

};

