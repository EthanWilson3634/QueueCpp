#include "Queue.h"

Queue::Queue() {
	capacity = DEFAULT_SIZE;
	head = new Node[capacity];
	tail = head;
}

Queue::Queue(int inputCapacity) {
	capacity = inputCapacity;
	head = new Node[capacity];
	tail = head;
}

void Queue::enqueue(Node inputNode) {
	if (size >= capacity) {
		return; // Either full or need to compact
	}
	else {
		tail = &inputNode;
		tail++;
	}
}

Node Queue::dequeue() {
	Node* temp = head;
	head++;
	return *temp;
}

Node* Queue::getHead() {
	return head;
}

Node* Queue::getTail() {
	return tail;
}

int Queue::getSize() {
	return size;
}

int Queue::getCapacity() {
	return capacity;
}

bool Queue::isEmpty() {
	if (!head) {
		return true;
	}
	else {
		return false;
	}
}