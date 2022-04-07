#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "Node.h"
#define DEFAULT_SIZE 10

using namespace std;

class Queue {
protected:
	int size; // Current amount of nodes
	int capacity; // Maximum amount of nodes
	Node *head, *tail; // Front and back of queue. Add at the front take from the back

public:
	Queue(); // Default constructor
	Queue(int inputCapacity); // Constructor
	void enqueue(Node inputNode);
	Node dequeue();
	Node* getHead();
	Node* getTail();
	int getSize();
	int getCapacity();
	bool isEmpty();

};

#endif // !_QUEUE_H_
