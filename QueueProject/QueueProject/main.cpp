#include "Queue.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	Queue *q = new Queue(10);
	for (int i = 0; i < 4; i++) {
		Node n(i);
		q->enqueue(n);
	}
	for (int i = 0; i < 4; i++) {
		Node* n = q->dequeue();
		cout << n->data;
	}
	return 0;
}