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
			cout << "List is empty" << endl;
		}
		else
		{
			cout << "List is not empty" << endl;
		}

	}
	void add()
	{
		bool loopchecker = true;
		int loopcounter;
		while (loopchecker)
		{
			node* temp = new node;
			cout << "Enter Element into the linklist = ";
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
			cout << "Do you want to Enter Another element into the linklist?\nPress 1 to Enter Another Element or 2 to go to next step" << endl;
			cin >> loopcounter;
			if (loopcounter == 1)
			{
				continue;
			}
			else if (loopcounter == 2)
			{
				loopchecker = false;
			}
		}

	}
	void pop()
	{

		node* temp = new node;
		temp = head;
		if (temp == NULL)
		{
			cout << "Underflow Occured" << endl;
			return;
		}
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		tail = temp;
		temp = temp->next;
		delete temp;

	}
	void output()
	{
		node* temp = head;
		if (temp == NULL)
		{
			cout << "Underflow Occured" << endl;
			return;
		}
		while (temp != tail->next)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}

	}
	void adjacentSwap()
	{
		node* temp = new node;
		temp = head;
		int swap;
		while (temp != NULL && temp->next != NULL)
		{
			swap = temp->data;
			temp->data = temp->next->data;
			temp->next->data = swap;
			temp = temp->next->next;
		}

	}
};
int main()
{
	linklist l;
	int loopCounter;
	while (1)
	{
		cout << "Press 1 to add" << endl;
		cout << "Press 2 to print" << endl;
		cout << "Press 3 to adjacent swap" << endl;
		cout << "Press 4 to end" << endl;
		cin >> loopCounter;
		if (loopCounter == 1)
		{
			l.add();
			cout << endl;
			cout << "added" << endl;
		}
		else if (loopCounter == 2)
		{
			cout << endl;
			l.output();
		}
		else if (loopCounter == 3)
		{
			l.adjacentSwap();
			cout << "Swap Sucessful" << endl;
		}
		else if (loopCounter == 4)
		{
			break;
		}
	}
}
