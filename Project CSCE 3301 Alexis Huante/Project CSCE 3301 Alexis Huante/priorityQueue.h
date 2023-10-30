#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

class priorityQueue
{
public:
	void insert(string name)
	{
		array2[count] = name;
		count++;
	}
	void remove(int key)
	{
		if (key == 1)
		{
			cout << "Removing player 1: " << array2[0] <<  " from the game..." << endl;
			cout << endl;
			array2[0] = "NONE";
			cout << "Player 1 Removed." << endl;
		}

		if (key == 2)
		{
			cout << "Removing player 2: " << array2[1] << " from the game..." << endl;
			cout << endl;
			array2[1] = "NONE";
			cout << "Player 2 Removed." << endl;
		}

		if (key == 3)
		{
			cout << "Removing player 3: " << array2[2] << " from the game..." << endl;
			cout << endl;
			array2[2] = "NONE";
			cout << "Player 3 Removed." << endl;
		}

		count--;
	}

	int size()
	{
		return count;
	}





private:
	string array2[3];
	int count = 0;
};

