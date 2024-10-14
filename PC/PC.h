#pragma once
#include<iostream>
#include"Keyboard.h"
#include"Mouse.h"
#include"Headphones.h"
#include"Screen.h"
#include"CPU.h"
#include"RAM.h"
#include"SSD.h"

using namespace std;

class PC
{
	string model;
	Keyboard* keyboard;
	Mouse* mouse;
	Headphones* headphones;
	Screen* screen;
	CPU cpu;
	RAM ram;
	SSD ssd;

public:
	PC();
	PC(string m, Keyboard* kb, Mouse* mo, Headphones* hp, Screen* sc, CPU c, RAM r, SSD s);
	string GetModel()const;
	void SetModel(string m);
	void Output()const;
	Keyboard* GetKeyboard()const;
	Mouse* GetMouse()const;
	Headphones* GetHeadphones()const;
	Screen* GetScreen()const;
	CPU GetCPU()const;
	RAM GetRAM()const;
	SSD GetSSD()const;
};

