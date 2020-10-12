#include <iostream>

using namespace std;



class node

{

public:

    int data;

    node* next;



};

class linklist

{

public:

    node* head;

    node* tail;

    linklist()

    {

        head = NULL;

        tail = NULL;

    }



    void addData()

    {

        bool loopchecker = true;

        int loopcounter;

        while (loopchecker)

        {

            node* temp = new node;

            cout << "Enter value = ";

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

            cout << "Enter 1 to add another value or 2 or break" << endl;

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

        node* temp = new node;

        temp = head;



        while (temp != NULL)

        {

            cout << temp->data << endl;

            temp = temp->next;

        }





    }

    void search() // search element is 3

    {

        bool mainloopChecker = true;

        int mainloopCounter;

        while (mainloopChecker)

        {

            node* temp = new node;

            temp = head;

            int search;

            cout << "Enter the element you want to search = ";

            cin >> search;

            bool loopchecker = true;

            while (temp != NULL)

            {

                if (temp->data == search)

                {

                    cout << "Number found" << endl;

                    loopchecker = false;

                }

                temp = temp->next;

            }

            if (loopchecker == true)

            {

                cout << "Number not found" << endl;

            }

            cout << "Press 1 to search again or 2 to end the program" << endl;

            cin >> mainloopCounter;

            if (mainloopCounter == 1)

            {

                continue;

            }

            else if (mainloopCounter == 2)

            {

                mainloopChecker = false;

            }

        }

    }







};



int main()

{

    linklist l;

    l.addData();

    cout << endl;

    l.output();

    l.search();

}
