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
			cout << "Queue is full!\n";
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
	size--;
	return &buffer[temp];
}

int Queue::getSize() {
	return size;
}

int Queue::getCapacity() {
	return capacity;
}

bool Queue::compact() {
	int count = 0;
	if (head == 0) { // This means the queue is full
		return false;
	}
	else {
		while (head != 0) {
			head--;
			count++;
		}
		for (int i = count + 1; i < capacity; i++) {
			buffer[i - count] = buffer[i];
		}
		for (int j = capacity - count; j < capacity; j++) {
			buffer[j].data = 0;
		}
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
	for (int i = 0; i < size; i++) {
		cout << "Node " << i << " data = " << buffer[i].data << endl;
	}
}

Queue::~Queue() {
	// Destructor
	for (int i = 0; i < capacity; i++) {
		delete &buffer[i];
	}
}