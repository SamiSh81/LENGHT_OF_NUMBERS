// LENGHT_NUMBERS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Read_Postive_Number(string msg)
{
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
int LenghtNumbers(int number)
{
	int remainder = 0, len_number = 0;
	while (number>0)
	{
		remainder = number % 10;
		number = number / 10;
		len_number += 1;

	}
	return len_number;
}
int main()
{
	int number = Read_Postive_Number("ENTER THE NUMBER: ");
	cout << "Lenght Of The Numbers=" << LenghtNumbers(number) << endl;
}
