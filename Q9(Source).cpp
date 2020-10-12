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
		if (tail == NULL)
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
			if (head == NULL)
			{
				head = temp;
			}
			temp->next = tail;
			tail = temp;
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

	void output()
	{
		node* temp = tail;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}

	}
	void lastToFirst()
	{
		if (tail == NULL || tail->next == NULL)
		{
			return;
		}

		node* prev = NULL;
		node* tailTemp = new node;
		tailTemp = tail;


		while (tailTemp->next != NULL)
		{
			prev = tailTemp;
			tailTemp = tailTemp->next;
		}


		prev->next = NULL;


		tailTemp->next = tail;

		tail = tailTemp;
	}
};
int main()
{
	linklist l;
	l.add();
	cout << endl;
	l.output();
	cout << endl;
	l.lastToFirst();
	cout << endl;
	l.output();

}
