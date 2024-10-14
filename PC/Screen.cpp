#include "Screen.h"

Screen::Screen()
{
	model = "";
}

Screen::Screen(string m)
{
	model = m;
}

string Screen::GetModel() const
{
	return model;
}

void Screen::SetModel(string m)
{
	model = m;
}
