#include<iostream>
#include"Keyboard.h"
#include"Mouse.h"
#include"Headphones.h"
#include"Screen.h"
#include"CPU.h"
#include"RAM.h"
#include"SSD.h"
#include"PC.h"

using namespace std;

int main()
{
	Keyboard keyboard("A4Tech");
	Mouse mouse("Bloody");
	Headphones headphones("Razer");
	Screen screen("Acer");
	CPU cpu("Intel");
	RAM ram("Gigabyte");
	SSD ssd("Kingston");

	PC* pc = new PC("Alienware", &keyboard, &mouse, &headphones, &screen, cpu, ram, ssd);
	pc->Output();

	cout << keyboard.GetModel() << endl;
	cout << cpu.GetModel() << endl;

	delete pc;


	return 0;
}