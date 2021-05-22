#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class Linked_List{
private:
    Node *first;
public:
    explicit Linked_List(Node*)
    {
        first = nullptr;
    }
    Linked_List(const int arr[], int size_arr);
    ~Linked_List();

    void Display();
    void Insert(int, int);
    int Delete(int);
    int Length();

};
Linked_List::Linked_List(const int arr[], int size_arr) {
    first = new Node;
    first->data = arr[0];
    first->next = nullptr;
    Node *temp, *last;
    last = first;
    for (int i = 1; i <size_arr ; ++i) {
        temp = new Node;
        temp->next = nullptr;
        temp->data = arr[i];
        last->next = temp;
        last = temp;

    }
}
int Linked_List::Length() {
    Node *p = first;
    int count {0};
    while (p!= nullptr){
        count++;
        p=p->next;
    }
    return count;
}
void Linked_List::Insert(int key, int index) {
    Node *p = first;
    Node *new_node = new Node;
    if(index<0 || index > Length())
        return;

    //new_node = new Node;
    new_node->data = key;
    if (index ==0) {
        new_node->next = first;
        first = new_node;
    }

    else {

        for (int i = 1; i<index; i++)
            p=p->next;

        new_node->next = p->next;
        p->next = new_node;

    }
}
Linked_List::~Linked_List() {
    Node *p = first;
    while (p!= nullptr)
    {
        first = first->next;
        delete p;
        p = first;
    }
    first = nullptr;
}
void Linked_List::Display() {
    Node *p = first;
    while (p!= nullptr){
        cout << p->data << endl;
        p = p->next;
    }
}

int Linked_List::Delete(int index) {
    Node *p = first;
    Node *q = nullptr;
    int data {-1};
    if(index < 0 || index >= Length())
        return -1;
    if(index == 0) {
        data = p->data;
        first = first->next;
        delete p;
    }
    else {
        for (int i = 1; i < index ; ++i) {
            p = p->next;
        }
        q = p;
        p=p->next;
        q->next = p->next;
        data = p->data;
        delete p;
    }
    return data;
}

int main() {
    int size_arr;
    cin >> size_arr;
    int arr[size_arr];
    for (int i = 0; i < size_arr; ++i) {
        cin >> arr[i];
    }
    Linked_List l1(arr, size_arr);
    l1.Display();
    return 0;
}
