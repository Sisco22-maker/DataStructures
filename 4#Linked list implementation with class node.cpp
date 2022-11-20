/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
class node
{
public:
    typedef int typed_value;
    typed_value value;
    node *next{};
    node(typed_value value, node *next):
        value(value),next(next)
        {
            //maybe some code here
        }
};
class linked_list
{
private:
    node *head = nullptr;
public:
    // function to insert a value in the linked list
    void insert_front(node::typed_value value)
    {
        node *new_node = new node(value,head);
        head = new_node;
    }
    void insert_at_pos(int pos,node::typed_value value)
    {
        node *curr_value = head;
        node *prev_value = nullptr;
        while(pos--)
        {
            prev_value = curr_value;
            curr_value = curr_value->next;
        }
        node *new_node = new node(value,curr_value);
        prev_value->next = new_node;
    }
    void delete_head()
    {
        if(!head)
            return;
        node *new_head = head->next;
        delete head;
        head = new_head;
    }
    void delet_at_pos(int pos)
    {
        if(head == nullptr)
            return;
        node *curr_head = head;
        node *prev_head = nullptr;
        while(pos--)
        {
            prev_head = curr_head;
            curr_head = curr_head->next;
        }
        prev_head->next = curr_head->next;
        delete curr_head;
    }
    void print()
    {
        node *curr_node = head;
        while(curr_node != nullptr)
        {
           cout << curr_node->value << " ";
           curr_node = curr_node->next;
        }
    }
};
int main() {
linked_list ln;
ln.insert_front(5);
ln.insert_front(4);
ln.insert_front(3);
ln.insert_at_pos(2,100);
ln.print();
  return 0;
}





