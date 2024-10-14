#include "SSD.h"

SSD::SSD()
{
	model = "";
}

SSD::SSD(string m)
{
	model = m;
}

string SSD::GetModel() const
{
	return model;
}

void SSD::SetModel(string m)
{
	model = m;
}
