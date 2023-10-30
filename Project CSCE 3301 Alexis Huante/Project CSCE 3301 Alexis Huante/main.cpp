#pragma once
#include <string>
#include <iostream>
#include "HashTable.h"
#include "arrayList.h"
#include "Queue.h"
#include "priorityQueue.h"
#include "LinkedList.h"
using namespace std;

int main()
{
	string name;
	string ranking;
	string phone;
	HashTable table1;
	Queue queue1;
	table1.initialize();
	priorityQueue pQueue1;
	LinkedList list1;

	list1.setTimer();
	list1.insertFront();
	list1.insertFront();
	list1.insertFront();
	list1.insertFront();
	list1.insertFront();
	for(int i = 0; i < 3; i++)
	{
		cout << "Player " << i + 1 << ": What is your full name?" << endl;
		getline(cin, name);
		table1.put(i, name);
		cout << "Player " << i + 1 << ": What is your ranking? (Beginner, Intermediate, or Expert)?" << endl;
		getline(cin, ranking);
		table1.put(i, ranking);
		queue1.enqueue(name);
		pQueue1.insert(name);
	}


	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	arrayList symbol;
	int guess;

	char leave1 = 'N';
	char leave2 = 'N';
	char leave3 = 'N';







	while (score1 || score2 || score3 != 15)
	{
		// PLAYER 1 STARTS

		if (score1 == 5 || score1 == 10)
		{
			cout << "Player 1, do you need to leave during the middle of the game? (Type Y if yes or N if no)" << endl;
			cin >> leave1;

			if (leave1 == 'Y')
			{
				score1 = 0;
				pQueue1.remove(1);
			}

		}

		if (leave1 == 'N' && leave2 == 'Y' && leave3 == 'Y')
		{
			cout << "Since player 2 and player 3 left the game, Player 1 wins!" << endl;
			break;
		}



		if (leave1 != 'Y')
		{
			if (score1 == 10)
			{
				cout << "Player 1, since you are close to winning the game, the difficulty of the equations increased." << endl;
			}
			if (score1 >= 10)
			{
				int answer = symbol.choseRandomLevel2();
				cout << "Player 1: guess the equation: ";
				cin >> guess;

				if (answer == guess)
				{
					cout << "That is the correct answer! your score increased by 1." << endl;
					score1++;

					if (score1 == 15)
					{
						cout << "Player 1 is the winner!" << endl;
						break;
					}

				}
				else
				{
					cout << "The correct answer was " << answer << endl;
				}

				// EXTRA TURN OPPORTUNITY
				srand(time(nullptr));
				int extraTurn = rand() % 10 + 1;

				if (extraTurn == 5)
				{
					int extraNumber;
					cout << "Congratulations Player 1! you have won an opportunity to have an extra turn!" << endl;
					cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
					cin >> extraNumber;

					if (list1.printList(extraNumber) == 1)
					{
						cout << "Congratulations! you have an extra turn!" << endl;
						int answer = symbol.choseRandomLevel1();
						cout << "Player 1: guess the equation: ";
						cin >> guess;

						if (answer == guess)
						{
							cout << "That is the correct answer! your score increased by 1." << endl;
							score1++;

						}
						else
						{
							cout << "The correct answer was " << answer << endl;
						}
					}

					else
					{
						cout << "Sorry, the number is not on the nodes" << endl;
					}
				}

				// EXTRA TURN OPPORTUNITY
			}

			if (score1 >= 0 && score1 < 10)
			{
				int answer = symbol.choseRandomLevel1();
				cout << "Player 1: guess the equation: ";
				cin >> guess;

				if (answer == guess)
				{
					cout << "That is the correct answer! your score increased by 1." << endl;
					score1++;

				}
				else
				{
					cout << "The correct answer was " << answer << endl;
				}

				// EXTRA TURN OPPORTUNITY
				srand(time(nullptr));
				int extraTurn = rand() % 10 + 1;

				if (extraTurn == 5)
				{
					int extraNumber;
					cout << "Congratulations Player 1! you have won an opportunity to have an extra turn!" << endl;
					cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
					cin >> extraNumber;

					if (list1.printList(extraNumber) == 1)
					{
						cout << "Congratulations! you have an extra turn!" << endl;
						int answer = symbol.choseRandomLevel1();
						cout << "Player 1: guess the equation: ";
						cin >> guess;

						if (answer == guess)
						{
							cout << "That is the correct answer! your score increased by 1." << endl;
							score1++;

						}
						else
						{
							cout << "The correct answer was " << answer << endl;
						}
					}

					else
					{
						cout << "Sorry, the number is not on the nodes" << endl;
					}
				}

				// EXTRA TURN OPPORTUNITY
			}

			if (score1 <= 5 && score2 >= 10 && score3 >= 10)
			{
				srand(time(nullptr));
				int extraTurn2 = rand() % 3 + 1;
				if (extraTurn2 == 1)
				{
					cout << "Congratulations Player 1! since your score is far away from the other players, you got an opportunity to get an extra turn!" << endl;
					cout << "In addition, if you guess the answer of the equation, you decrease the score of the other players!" << endl;
					cout << endl;
					int answer = symbol.choseRandomLevel1();
					cout << "Player 1: guess the equation: ";
					cin >> guess;

					if (answer == guess)
					{
						cout << "That is the correct answer! your score increased by 1." << endl;
						cout << "Player 2 and Player 3 score decreased by 1" << endl;
						score1++;
						score2--;
						score3--;

					}
					else
					{
						cout << "The correct answer was " << answer << endl;
					}
				}
			}
		}

		// PLAYER 1 ENDS

			cout << endl;
			cout << endl;

		// PLAYER 2 STARTS

			if (score2 == 5 || score2 == 10)
			{
				cout << "Player 2, do you need to leave during the middle of the game? (Type Y if yes or N if no)" << endl;
				cin >> leave2;

				if (leave2 == 'Y')
				{
					score2 = 0;
					pQueue1.remove(2);
				}
			



			if (leave1 == 'Y' && leave2 == 'N' && leave3 == 'Y')
			{
				cout << "Since player 1 and player 3 left the game, Player 2 wins!" << endl;
				break;
			}


			}
			if (leave2 != 'Y')
			{
				if (score2 == 10)
				{
					cout << "Player 2, since you are close to winning the game, the difficulty of the equations increased." << endl;
				}

				if (score2 >= 10)
				{
					int answer = symbol.choseRandomLevel2();
					cout << "Player 2: guess the equation: ";
					cin >> guess;

					if (answer == guess)
					{
						cout << "That is the correct answer! your score increased by 1." << endl;
						score2++;

						if (score2 == 15)
						{
							cout << "Player 2 is the winner!" << endl;
							break;
						}

					}
					else
					{
						cout << "The correct answer was " << answer << endl;
					}

					// EXTRA TURN OPPORTUNITY
					srand(time(nullptr));
					int extraTurn = rand() % 10 + 1;

					if (extraTurn == 5)
					{
						int extraNumber;
						cout << "Congratulations Player 2! you have won an opportunity to have an extra turn!" << endl;
						cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
						cin >> extraNumber;

						if (list1.printList(extraNumber) == 1)
						{
							cout << "Congratulations! you have an extra turn!" << endl;
							int answer = symbol.choseRandomLevel1();
							cout << "Player 2: guess the equation: ";
							cin >> guess;

							if (answer == guess)
							{
								cout << "That is the correct answer! your score increased by 1." << endl;
								score2++;

							}
							else
							{
								cout << "The correct answer was " << answer << endl;
							}
						}

						else
						{
							cout << "Sorry, the number is not on the nodes" << endl;
						}
					}

					// EXTRA TURN OPPORTUNITY
				}

				if (score2 >= 0 && score2 < 10)
				{
					int answer = symbol.choseRandomLevel1();
					cout << "Player 2: guess the equation: ";
					cin >> guess;

					if (answer == guess)
					{
						cout << "That is the correct answer! your score increased by 1." << endl;
						score2++;

					}
					else
					{
						cout << "The correct answer was " << answer << endl;
					}
					;
					// EXTRA TURN OPPORTUNITY
					srand(time(nullptr));
					int extraTurn = rand() % 10 + 1;

					if (extraTurn == 5)
					{
						int extraNumber;
						cout << "Congratulations Player 2! you have won an opportunity to have an extra turn!" << endl;
						cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
						cin >> extraNumber;

						if (list1.printList(extraNumber) == 1)
						{
							cout << "Congratulations! you have an extra turn!" << endl;
							int answer = symbol.choseRandomLevel1();
							cout << "Player 2: guess the equation: ";
							cin >> guess;

							if (answer == guess)
							{
								cout << "That is the correct answer! your score increased by 1." << endl;
								score2++;

							}
							else
							{
								cout << "The correct answer was " << answer << endl;
							}
						}

						else
						{
							cout << "Sorry, the number is not on the nodes" << endl;
						}
					}

					// EXTRA TURN OPPORTUNITY
				}

				if (score2 <= 5 && score1 >= 10 && score3 >= 10)
				{
					srand(time(nullptr));
					int extraTurn2 = rand() % 3 + 1;
					if (extraTurn2 == 2)
					{
						cout << "Congratulations Player 2! since your score is far away from the other players, you got an opportunity to get an extra turn!" << endl;
						cout << "In addition, if you guess the answer of the equation, you decrease the score of the other players!" << endl;
						cout << endl;
						int answer = symbol.choseRandomLevel1();
						cout << "Player 2: guess the equation: ";
						cin >> guess;

						if (answer == guess)
						{
							cout << "That is the correct answer! your score increased by 1." << endl;
							cout << "Player 1 and Player 3 score decreased by 1" << endl;
							score2++;
							score1--;
							score3--;

						}
						else
						{
							cout << "The correct answer was " << answer << endl;
						}
					}
				}

			}
			// PLAYER 2 ENDS

				cout << endl;
				cout << endl;

			// PLAYER 3 STARTS

				if (score3 == 5 || score3 == 10)
				{
					cout << "Player 3, do you need to leave during the middle of the game? (Type Y if yes or N if no)" << endl;
					cin >> leave3;

					if (leave3 == 'Y')
					{
						score3 = 0;
						pQueue1.remove(3);
					}

				}


				if (leave1 == 'Y' && leave2 == 'Y' && leave3 == 'N')
				{
					cout << "Since player 1 and player 2 left the game, Player 3 wins!" << endl;
					break;
				}


				if (leave3 != 'Y')
				{
					if (score3 == 10)
					{
						cout << "Player 3, since you are close to winning the game, the difficulty of the equations increased." << endl;
					}

					if (score3 >= 10)
					{
						int answer = symbol.choseRandomLevel2();
						cout << "Player 3: guess the equation: ";
						cin >> guess;

						if (answer == guess)
						{
							cout << "That is the correct answer! your score increased by 1." << endl;
							score3++;

							if (score3 == 15)
							{
								cout << "Player 3 is the winner!" << endl;
								break;
							}

						}
						else
						{
							cout << "The correct answer was " << answer << endl;
						}

						// EXTRA TURN OPPORTUNITY
						srand(time(nullptr));
						int extraTurn = rand() % 10 + 1;

						if (extraTurn == 5)
						{
							int extraNumber;
							cout << "Congratulations Player 3! you have won an opportunity to have an extra turn!" << endl;
							cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
							cin >> extraNumber;

							if (list1.printList(extraNumber) == 1)
							{
								cout << "Congratulations! you have an extra turn!" << endl;
								int answer = symbol.choseRandomLevel1();
								cout << "Player 3: guess the equation: ";
								cin >> guess;

								if (answer == guess)
								{
									cout << "That is the correct answer! your score increased by 1." << endl;
									score3++;

								}
								else
								{
									cout << "The correct answer was " << answer << endl;
								}
							}

							else
							{
								cout << "Sorry, the number is not on the nodes" << endl;
							}
						}

						// EXTRA TURN OPPORTUNITY
					}

					if (score3 >= 0 && score3 < 10)
					{
						int answer = symbol.choseRandomLevel1();
						cout << "Player 3: guess the equation: ";
						cin >> guess;

						if (answer == guess)
						{
							cout << "That is the correct answer! your score increased by 1." << endl;
							score3++;

						}
						else
						{
							cout << "The correct answer was " << answer << endl;
						}

						// EXTRA TURN OPPORTUNITY
						srand(time(nullptr));
						int extraTurn = rand() % 10 + 1;

						if (extraTurn == 5)
						{
							int extraNumber;
							cout << "Congratulations Player 3! you have won an opportunity to have an extra turn!" << endl;
							cout << "Type a number (1-10), and if the number is within the nodes, you get the extra turn." << endl;
							cin >> extraNumber;

							if (list1.printList(extraNumber) == 1)
							{
								cout << "Congratulations! you have an extra turn!" << endl;
								int answer = symbol.choseRandomLevel1();
								cout << "Player 3: guess the equation: ";
								cin >> guess;

								if (answer == guess)
								{
									cout << "That is the correct answer! your score increased by 1." << endl;
									score3++;

								}
								else
								{
									cout << "The correct answer was " << answer << endl;
								}
							}

							else
							{
								cout << "Sorry, the number is not on the nodes" << endl;
							}
						}

						// EXTRA TURN OPPORTUNITY
					}

					if (score3 <= 5 && score1 >= 10 && score2 >= 10)
					{
						srand(time(nullptr));
						int extraTurn2 = rand() % 3 + 1;
						if (extraTurn2 == 3)
						{
							cout << "Congratulations Player 3! since your score is far away from the other players, you got an opportunity to get an extra turn!" << endl;
							cout << "In addition, if you guess the answer of the equation, you decrease the score of the other players!" << endl;
							cout << endl;
							int answer = symbol.choseRandomLevel1();
							cout << "Player 3: guess the equation: ";
							cin >> guess;

							if (answer == guess)
							{
								cout << "That is the correct answer! your score increased by 1." << endl;
								cout << "Player 1 and Player 2 score decreased by 1" << endl;
								score3++;
								score1--;
								score2--;

							}
							else
							{
								cout << "The correct answer was " << answer << endl;
							}
						}
					}


				}

				// PLAYER 3 ENDS

					cout << endl;
					cout << endl;

					if (leave1 == 'Y' && leave2 == 'Y' && leave3 == 'Y')
					{
						break;
					}
	}

		cout << "END OF THE GAME! showing results" << endl << endl;
		cout << "*************RESULTS**************" << endl << endl;
		cout << "PLAYER 1 NAME AND RANKING" << endl;
		table1.print();
		cout << "SCORE: " << score1 << endl << endl;

		cout << "PLAYER 2 NAME AND RANKING" << endl;
		table1.print();
		cout << "SCORE: " << score2 << endl << endl;

		cout << "PLAYER 3 NAME AND RANKING" << endl;
		table1.print();
		cout << "SCORE: " << score3 << endl << endl;




	// 8 possible outcomes
	if (leave1 == 'N' && leave2 == 'N' && leave3 == 'N')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue1();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}

	else if (leave1 == 'Y' && leave2 == 'N' && leave3 == 'N')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue2();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'N' && leave2 == 'Y' && leave3 == 'N')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue3();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'N' && leave2 == 'N' && leave3 == 'Y')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue4();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'Y' && leave2 == 'Y' && leave3 == 'N')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue5();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'Y' && leave2 == 'N' && leave3 == 'Y')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue6();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'N' && leave2 == 'Y' && leave3 == 'Y')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue7();
		cout << endl;
		cout << endl;
		cout << "Players have been removed from the server! Program closing..." << endl;
	}
	else if (leave1 == 'Y' && leave2 == 'Y' && leave3 == 'Y')
	{
		cout << "Removing players from the server..." << endl;
		queue1.dequeue8();
		cout << endl;
		cout << endl;
		cout << "Program closing..." << endl;
	}
}
