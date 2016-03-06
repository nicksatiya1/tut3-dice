#include<iostream>
#include "Dice.h"
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	Dice Mydice;
	int x;
	int y;		//Number of rolls user wants
	int z[10] = { 5, 2, 11, 92, 71, 28, 111, 22, 43, 22 };

	cout << "Enter rolls:" << endl;
	cin >> y;
	cout << endl;

	for (x = 1; x <= y; x++)
	{
		Mydice.roll();
		Mydice.Average();
		Mydice.print();
		cout << endl;
	}



	cout << endl;
	cout << "The average of the the array is" << Average(10, z) << endl;


	system("pause");
	return 0;
}