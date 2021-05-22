#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};

Node *first = NULL;

void Create(int a[], int n){
    int i;
    Node *temp, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last= first;

    for(int i =1; i<n; i++ )
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

}
void Display(Node *p){
    while(p!=NULL){
        cout << p->data << endl;
        p=p->next;
    }
}
int main() {
    int a[] = {3,5,7,8,10};
    int size_arr = sizeof(a)/sizeof(a[0]);
    Create(a, size_arr);
    Display(first);
    return 0;
}
