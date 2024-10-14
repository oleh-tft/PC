#include "PC.h"

PC::PC()
{
	model = "";
}

PC::PC(string m, Keyboard* kb, Mouse* mo, Headphones* hp, Screen* sc, CPU c, RAM r, SSD s)
	: keyboard(kb),mouse(mo),headphones(hp),screen(sc)
{
	model = m;
	cpu = c;
	ram = r;
	ssd = s;
}

string PC::GetModel() const
{
	return model;
}

void PC::SetModel(string m)
{
	model = m;
}

void PC::Output() const
{
	cout << "PC model: " << model << endl
		<< "Keyboard model: " << keyboard->GetModel() << endl
		<< "Mouse model: " << mouse->GetModel() << endl
		<< "Headphones model: " << headphones->GetModel() << endl
		<< "Screen model: " << screen->GetModel() << endl
		<< "CPU: " << cpu.GetModel() << endl
		<< "RAM: " << ram.GetModel() << endl
		<< "SSD: " << ssd.GetModel() << endl;
}

Keyboard* PC::GetKeyboard() const
{
	return keyboard;
}

Mouse* PC::GetMouse() const
{
	return mouse;
}

Headphones* PC::GetHeadphones() const
{
	return headphones;
}

Screen* PC::GetScreen() const
{
	return screen;
}

CPU PC::GetCPU() const
{
	return cpu;
}

RAM PC::GetRAM() const
{
	return ram;
}

SSD PC::GetSSD() const
{
	return ssd;
}
