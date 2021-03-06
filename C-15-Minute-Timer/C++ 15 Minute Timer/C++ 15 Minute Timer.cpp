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
	string answer; // string variable for running the while loop
	string answer2; // string variable for timer settings and allows you to go back and change them
	string user; // string variable for user name
	string* Puser = &user;

	int prgmChoice; // integer variable for program choice

	while (true)
	{
		system("cls"); // clears the script to keep appearance clean
		int m, s, h; // declares variables
		cout << "Now initializing Chronobot..."; // giving the code a personallity 
		cout << "\n\nBoot Complete.";
		cout << "\n\nHi there. I am Chronobot, a personalized timer program created by novice programmer Nathan G. Russell.";
		cout << "\nMy purpose is to provide you, the user, with two things: \n\n\t1. A timer for everyday use. \n\t2. An anti-laziness fitness timer." << endl; // project description
		user = getTextFromUser("\nWhile we're on the subject of you, what is your name?\n"); // asks for username input (personalization)
		cout << "\nNice to meet you, " << *Puser << ". Let's begin my tasks.";
	programSelection:
		cout << "\nPlease type the number of the program you wish to run:" << endl; // uses goto function to run the same program with different available options
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

	fitnessTimer: // preset to 15 minutes
		h = 0;
		m = 15;
		s = 0;
		system("cls");
		cout << "Excellent choice, " << user << ". \nThe system scans show that you are morbidly obese and are in desperate need of excercise. \nThis timer signifies how long you can sit down for. When the timer ends, go excercise.\nReset the timer as soon as you finish excercising.";
		cout << "\n\nTimer Settings:" << endl;
		cout << "hours: " << h << ", mins: " << m << ", secs: " << s << "." << endl;
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

	normalTimer: // allows user to modify timer variables for personal use
		

		//cout << "Welcome to the Normal Timer Program." << endl;
		//cout << "\nPlease enter the desired number of hours to count:" << endl;
		//cin >> h; // hours
		//cout << "Please enter the desired number of minutes to count:" << endl;
		//cin >> m; // minutes
		//cout << "Please enter the desired number of seconds to count:" << endl;
		//cin >> s; // seconds

		system("cls");
		cout << "Welcome to the Normal Timer Program.\n" << endl;
	timerSettings:
		h = getNumFromUser("Please enter the desired number of hours to count: "); // hours
		m = getNumFromUser("\nPlease enter the desired number of minutes to count: "); // minutes
		s = getNumFromUser("\nPlease enter the desired number of seconds to count: "); // seconds


		cout << "\nCurrent timer settings:" << endl;
		cout << "hours: " << h << ", mins: " << m << ", secs: " << s << "." << endl;

		answer2 = getTextFromUser("\n\nAre these settings ok? (y/n)");
		if (answer2 == "n")
		{
			system("cls");
			goto timerSettings;
		}

		system("pause");
		for (int hour = h; hour >= 0; hour--) // for loop updates the timer
		{
			for (int min = m; min >= 0; min--)// converts time from hours to minutes and minutes to seconds
			{
				if (min == 0 && h > 0) //hour to minute conversion
					m = 59; 
				for (int sec = s; sec >= 0; sec--)
				{
					if (sec == 0) // mintue to second conversion
						s = 59;
					Sleep(1000); // closest i could get to an actual second passing
					system("cls"); // clears the previous time entry to provide update without cluttering the program
					cout << hour << " hours, " << min << " minutes, and " << sec << " seconds remain." << endl; // prints the time remaining
				}
			}
		}
	Ending:
		Sleep(1000);
		cout << "My function has been completed."; // more personalization
		cout << "Would you like to run the program again? (y/n)" << endl; // while loops purpose
		cin >> answer;
		if (answer == "n") // technically means any input except "n" could mean yes, but that honestly doesn't matter right now.
		{
			break; // exits the while loop
		}
		
	}return 0; // closes the program when reached
}
