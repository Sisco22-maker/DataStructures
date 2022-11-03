/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
template<class T>
class Myqueue
{
    //creating the node implementation
    private:
    struct node
    {
        T item;
        node *next;
    };
    node *Front;
    node *Back;
    int Size;
    public:
    Myqueue(): Front(nullptr),Back(nullptr),Size(0)
    {
        // Maybe some code here Who Knows...!
    }
    //-------------------------------------------------------//
    //just we make sure if the linked list is empty or not
    bool isEmpty()
    {
        return Front == nullptr;
    }
    //------------------------------------------------------//
    //to push an element you just create a new node
    // -> then you assign it's value variable to the passed variable
    //->then you assign the pointer to null
    //-> then you check if the queue is empty
    //-> then you assign the back and the front to the new node
    //->if the queue is not empty then you just assign the new node
    // -> to back pointer then you just move the back pointer to
    // -> point to the new node



    void PusIn(T value)
    {
        node *newNode = new node;
        newNode->item = value;
        newNode->next = nullptr;
        if(isEmpty())
           Back = Front =  newNode;
        else
        {
            Back->next = newNode;
            Back = newNode;
        }
        Size++;
    }
    //-------------------------------------------------------//

    //you just check if it was empty or not
    // you make sure to assign the deleted value to a temp value
    //-> then you just check if the queue has one value then you just
    //-> make the both front and back are null values
    //-> if the queue had more than one value you just put the front
    //-> value in a temp then you move the front value to it's next pointer value
    //-> the you assign nullptr to the temp value then delete it to avoid memory leaks
    void PopOut()
    {
        if(isEmpty())
        return;
        if(Front->next == Back->next)
        {
            Front =nullptr;
            Back = nullptr;
            --Size;
            return;
        }
        node *temp = Front;
        Front = Front->next;
        delete temp;
        temp->next = nullptr;
           --Size;
    }
    //----------------------------------------------------------------//
    //just a function to return the front value
     T GetFront()
    const {
        if(!isEmpty())
         return Front->item;
     }
     //---------------------------------------------------------------------//

     //no need to rewrite the explanation for this function
     //-> we have already write it before
     void Print()
     {
         if(isEmpty())
             return;
         node *currptr = Front;
         while(currptr != nullptr)
         {
             cout << currptr->item << " ";
              currptr =  currptr->next;
         }
     }
     //---------------------------------------------------------------------//
     //now let's make a clear function to clear the list

     void ClearQueue()
     {
         node *del;
         while(Front != nullptr)
         {
             del = Front;
             Front = del->next;
             delete del;
             del = nullptr;
         }
         Back = nullptr;
         Size = 0;
     }
     //------------------------------------------------//

     const int& GetSize() const
     {
         return Size;
     }
};
int main() {

Myqueue <string> q;

  return 0;
}





