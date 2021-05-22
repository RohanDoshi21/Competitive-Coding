#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *address;
};
Node *first;
void Create(int a[], int size_arr){

    first = new Node;
    first->data = a[0];
    first->address = NULL;
    Node *temp;
    Node *last;
    last = first;
    for(int i = 1; i< size_arr; i++){
        temp = new Node;
        temp->data = a[i];
        temp->address = NULL;
        last->address = temp;
        last = temp;
    }

}
void Display(Node *p){
     p = first;
    while (p!=NULL){
        cout << p->data << endl;
        p=p->address;
    }

};

int main() {
    int a[]= {1,2,3,4,5,677,4223,86543,12435};
    int size_arr = sizeof(a)/ sizeof(a[0]);
    Create(a, size_arr);
    Display(first);
    return 0;
}
