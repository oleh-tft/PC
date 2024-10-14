#pragma once
#include<iostream>

using namespace std;

class CPU
{
	string model;

public:
	CPU();
	CPU(string m);
	string GetModel()const;
	void SetModel(string m);
};

