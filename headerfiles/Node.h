#ifndef _NODE_H_
#define _NODE_H_ 

using namespace std;

class Node{
private:
	// If reusing this class modify the data needed accordingly
	// "data" here is an example
	int data;

public:
	Node(); // Default constructor
	Node(int dataInput); // Constructor

	void setData(int dataInput);
	int getData();
}

#endif // _NODE_H_
