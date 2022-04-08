#include "Queue.h"
#include <iostream>
#include <string>

Queue::Queue() {
	size = 0;
	capacity = DEFAULT_SIZE;
	buffer = new Node[capacity];
}

Queue::Queue(int inputCapacity) {
	size = head = tail = 0;
	capacity = inputCapacity;
	buffer = new Node[capacity];
}

void Queue::enqueue(Node inputNode) {
	// First check if the queue is full
	if (tail == capacity) {
		if (compact) {
			buffer[tail] = inputNode;
			tail++;
			size++;
			return;
		}
		else {
			cout << "Queue is full!";
			return;
		}
	}

	buffer[tail] = inputNode;
	tail++;
	size++;
}

Node Queue::dequeue() {
	// Check if the queue is empty
	if (isEmpty()) {
		return;
	}


}