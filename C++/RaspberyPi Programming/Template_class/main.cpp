#include<iostream>
using namespace std;

template <class T>
class Arithematic 
{
    private:
    T a;
    T b;
public:
    Arithematic(T, T);
    void Show();
};
template<class T>
Arithematic<T>::Arithematic(T x, T y)
{
    a = x;
    b = y;
}

template<class T>
void Arithematic<T>::Show(){
    cout << a << endl;
    cout << b;
}

int main(){
       Arithematic<char>a1('a','x');
       a1.Show();
    return 0;
}