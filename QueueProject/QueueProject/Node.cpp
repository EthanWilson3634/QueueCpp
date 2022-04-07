#include "Node.h"

Node::Node() {
	data = 1;
}

Node::Node(int inputData) {
	data = inputData;
}

int Node::getData() {
	return data;
}

void Node::setData(int inputData) {
	data = inputData;
}