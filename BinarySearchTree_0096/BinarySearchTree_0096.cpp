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

	void insert(string element)
	{
		Node* newNode = new Node(element, NULL, NULL);
		newNode->info = element;
		newNode->lefchild = NULL;
		newNode->rightchild = NULL;

		Node* perent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);

		if (parent == NULL)
		{
			ROOT = newNode;
			return;
		}

		if (element < parent->info)
		{
			parent->leftchild = newNode;
		}
		
		else if (element > parent->info)
		{
			parent->rigthchild = newNode;
		}
	}
};