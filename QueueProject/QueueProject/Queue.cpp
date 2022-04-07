#include "Queue.h"

Queue::Queue() {
	capacity = DEFAULT_SIZE;
	buffer = new Node[capacity];
}

Queue::Queue(int inputCapacity) {
	capacity = inputCapacity;
	buffer = new Node[capacity];
}

void Queue::enqueue(Node inputNode) {
	if (size >= capacity) {
		return; // Either full or need to compact
	}
	else {
		tail* = inputNode;
	}
}

Node Queue::dequeue() {

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