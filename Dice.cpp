#include<iostream>
#include<stdio.h>
#include"Dice.h"
#include<stdlib.h>
#include<time.h>

using namespace std;

Dice::Dice()
{
	CurrentRoll = 0;
	Count = 0;
	SigmaRolls = 0;
	Avg = 0;
}

void Dice::SetCount()
{
	Count = Count + 1;
}



int Dice::getCount()
{
	return Count;
}

void Dice::SetCurrentRoll(int x)
{
	CurrentRoll = x;

}

int Dice::roll()
{
	SetCurrentRoll(oneToSix());
	SetCount();
	setAmount(getCurrentRoll());
	return getCurrentRoll();
}

int Dice::oneToSix()

{
	return (1 + rand() % 5);

}

void Dice::print()
{
	cout << "Current roll:" << getCurrentRoll() << endl;
	cout << "roll number :" << getCount() << endl;
	cout << "Average number rolled: " << getAverage() << endl;

}

int Random()
{
	srand(time(NULL));
	return (1 + rand() % 5);
}

int Dice::getCurrentRoll()
{
	return CurrentRoll;
}

void Dice::setAmount(int x)
{
	SigmaRolls = x + SigmaRolls;
}

void Dice::Average()
{
	Avg = getAmount() / getCount();
}

float Dice::getAmount()
{
	return SigmaRolls;
}

float Dice::getAverage()
{
	return Avg;
}

float Average(int n, int s[])
{
	int x;
	float Total = 0;

	for (x = 0; x<n; x++)
	{
		Total = Total + s[x];
	}

	return (Total / n);
}