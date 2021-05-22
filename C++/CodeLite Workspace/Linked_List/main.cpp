#include<iostream>
using namespace std;
class Node{
    public:
        int key;
        int data;
        Node *next;
        
        Node(){
            key =0;
            data = 0;
            next = NULL;
        }
        Node(int k, int d){
            key =k;
            data = d;
            next = NULL;
            
        }
};
class Singly_linked_list{
    public:
        Node *head;
        Singly_linked_list(){
            head = NULL;
        }
        Singly_linked_list(Node *n){
            head = n;
        }
        
};
int main(){
       cout << "Hi this is Rohan Doshi" << endl;
	return 0;
}
