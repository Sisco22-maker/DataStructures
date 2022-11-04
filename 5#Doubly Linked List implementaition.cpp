/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define ll long long
#define  el "\12"

template<class T>
class DoublyLinkedList
{
    private:
   struct node
   {
       T item;
       node *next;
       node *previous;
   };
   node *first;
   node *last;
   int len;
   public:
   DoublyLinkedList():first(nullptr),last(nullptr),len(0)
   {
       //maybe some code here who knows...!
   }
   //-----------------------------------------------------------//
   //the same but you love repeat
   bool isEmpty()
   {
       return first == nullptr;
   }
   //-----------------------------------------------------------//
   //just for getting the size of the list
   int GetSize()
   {
       return len;
   }
   //-----------------------------------------------------------//
   //function to insert elements from the front of the list

   void PusFront(T element)
   {
       node *newNode = new node;
       newNode->item = element;
       if(first == nullptr)
       {
           newNode->next = newNode->previous = nullptr;
           first = last = newNode;
       }else
       {
           newNode->next = first;
           newNode->previous = nullptr;
           first->previous = newNode;
           first = newNode;
       }
       ++len;
   }
   //-----------------------------------------------------------//

   //just insert the elements from the back of the list
   void PushBack(T element)
   {
       node *newNode = new node;
       newNode->item = element;

        if(first == nullptr)
       {
           newNode->next = newNode->previous = nullptr;
           first = last = newNode;
       }else
       {
           newNode->next = nullptr;
           newNode->previous = last;
           last->next = newNode;
           last = newNode;
       }
       ++len;
   }
   //---------------------------------------------------------//
   //just insert element at a particular position

   void PushAt(int pos,T element)
   {
       node *newNode = new node;
       newNode->item = element;
       if(pos < 0 || pos > len)
       {
           cout << "Invalid position....!" << el;
           return;
       }else if(pos == 0)
       {
           PusFront(element);
       }else if(pos == len)
       {
           PushBack(element);
       }else
       {
           node *insertedNode = first;
           for(int i = 0; i < pos; i++)
           {
               insertedNode = insertedNode->next;
           }

           newNode->next = insertedNode;
           newNode->previous = insertedNode->previous;
           insertedNode->previous->next = newNode;
           insertedNode->previous = newNode;
           //just another way but just put i = 1 instead of 0;

           //newNode->previous = insertedNode;
           //newNode->next = insertedNode->next;
           //insertedNode->next->previous = newNode;
           //insertedNode->next = newNode;

       }
       ++len;
   }
   //------------------------------------------------------------//
   //just a simple function to print the list from the front
   void Print()
   {
       node *currentNode = first;
       while(currentNode != nullptr)
       {
           cout << currentNode->item << " ";
           currentNode = currentNode->next;
       }
       delete currentNode;
       currentNode = nullptr;
       cout << el;
   }
   //------------------------------------------------------------//

   //just for printing the list reversed

   void PrintReversed()
   {
        node *currentNode = last;
       while(currentNode != nullptr)
       {
           cout << currentNode->item << " ";
           currentNode = currentNode->previous;
       }
       delete currentNode;
       currentNode = nullptr;
       cout << el;
   }
   //------------------------------------------------------------//
   //just to make the first and the last empty
   void ClearFrontBack()
   {
       delete first;
       delete last;
        first = nullptr;
        last = nullptr;
   }
   //------------------------------------------------------------//
   //just a function to delete from the front of the list

   void PopFront()
   {
       if(len == 0)
       {
           cout << "The list is empty...!" << el;
           ClearFrontBack();
           return;
       }
       node *DeletedNode = first;
       first = first->next;
       first->previous = nullptr;
       delete DeletedNode;
       DeletedNode = nullptr;
       len--;
   }
   //------------------------------------------------------------//

   //just a function to delete from the back of the list

   void PopBack()
   {
        if(len == 0)
       {
           cout << "The list is empty...!" << el;
            ClearFrontBack();
           return;
       }
       node *DeletedNode = last;
       last = last->previous;
       last->next = nullptr;
       delete DeletedNode;
       DeletedNode = nullptr;
       len--;
   }
   //------------------------------------------------------------//

   //just to delete from a particular position in the list
   void PopAt(int pos)
   {
       if(pos < 0 || pos > len)
       {
           cout << "Invalid position...!" <<el;
           return;
       }
       if(pos == 0)
       {
           PopFront();
           return;
       }
       if(pos == len)
       {
           PopBack();
           return;
       }
       node *currentNode = first;
       for(int i = 0; i < pos; i++)
       {
           currentNode = currentNode->next;
       }
       currentNode->previous->next = currentNode->next;
       currentNode->next->previous = currentNode->previous;
       delete currentNode;
       currentNode = nullptr;
   }
   //----------------------------------------------------------//
   //to clear the list
   ~DoublyLinkedList()
   {
       node *DeletedNode = first;
       while(DeletedNode != nullptr)
       {
           first = first->next;
           delete DeletedNode;
           DeletedNode = nullptr;
       }
       delete last;
       last = nullptr;
       len = 0;
   }


};

int main() {
     SUPERPOWER;
int t = 1;//cin >> t;
while(t--)
{
    //write the code here
    //int n;cin >> n;
    DoublyLinkedList <string>dl;
    dl.PushBack("a");
    dl.PushBack("k");
    dl.PushBack("r");
    dl.PushBack("b");
    dl.Print();
     dl.Print();


}
  return 0;
}





