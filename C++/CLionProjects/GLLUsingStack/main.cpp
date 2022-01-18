#include <iostream>
#include <stack>
using namespace std;

class GLLNode
{
    GLLNode *next;
    bool tag;
    union node
    {
        char data;
        GLLNode *down;
    } data{};

public:
    GLLNode(bool tag = false, char data = '\0', GLLNode *next = nullptr) : next(next), tag(tag)
    {
        if (!tag)
        {
            this->data.data = data;
        }
        else
        {
            this->data.down = nullptr;
        }
    };

    friend class GLL;
};

class GLL
{
    GLLNode *head;

public:
    GLL() { head = nullptr; }
    void create()
    {
        int choice = 0;
        stack<GLLNode **> s1;
        s1.emplace(&head);
        while (choice != -1)
        {
            cout << "MENU" << endl;
            cout << "1. ADD Element" << endl;
            cout << "2. ADD Node" << endl;
            if (s1.top() != &head)
            {
                cout << "3. Drop Link" << endl;
            }
            if (s1.top() == &head)
            {
                cout << "-1 End" << endl;
            }
            cout << "Enter your choice" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                auto temp = s1.top();
                if (*temp == head && head != nullptr)
                {
                    while ((*temp)->next != nullptr)
                    {
                        (*temp) = (*temp)->next;
                    }
                    cout << "Enter Data" << endl;
                    char x;
                    cin >> x;
                    auto *add = new GLLNode(false, x);
                    (*temp)->next = add;
                }
                else
                {
                    cout << "Enter Data" << endl;
                    char x;
                    cin >> x;
                    auto *add = new GLLNode(false, x);
                    head = add;
                }
                break;
            }
            case 2:
            {
                auto temp = s1.top();
                while ((*temp)->next != nullptr)
                {
                    (*temp) = (*temp)->next;
                }
                cout << "Setting up a down link" << endl;
                auto *add = new GLLNode(true);
                (*temp)->next = add;
                s1.emplace(&add);
                break;
            }
            case 3:
            {
                cout << "3. Droping Link" << endl;
                s1.pop();
                break;
            }
            case -1:
                return;
                break;

            default:
                break;
            }
        }
    }
    void insert(GLLNode *) {}
};

int main()
{
    GLL list1;
    list1.create();
    return 0;
}