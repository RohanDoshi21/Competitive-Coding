#include<iostream>
using namespace std;

int main(){
        int number_of_polyhedrons;
        cin >> number_of_polyhedrons;
        int number_of_side {0};
        string polyhedron;
        for(int i = 1; i<= number_of_polyhedrons; i++)
        {
            cin >> polyhedron;
            if(polyhedron == "Tetrahedron"){
                number_of_side += 4;
            }
            if(polyhedron == "Cube"){
                number_of_side += 6;
            }
            if(polyhedron == "Octahedron"){
                number_of_side += 8;
            }
            if(polyhedron == "Dodecahedron"){
                number_of_side += 12;
            }
            if(polyhedron == "Icosahedron"){
                number_of_side += 20;
            }
           
        }
        cout << number_of_side;
    return 0;
}