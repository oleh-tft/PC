#include "Mouse.h"

Mouse::Mouse()
{
	model = "";
}

Mouse::Mouse(string m)
{
	model = m;
}

string Mouse::GetModel() const
{
	return model;
}

void Mouse::SetModel(string m)
{
	model = m;
}
