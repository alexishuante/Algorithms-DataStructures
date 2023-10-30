#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
class arrayList
{
public:



	vector<char> vector1{ '+','-','%','/','*' };

	int choseRandomLevel1()
	{
		srand(time(nullptr));
		int random = rand() % 5;
		int random1 = rand() % 10 + 1;
		int random2 = rand() % 15 + 1;
		cout << "The operator randomly chosed in this question was: " << vector1.at(random) << endl;

		if (random == 0)
		{
			cout << "What is " << random1 << " " << "+" << " " << random2 << "?" << endl;
			return random1 + random2;
		}

		else if (random == 1)
		{
			cout << "What is " << random1 << " " << "-" << " " << random2 << "?" << endl;
			return random1 - random2;
		}

		else if (random == 2)
		{
		cout << "What is " << random1 << " " << "%" << " " << random2 << "?" << endl;
			return random1 % random2;
		}

		else if (random == 3)
		{
		cout << "What is " << random1 << " " << "/" << " " << random2 << "?" << endl;
			return random1 / random2;
		}

		else
		{
			srand(time(nullptr));
			int random3 = rand() % 9 + 1;
			int random4 = rand() % 9 + 1;
		cout << "What is " << random3 << " " << "*" << " " << random4 << "?" << endl;
			return random3 * random4;
		}
	}

	int choseRandomLevel2()
	{
		srand(time(nullptr));
		int random = rand() % 5;
		int random1 = rand() % 30 + 10;
		int random2 = rand() % 35 + 10;

		cout << "The operator randomly chosed in this question was: " << vector1.at(random) << endl;

		if (random == 0)
		{
			cout << "What is " << random1 << " " << "+" << " " << random2 << "?" << endl;
			return random1 + random2;
		}

		else if (random == 1)
		{
			cout << "What is " << random1 << " " << "-" << " " << random2 << "?" << endl;
			return random1 - random2;
		}

		else if (random == 2)
		{
			cout << "What is " << random1 << " " << "%" << " " << random2 << "?" << endl;
			return random1 % random2;
		}

		else if (random == 3)
		{
			cout << "What is " << random1 << " " << "/" << " " << random2 << "?" << endl;
			return random1 / random2;
		}

		else
		{
			srand(time(nullptr));
			int random3 = rand() % 13 + 1;
			int random4 = rand() % 13 + 1;
			cout << "What is " << random3 << " " << "*" << " " << random4 << "?" << endl;
			return random3 * random4;
		}
	}

private:

};

