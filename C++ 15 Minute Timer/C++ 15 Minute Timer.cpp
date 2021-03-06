// C++ 15 Minute Timer.cpp : Defines the entry point for the console application.
// Nathan Russell
// 4/24/2018

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	string answer;
	int prgmChoice;

	while (true)
	{
		system("cls"); // clears the script to keep appearance clean
		int m, s, h; // declares variables
		cout << "Welcome to C++ Timer, a C++ Final Project created by Nathan G. Russell." << endl;
		cout << "The purpose of this program is to provide both a timer for everyday use, and an anti-laziness health timer." << endl;
	programSelection:
		cout << "Please type the number of the program you wish to run:" << endl;
		cout << "[1] Fitness Timer." << endl;
		cout << "[2] Normal Timer." << endl;
		cin >> prgmChoice;
		if (prgmChoice == 1) 
		{
			goto fitnessTimer;
		}
		if (prgmChoice == 2) 
		{
			goto normalTimer;
		}

		system("pause");
		system("cls");

	fitnessTimer:
		h = 0;
		m = 15;
		s = 0;
		system("pause");
		cout << "\nTimer Settings: Press any button to begin." << endl;
		cout << "hours : " << h << "mins : " << m << " secs : " << s << endl;
		system("pause");
		for (int hour = h; hour >= 0; hour--) // for loop updates the timer
		{
			for (int min = m; min >= 0; min--)// converts time from hours to minutes and minutes to seconds
			{
				if (min == 0 && h > 0)
					m = 59;
				for (int sec = s; sec >= 0; sec--)
				{
					if (sec == 0)
						s = 59;
					Sleep(1000);
					system("cls");
					cout << hour << " hours, " << min << " minutes, and " << sec << " seconds remain." << endl;
				}
			}
		}
		goto Ending;

	normalTimer:
		cout << "Welcome to the Normal Timer Program." << endl;
		//cout << "\nPlease enter the desired number of hours to count:" << endl;
		//cin >> h; // hours
		//cout << "Please enter the desired number of minutes to count:" << endl;
		//cin >> m; // minutes
		//cout << "Please enter the desired number of seconds to count:" << endl;
		//cin >> s; // seconds
		h = 0;
		m = 15;
		s = 0;
		system("pause");
		cout << "\nTimer Settings: Press any button to begin." << endl;
		cout << "hours : " << h << "mins : " << m << " secs : " << s << endl;
		system("pause");
		for (int hour = h; hour >= 0; hour--) // for loop updates the timer
		{
			for (int min = m; min >= 0; min--)// converts time from hours to minutes and minutes to seconds
			{
				if (min == 0 && h > 0)
					m = 59;
				for (int sec = s; sec >= 0; sec--)
				{
					if (sec == 0)
						s = 59;
					Sleep(1000);
					system("cls");
					cout << hour << " hours, " << min << " minutes, and " << sec << " seconds remain." << endl;
				}
			}
		}
	Ending:
		Sleep(1000);
		cout << "Would you like to play again? (y/n)" << endl;
		cin >> answer;
		if (answer == "n") 
		{
			break;
		}
		
	}return 0;
}
