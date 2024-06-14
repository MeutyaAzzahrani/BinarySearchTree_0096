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

	void search(string element, Node*& parent, Node*& currentNode)
	{
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL && currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->lefchild;
			else
				currentNode = currentNode->rightchild;
		}
	}
	
	void inorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree in empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			inorder(ptr->lefchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}

	void preorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->lefchild);
			preorder(ptr->rightchild);
		}
	}

	void postorder(Node* ptr)
	{
		if (ROOT == NULL)
		{ 
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			postorder(ptr->lefchild);
			postorder(ptr->rightchild);
			cout << ptr->info << " ";
		}
	}
};

int main()
{
	BinaryTree obj;
	while (true)
	{
		cout << "\nMenu" << endl;
		cout << "1. Implement insert operation" << endl;
		cout << "2. Perform inorder traversal" << endl;
		cout << "3. Perform preorder traversal" << endl; 
		cout << "4. Perform postorder traversal" << endl;
		cout << "5. Exit" << endl;
		cout << "\nEnter your choice (1-5) : ";

		char ch;
		cin >> ch;
		cout << endl;

		switch (ch)
		{
		case '1' :
		{
			cout << "Enter a word: ";
			string word;
			cin >> word;
			obj.insert(word);
			break;
		}
		case '2' :
		{
			obj.inorder(obj.ROOT);
			break;
		}
		}
	}
}