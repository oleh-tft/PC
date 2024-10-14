#pragma once
#include<iostream>

using namespace std;

class RAM
{
	string model;

public:
	RAM();
	RAM(string m);
	string GetModel()const;
	void SetModel(string m);
};

