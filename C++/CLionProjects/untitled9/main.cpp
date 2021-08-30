#include <iostream>
using namespace std;

class Complex
        {
    float real, imaginary;

        public:
            Complex(float realParameter = 0, float imaginaryParameter = 0)
            {
                real = realParameter;
                imaginary = imaginaryParameter;
            }

            Complex operator+(Complex obj)
            {
                Complex temp;
                temp.real = real + obj.real;
                temp.imaginary = imaginary + obj.imaginary;
                return temp;
            }
            Complex operator-(Complex obj)
            {
                Complex temp;
                temp.real = real - obj.real;
                temp.imaginary = imaginary - obj.imaginary;
                return temp;
            }
            Complex operator*(Complex obj)
            {
                Complex temp;
                temp.real = real * obj.real - imaginary * obj.imaginary;
                temp.imaginary = real * obj.imaginary + obj.real * imaginary;
                return temp;
            }

            // TODO: learn how to divide complex numbers again 😞
            Complex operator/(Complex obj)
            {
                Complex temp;
                temp.real = real * obj.real - imaginary * obj.imaginary;
                temp.imaginary = real * obj.imaginary + obj.real * imaginary;
                return temp;
            }

            void print()
            {
                cout << real << "+" << imaginary << "i" << endl;
            }

            // TODO : implement overloading of >> & << operator using ostream and istream
            friend void operator<<(ostream &output, Complex obj)
            {
                output << obj.real << "+" << obj.imaginary << "i" << endl;
            }

            friend void operator >> (istream &input, Complex obj)
            {
                input >> obj.real;
                input >> obj.imaginary;
            }

        };

int main()
{
    Complex c1, c2(10, 13), c3;
    cin >> c1;
    c1.print();
    cout << c1;
    // cin >> c2;
    c2.print();
    cout<<c2;
    c3 = c1 + c2;
    cout << c3;
    return 0;
}