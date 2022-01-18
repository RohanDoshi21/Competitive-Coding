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
    } data;

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
    GLL()
    {
        head = nullptr;
    }
    GLLNode *Create(GLLNode *start, char x)
    {
        auto temp = start;
        if (start == nullptr)
        {
            if (x != '(' && x != ')')
            {
                GLLNode *newNode = new GLLNode(false, x);
                start = newNode;
                return start;
            }
            else
            {
                GLLNode *newNode = new GLLNode(true);
                start = newNode;
                return newNode->data.down;
            }
        }
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            if (x != '(' && x != ')')
            {
                GLLNode *newNode = new GLLNode(false, x);
                temp->next = newNode;
                return start;
            }
            else
            {
                GLLNode *newNode = new GLLNode(true);
                temp->next = newNode;
                return newNode->data.down;
            }
        }
    }

    void Insert(string s1)
    {
        auto temp = head;
        stack<GLLNode *> stack1;
        for (auto i : s1)
        {
            if (i != ')')
            {
                if (i == '(')
                {
                    stack1.push(temp);
                }
                temp = Create(temp, i);
            }
            else
            {
                temp = stack1.top();
                stack1.pop();
            }
        }
    }

    // GLLNode *display(GLLNode *temp = nullptr)
    // {
    //     static stack<GLLNode *> s1;
    //     cout << "(";
    //     while (temp != nullptr || temp->tag == true)
    //     {
    //         cout << temp->data.data << ", ";
    //         temp = temp->next;
    //     }
    // }
    // void insert()
    // {
    // }
};
int main()
{
    string s1 = "(a(bc))";
    GLL g1;
    g1.Insert(s1);
    return 0;
}