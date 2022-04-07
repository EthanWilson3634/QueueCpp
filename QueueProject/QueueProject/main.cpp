#include "Node.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main() {
	Node* n1 = new Node(110);
	Queue* q = new Queue(10);
	q->enqueue(*n1);
	Node n2 = q->dequeue();
	cout << "Data: " << n2.getData();

	return 0;
}