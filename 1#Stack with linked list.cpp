/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)

//directions array 4 directions
// Which is: d r u  l
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0, -1};
/*
to loop on the vertices

we loop on the hole grid and put our conditon

int nx = i+dx[k],ny = j+dy[k] : k is the varialble

then we set this condition
if(nx < rows && ny < columns)
    #some code here

of the loop which loops on the grid array
*/
//directions array 8 directions
// Which is: d r u  l ld lu rd ru
int dx_8[8] = {1,0,-1,0, 1,-1,1,-1};
int dy_8[8] = {0,1,0, -1,-1,1,1, 1};
const int INF = (int)1e9;
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}
//in any array index = rows*i+j and i = index/rows , j = index%rows
/*
- ~Tip
if you wanna get the longest sequance of a string just use a map and max
*/
template<class T>
void print(vector<T>v,T s)
{
    for(int i = 0; i < s; i++)cout << v[i] << " ";
    cout << el;
}

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
    // might be some code here who know!
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





