#include "Headphones.h"

Headphones::Headphones()
{
	model = "";
}

Headphones::Headphones(string m)
{
	model = m;
}

string Headphones::GetModel() const
{
	return model;
}

void Headphones::SetModel(string m)
{
	model = m;
}
