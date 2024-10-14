#pragma once
#include<iostream>

using namespace std;

class SSD
{
	string model;

public:
	SSD();
	SSD(string m);
	string GetModel()const;
	void SetModel(string m);
};

