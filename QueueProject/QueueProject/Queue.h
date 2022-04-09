#ifndef _QUEUE_H_
#define _QUEUE_H_
#define DEFAULT_SIZE 10
#include <string>

using namespace std;

typedef struct Node {
	int data;
	Node(int input) {
		data = input;
	}
	Node() {
		data = 0;
	}

}Node;

class Queue {
protected:
	int size; // Current amount of nodes
	int capacity; // Maximum amount of nodes
	int head, tail;
	Node* buffer;

public:
	Queue(); // Default constructor
	Queue(int inputCapacity); // Constructor
	~Queue(); // Desctructor
	void enqueue(Node inputNode);
	Node *dequeue();
	int getSize();
	int getCapacity();
	bool compact();
	bool isEmpty();
	void printQueue();

};

#endif // !_QUEUE_H_
