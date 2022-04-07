#ifndef _NODE_H_
#define _NODE_H_

using namespace std;

class Node {
private:
	int data;
	// Data is a test valuwe
	// If reusing this class change data to whatever
	// information neccessary.
public:
	Node(); // Default constructor
	Node(int inputData); // Constructor
	int getData();
	void setData(int inputData);
};

#endif // !"Node.h"
