#pragma once
#include<iostream>

using namespace std;

class Keyboard
{
	string model;

public:
	Keyboard();
	Keyboard(string m);
	string GetModel()const;
	void SetModel(string m);
};

