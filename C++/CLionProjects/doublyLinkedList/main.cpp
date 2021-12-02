//! Author: Rohan Doshi
//? Problem statement Group B - 15

/*
Write C++ program for storing binary number using doubly linked lists. Write function
a) To compute 1‘s and 2‘s complement
b) Add two binary numbers
*/

#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *prev;
    Node *next;

public:
    explicit Node(int data = 0)
    {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
    friend class Binary;
};

class Binary
{
    Node *head;
    Node *tail;

public:
    Binary()
    {
        head = nullptr;
        tail = nullptr;
    }
    ~Binary()
    {
        while (head != nullptr)
        {
            auto temp = head->next;
            delete head;
            head = temp;
        }
    }
    void input()
    {
        int bytes;
        cout << "Enter no of bytes ";
        cin >> bytes;
        if (bytes > 0) {

//            int storeData = data % 10;
//            Node *temp = new Node(storeData);
//            tail = head = temp;
//            data = data / 10;
//
//            while (data > 0) {
//                int storeData1 = data % 10;
//                Node *temp1 = new Node(storeData1);
//                temp1->prev = tail;
//                tail->next = temp1;
//                tail = temp1;
//                data = data / 10;
//            }
            for (int i = 0; i < bytes; ++i) {
                int data;
                cin >> data;
                while (data!=0 && data!=1){
                    cout << "Enter 0 or 1 only" << endl;
                    cin >> data;
                }
                insertAtHead(data);
            }
        }
    }

    void display()
    {
        auto temp = tail;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
    }
    void insertAtHead(int data){
        if (head == nullptr)
        {
            Node *temp = new Node(data);
            head = temp;
            tail = temp;
        }
        else
        {
            Node *temp = new Node(data);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    void insertAtTail(int data)
    {
        if (head == nullptr)
        {
            Node *temp = new Node(data);
            head = temp;
            tail = temp;
        }
        else
        {
            Node *temp = new Node(data);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    Binary onesComplement()
    {
        Binary obj;
        auto temp = head;
        while (temp != nullptr)
        {
            int data;
            temp->data == 1 ? data = 0 : data = 1;
            obj.insertAtTail(data);
            temp = temp->next;
        }
        return obj;
    }

    Binary twosComplement(){
        Binary obj;
        auto temp = head;
        int carry = 1;
        while (temp != nullptr)
        {
            int data;
            temp->data == 1 ? data = 0 : data = 1;
            if (carry == 1) {
                data += carry;
                if (data == 2) {
                    carry = 1;
                    data = 0;
                }else{
                    carry = 0;
                }
            }
            obj.insertAtTail(data);
            temp = temp->next;
        }
        if (carry == 1){
            obj.insertAtTail(carry);
        }
        return obj;
    }

    Binary Add(const Binary& no2){
        auto no1_ptr = head;
        auto no2_ptr = no2.head;
        Binary obj;
        int carry = 0;
        while ( no1_ptr!= nullptr || no2_ptr!= nullptr ){

            int data = carry;
            carry = 0;
            if (no1_ptr != nullptr){
                data += no1_ptr->data;
                no1_ptr = no1_ptr->next;
            }

            if (no2_ptr != nullptr){
                data += no2_ptr->data;
                no2_ptr = no2_ptr->next;
            }

            if (data == 3) {
                carry = 1;
                data = 1;
            }
            if (data == 2){
                carry = 1;
                data = 0;
            }
            obj.insertAtTail(data);
        }
        if (carry == 1){
            obj.insertAtTail(carry);
        }
        return  obj;
    }

};

int main()
{
    Binary obj1;
    obj1.input();
    cout << "1st No is: ";
    obj1.display();
    cout << endl;

    Binary obj2 = obj1.onesComplement();
    obj2.display();
    cout << endl;

    Binary obj3 = obj1.twosComplement();
    obj3.display();
    cout << endl;

    Binary obj4;
    obj4.input();
    cout << "2nd No is: ";
    obj4.display();

    // destructor gets called and deletes memory of 4th object
//    obj4 = obj4.Add(obj1);
    Binary obj5 = obj4.Add(obj1);
    cout << endl;
    cout << "Sum is ";
    obj5.display();

    return 0;
}