#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *first = nullptr;
void Linked_List(int arr[], int size_arr){
    Node *last;
    first = new Node;
    first->data = arr[0];
    first->next = nullptr;
    last = first;
    for(int i=1; i<size_arr;i++){
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}
void Display(){
    Node *p;
    p = first;
    while (p!= nullptr){
        cout << p->data << endl;
        p=p->next;
    }

}
int Count_Nodes(){
    int count = 0;
    Node *p;
    p = first;
    while (p!= nullptr){
        count++;
        p=p->next;
    }
    return count;
}
int sum(){
    int sum = 0;
    Node *p;
    p = first;
    while (p!= nullptr){
        sum += p->data;
        p=p->next;
    }
    return sum;
}
int Create()
int main() {
    int arr[] = {0,1,3,4};
    Linked_List(arr, 4);
    Display();
    cout << Count_Nodes() <<endl;
    cout << sum() << endl;
    return 0;
}
