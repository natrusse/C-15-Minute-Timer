#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

// basically replaces cin with str
string getTextFromUser(string prompt)
{
	cout << prompt; // type in your name or number of muntues
	string str; 
	cin >> str; // replaces into variable string
	return str; // returns the value of the variable for use
}

// also replaces cin with num
int getNumFromUser(string prompt)
{
	cout << prompt; // type in your name or number of minutes
	int num;
	cin >> num; // replaces into variable int
	return num; // returns the value of the variable for use
}