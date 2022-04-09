#include "Queue.h"
#include <iostream>
#include <string>

Queue::Queue() {
	size = head = tail = 0;
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
		if (compact()) {
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

Node* Queue::dequeue() {
	int temp;

	// Check if the queue is empty
	if (isEmpty()) {
		return nullptr;
	}

	temp = head;
	head++;
	return &buffer[temp];
}

int Queue::getSize() {
	return size;
}

int Queue::getCapacity() {
	return capacity;
}

bool Queue::compact() {
	if (head == 0) {
		return false;
	}
	else {
		// Compact the queue
		return true;
	}
}

bool Queue::isEmpty() {
	if (tail == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Queue::printQueue() {

}

Queue::~Queue() {
	// Destructor
	for (int i = 0; i < capacity; i++) {
		delete &buffer[i];
	}
}