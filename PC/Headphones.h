#pragma once
#include<iostream>

using namespace std;

class Headphones
{
	string model;

public:
	Headphones();
	Headphones(string m);
	string GetModel()const;
	void SetModel(string m);
};

