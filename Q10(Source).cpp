#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;

};
class linklist
{
	node* head;
	node* tail;
public:
	linklist()
	{
		head = NULL;
		tail = NULL;
	}



	void emptyCheck()
	{
		if (head == NULL)
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			cout << "Stack is not empty" << endl;
		}

	}
	void add()
	{
		bool loopChecker = true;
		int loopCounter = false;
		while (loopChecker)
		{
			node* temp = new node;
			cout << "Enter Element = ";
			cin >> temp->data;
			temp->next = NULL;

			if (head == NULL)
			{
				head = temp;
				tail = temp;
			}
			else
			{
				tail->next = temp;
				tail = tail->next;
			}
			cout << "Press 1 to enter another element\n Press 2 to go to next step" << endl;
			cin >> loopCounter;
			if (loopCounter == 1)
			{
				continue;
			}
			else if (loopCounter == 2)
			{
				loopChecker = false;
			}
		}


	}

	void output()
	{
		node* temp = head;
		if (temp == NULL)
		{
			cout << "Underflow Occured" << endl;
			return;
		}
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}

	}

	linklist merge(linklist x, linklist y)
	{
		linklist l;
		node* temp1 = x.head;
		node* temp2 = x.tail;
		node* temp3 = y.head;
		temp2->next = y.head;
		l.head = temp1;

		return l;
	}

};
int main()
{
	linklist x;
	linklist y;
	cout << "Entering Data in first link list" << endl;
	x.add();
	cout << "Entering Data in second link list" << endl;
	y.add();
	cout << "Now Merging them into another link list" << endl;
	cout << "First Link List" << endl;
	x.output();
	cout << endl;
	cout << "Second Link List" << endl;
	y.output();
	cout << endl;
	x = x.merge(x, y);
	cout << "Merged Link List" << endl;
	x.output();
	cout << endl;

}
