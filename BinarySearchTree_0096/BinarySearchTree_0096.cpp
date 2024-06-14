#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* lefchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node * l, Node* r) 
	{
		info = i;
		lefchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //Initializing ROOT to NULL
	}
};