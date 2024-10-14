#include "Keyboard.h"

Keyboard::Keyboard()
{
	model = "";
}

Keyboard::Keyboard(string m)
{
	model = m;
}

string Keyboard::GetModel() const
{
	return model;
}

void Keyboard::SetModel(string m)
{
	model = m;
}
