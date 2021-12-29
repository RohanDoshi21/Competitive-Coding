#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    Node *prev;

public:
    explicit Node(int data = 0, Node *next = nullptr, Node *prev = nullptr) : data(data), next(next), prev(prev){};
    friend class BinaryNumbers;
};

class BinaryNumbers
{
private:
    Node *head;
    Node *tail;

public:
    BinaryNumbers()
    {
        head = tail = nullptr;
    }
    void Input()
    {
        int n;
        cout << "Enter number of digits";
        cin >> n;
        while (n--)
        {
            int data;
            cout << "Enter Digit ";
            cin >> data;
            Node *temp = new Node(data);
            if (head == nullptr)
            {
                head = tail = temp;
            }
            else
            {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }
    }
    BinaryNumbers onesComplement()
    {
        BinaryNumbers obj;
        Node *ptr = tail;
        while (ptr != nullptr)
        {
            if (ptr->data == 0)
            {
                obj.insertAtHead(1);
            }
            else
            {
                obj.insertAtHead(0);
            }
            ptr = ptr->prev;
        }
        return obj;
    }
    void display()
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void insertAtHead(int data)
    {
        Node *temp = new Node(data);
        if (head == nullptr)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    BinaryNumbers Addition(BinaryNumbers &n2)
    {
        Node *ptr1 = tail;
        Node *ptr2 = n2.tail;
        BinaryNumbers obj;
        int carry = 0;
        while (ptr1 != nullptr || ptr2 != nullptr)
        {
            int data = carry;
            carry = 0;
            if (ptr1 != nullptr)
            {
                data += ptr1->data;
                ptr1 = ptr1->prev;
            }
            if (ptr2 != nullptr)
            {
                data += ptr2->data;
                ptr2 = ptr2->prev;
            }
            if (data == 3)
            {
                carry = 1;
                data = 1;
            }
            if (data == 2)
            {
                carry = 1;
                data = 0;
            }
            obj.insertAtHead(data);
        }
        if (carry == 1)
        {
            obj.insertAtHead(carry);
        }
        return obj;
    }

    BinaryNumbers twosComplement()
    {
        BinaryNumbers obj;
        int carry = 1;
        Node *ptr = tail;
        while (ptr != nullptr){
            int data;
            ptr->data == 1 ? data = 0 : data = 1;
            if (carry == 1){
                data += carry;
                if (data == 2){
                    carry = 1;
                    data = 0;
                }
                else {
                    carry = 0;
                }
            }
            obj.insertAtHead(data);
            ptr = ptr->prev;
        }
        if (carry == 1){
            obj.insertAtHead(carry);
        }
        return obj;
    }
};

int main()
{
    BinaryNumbers n1;
    n1.Input();
    n1.display();

    BinaryNumbers n2;
    n2 = n1.twosComplement();
    // n2.Input();
    n2.display();
    // BinaryNumbers n3;
    // n3 = n1.Addition(n2);
    // n3.display();
    return 0;
}