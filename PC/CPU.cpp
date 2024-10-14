#include "CPU.h"

CPU::CPU()
{
	model = "";
}

CPU::CPU(string m)
{
	model = m;
}

string CPU::GetModel() const
{
	return model;
}

void CPU::SetModel(string m)
{
	model = m;
}
