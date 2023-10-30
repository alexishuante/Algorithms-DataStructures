#pragma once
#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Node
{
	// head and tail do not store elements
public:
	Node* next;
	string elem;
};

class HashTable
{
public:

	void put(int key, string data)
	{

		if (pointerArray[key] == nullptr)
		{
			Node* newNode = new(Node);
			newNode->elem = data;
			newNode->next = nullptr;
			pointerArray[key] = newNode;
		}

		else if (pointerArray[key]->next == nullptr)
		{
			Node* newNode = new(Node);
			newNode->elem = data;
			newNode->next = nullptr;
			pointerArray[key]->next = newNode;
		}

	}

	void initialize()
	{
		for (int z = 0; z < 3; z++)
		{
			pointerArray[z] = nullptr;
		}
	}

	void print()
	{
			static int i = 0;
			cout << pointerArray[i]->elem << endl;
			cout << pointerArray[i]->next->elem << endl;
			i++;
	}

private:
	Node* pointerArray[3];
};

#endif



