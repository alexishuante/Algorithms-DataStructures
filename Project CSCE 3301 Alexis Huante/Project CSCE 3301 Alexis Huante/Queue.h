#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class Queue
{
public:
	void enqueue(string name)
	{
		static int i = 1;
		static int j = 2;
		cout << "Player " << i << " (" << name << ") " << "has joined the game, waiting for " << j << " more players..." << endl;
		cout << endl;
			i++;
			j--;
			vector2.push_back(name);
			if (j == -1)
			{
				cout << endl;
				cout << "***********GAME STARTING************" << endl;
				cout << endl;
			}

			
	}
	void dequeue1()
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Removing players by order..." << endl;
			cout << endl;
			vector2.erase(vector2.begin());
			cout << "Player " << i + 1 << " removed from the server" << endl;
		}
	}

	void dequeue2()
	{
		cout << "Oh! It seems Player 1 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 2" << " removed from the server" << endl;
		cout << "Player 3" << " removed from the server" << endl;
	}

	void dequeue3()
	{
		cout << "Oh! It seems Player 2 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 1" << " removed from the server" << endl;
		cout << "Player 3" << " removed from the server" << endl;
	}

	void dequeue4()
	{
		cout << "Oh! It seems Player 3 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 1" << " removed from the server" << endl;
		cout << "Player 2" << " removed from the server" << endl;
	}

	void dequeue5()
	{
		cout << "Oh! It seems Player 1 and Player 2 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 3" << " removed from the server" << endl;
	}

	void dequeue6()
	{
		cout << "Oh! It seems Player 1 and Player 3 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 2" << " removed from the server" << endl;
	}

	void dequeue7()
	{
		cout << "Oh! It seems Player 2 and Player 3 already left the server." << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
		cout << "Player 1" << " removed from the server" << endl;
	}

	void dequeue8()
	{
		cout << "Oh! It seems that no body is playing anymore" << endl;
		vector2.erase(vector2.begin(), vector2.begin() + 3);
	}






private:
	vector <string> vector2;
};

