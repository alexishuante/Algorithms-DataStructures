#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
using namespace std;
class Node2
{
	// head and tail do not store elements
public:
	Node2* next;
	int elem;
};


class LinkedList
{
private:
	Node2* head;
	Node2* tail;
	int count;
public:
	LinkedList() {
		head = new(Node2);
		tail = new(Node2);
		head->next = tail;
		count = 0;
	}
	void setTimer() {
		srand(time(nullptr));
	}

	int randomNumberGen() {
		return rand() % 10 + 1;
	}

	void insertFront()
	{
		//Allocate newNode
		Node2* newNode = new(Node2);
		// set the value to x
		int x = randomNumberGen();
		newNode->elem = x;
		// attach node
		newNode->next = head->next;
		head->next = newNode;
		count++;
	}

	void insertBack(int x)
	{


		Node2* newNode = new(Node2);
		newNode->elem = x;

		Node2* it = head->next;
		for (int i = 0; i < count - 1; i++)
		{
			it = it->next;
		}

		newNode->next = it->next; // make newnode point to tail
		it->next = newNode; // make it point to newnode
		count++;
	}

	int printList(int x)
	{
		if (empty() == true)
		{
			cout << "There are no nodes" << endl;
		}

		else {
			while (head->next != tail)
			{
				head = head->next;
				if (x == head->elem)
				{
					return 1;
				}
			//	cout << head->elem << endl;
			}
		}
	}

	bool empty()
	{
		return (count == 0);
	}
};



