#include <iostream>
using namespace std;

class Node{
private:
    int data;
    Node *next_address;
public:
    void Set_Data(int key){
        data = key;
    }
    Node * Set_Address(Node *address){
        next_address = address;
    }
    int Show_data(){
        return data;
    }
    Node* Show_address(){
        return next_address;
    }
};
Node *first = nullptr;

void Create_Linked_list(const int arr[], int size_arr){

    first = new Node;
    Node *setptr = new Node;
    Node *last;
    setptr->Set_Data(arr[0]);
    setptr->Set_Address(nullptr);
    first = setptr;
    last = first;
    for(int i =1; i< size_arr; i++){
        setptr = new Node;
        setptr->Set_Data(arr[i]);
        setptr->Set_Address(nullptr);
        last->Set_Address(setptr);
        last = setptr;
    }

}
void Display(){
    Node *p;
    p = first;
    while (p!= nullptr){
        cout << p->Show_data();
        p=p->Set_Address(p->Show_address());
    }
}
int main() {
    int arr[]= {0,1,3,4};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    Create_Linked_list(arr, size_arr);
    Display();
    return 0;
}
