/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
template<class T>
class Mylist
{
private:
    struct node
    {
        T item;
        node *next;
    };
    node *head;
    node *tail;
    int len;
    public:
    Mylist():head(nullptr),tail(nullptr),len(0)
    {
        //maybe some code here who knows!
    }
    //the same every time but you love repeating things
    bool isEmpty()
    {
        return head == nullptr;
    }
    bool isFull()
    {
        return len == 0;
    }
    //function to insert from the begin
    // it looks like stack implementation you just
    //-> make a node then check if this node is the first one or no't
    //-> if the node is the first one in the list you just
    //-> set it's next pointer to null and keep going
    //-> if there is more than one node in the list
    //-> you create a node then set it's pointer to the previous one
    //-> the you move the head to the new node
    //->and left the tail on this node alone like dog...!
    void PushFront(T value)
    {
        ++len;
        node *newNode = new node;
        newNode->item = value;
        if(head == nullptr)
        {
            newNode->next = nullptr;
            tail = head = newNode;
        }else
        {
          newNode->next = head;
          head = newNode;
        }
    }
    //to insert in the last of the list you just make the same as in the
    //-> queue and just move the tail pointer
    void PushLast(T value)
    {
        ++len;
        node *newNode = new node;
        newNode->item = value;
        if(head == nullptr)
        {
            newNode->next = nullptr;
            head = tail = newNode;
        }else
        {
            tail->next = newNode;
            newNode->next = nullptr;
            tail = newNode;
        }
    }
    //just making insert function to insert a value in a particular position
    void PushAt(int pos, T value)
    {
        if(pos < 0 || pos > len)
        {
            cout << "Invalid position" <<el;
            return;
        }
        node *newNode = new node;
        newNode->item = value;
        if(pos == 0)
        {
           PushFront(value);
            return;
        }
        if(pos == len)
        {
            PushLast(value);
            return;
        }
        node *Place = head;
        for(int i = 1; i < pos; i++)
        {
          Place = Place->next;
        }
        newNode->next = Place->next;
        Place->next = newNode;
        len++;
    }
    //just print the whole list
    void PrintList()
    {
        node *current = head;
        while(current != nullptr)
        {
            cout << current->item << " ";
            current = current->next;
        }
        current = nullptr;
        delete current;
    }

};
int main() {
Mylist <int>l;
l.PushFront(5);
l.PushFront(9);
l.PushAt(10,4);

l.PrintList();
  return 0;
}





