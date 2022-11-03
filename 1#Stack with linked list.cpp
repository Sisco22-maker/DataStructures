/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
 //all you do is just making a node and a top pointer to this node then you have to make this top points to null at first
 // when the user use push function you create a new node then make it's item equals the value and it's pointer points to
 // top value then make the top value then make the top points to the new node  null-<firstNode-<secondNode-<topNode and so one


 //when you wanna make pop you know that the node on the top is connected to to node before it by a pointer
 // you just make a temp value holds the top pointer of kind node then you have to make to equals to top->next
 // then delete the temp value which points to a memory holds the element
#include <bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class myStack
{
private:
    struct node
    {
    T item;
    node *next;
    };
    node *top;
public:
    myStack(): top(nullptr){
    // might be some code here who knows!
    }
    //--------------------------------------------------------------------------//
    //implement the function of push in the real stack
    //as you see we just made a new container allocation in the memory
    // then we assigned the pushed item to the item variable in the new container
    // then we assigned the pointer in the new container to the previous container
    // ->by assigne the the pointer inside the new container to the Top pointer
    // and you know that the top pointer points to the previous container
    // the we assigned the Top pointer to the current container
    //--------------------------------------------------------------------------//
    void Push(const T& newItem)
    {
        node *newnodeptr = new node;
        newnodeptr->item = newItem;
        newnodeptr->next = top;
        top = newnodeptr;
    }
    //-------------------------------------------------------------------------//
    //just make a isEmpty function to check if the stack is empty or not
    bool isEmpty()
    {
        return top == nullptr;
    }
    //-------------------------------------------------------------------------//
    //implement The pop function
    //we just create a temp value that holds the the top pointer content
    // then we assign the value of top pointer to the previous pointer that points
    // ->to the previous container
    // then we make the temp value equals to nullptr
    void Pop()
    {
        if(isEmpty())
            return;
        node *temp = top;
        top = top->next;
        temp = temp->next = nullptr;
          delete temp;
    }
    //------------------------------------------------------------------------//

    //function to get the top element in the stack
    // just we print it it's easy by i'm just joking with you bro:)
    T getTop()
    {
        if(isEmpty())
            return -1;
            return top->item;
    }

    //----------------------------------------------------------------------//

    //now we have a date with the hardest function ever in the world! ":
    // meine damen und herren let me introduce the .... the ... the p...
    // -> let me introduce the printing function hey..hey..hey :)

    //you just make a temp value named curr and assigned it to the top pointer
    // then you make iteration on the current and stop it when your cuur pointer
    //-> equals nullptr
    //quick note ": if you don't know the meaning of iteration
    // -> i will be grateful for you if you find a person that can
    // -> explain it for us :)
    void print()
    {
        node *curr = top;
        while(curr != nullptr)
        {
            cout << curr->item << " ";
            curr = curr->next;
        }
        cout << el;
    }
    //--------------------------------------------------------------------//



};

int main() {
     SUPERPOWER;
     // freopen("popcorn.in", "r", stdin);
int t = 1;//cin >> t;
while(t--)
{
    //write the code here
    //int n;cin >> n;
    myStack <int>s;
    s.Push(5);
    s.Push(9);
    cout << s.isEmpty();
    s.Pop();
    s.Pop();
        cout <<el <<  s.isEmpty() << el;
        cout << s.getTop();



}
  return 0;
}





