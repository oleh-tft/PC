#include "RAM.h"

RAM::RAM()
{
	model = "";
}

RAM::RAM(string m)
{
	model = m;
}

string RAM::GetModel() const
{
	return model;
}

void RAM::SetModel(string m)
{
	model = m;
}
