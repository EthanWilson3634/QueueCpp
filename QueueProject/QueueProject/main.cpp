#include "Queue.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	Queue *q = new Queue(10);
	Node n2(2);
	for (int i = 0; i < 10; i++) {
		Node n(i);
		q->enqueue(n);
	}	
	q->printQueue();
	cout << endl << endl;
	for (int i = 0; i < 3; i++) {
		Node *n = q->dequeue();
	}
	// COMPACT DOESNT WORK
	q->enqueue(n2);
	q->printQueue();
	return 0;
}