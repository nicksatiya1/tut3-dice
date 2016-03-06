#pragma once
#ifndef Dice_H
#define Dice_H

class Dice
{
private:

	int CurrentRoll;
	int Count;
	float SigmaRolls;
	float Avg;

public:

	Dice();
	int getCurrentRoll();
	void SetCurrentRoll(int x);

	int getCount();
	void SetCount();

	int roll();
	void setAmount(int x);
	float getAmount();
	int oneToSix();

	void Average();
	float getAverage();
	void print();
};

#endif

float Average(int x, int s[]);
int Random();
