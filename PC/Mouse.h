#pragma once
#include<iostream>

using namespace std;

class Mouse 
{
	string model;

public:
	Mouse();
	Mouse(string m);
	string GetModel()const;
	void SetModel(string m);
};

