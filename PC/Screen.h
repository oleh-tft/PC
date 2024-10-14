#pragma once
#include<iostream>

using namespace std;

class Screen
{
	string model;

public:
	Screen();
	Screen(string m);
	string GetModel()const;
	void SetModel(string m);
};

