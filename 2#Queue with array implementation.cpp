/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

template<class T>
class Myqueue
{
private:
    int Front;
    int Back;
    int Size;
    int MaxSize;
    T *container;
public:
    Myqueue(int CurrentSize = 100)
    {
        MaxSize = max(CurrentSize,0);
        Size = 0;
        Front = 0;
        Back = Size - 1;
        container = new T[MaxSize];
    }
    bool isEmpty()
    {
        return Size == 0;
    }
    bool isFull()
    {
        return Size == MaxSize;
    }
    void PusIN(T value)
    {
        if(isFull())
          {
              cout << "There is no space in the Queue!..." << "\n";
          }else
          {
            Back = (Back+1)%MaxSize;
            container[Back] = value;
            ++Size;
          }
    }
    void PopOut()
    {
        if(isEmpty())
            return;
        Front = (Front+1)%MaxSize;
        --Size;
    }
    T GetFront()
    {
        if(isEmpty())
        {
            cout << "There is no elements in the queue...!" <<"\n";
        }
        else
        {
            return container[Front];
        }
    }
    void Print()
    {
        if(isEmpty())
        {
            cout << "There is no elements....!" << "\n";
            return;
        }
        for(int i = Front; i != Back+1; i = (i+1)%MaxSize)
            cout << container[i] << " ";
    }


};
int main() {
Myqueue<string>q(4);
q.PusIN("islam");
q.Print();

  return 0;
}





