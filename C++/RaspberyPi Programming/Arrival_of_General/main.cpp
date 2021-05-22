#include<iostream>
using namespace std;

int main(){
        int number_of_soliders;
        cin >> number_of_soliders;
        int height_of_soliders[number_of_soliders];
        for (int i = 0; i< number_of_soliders; i++)
        {
            cin >> height_of_soliders[i];
        }
        int maximum_height = height_of_soliders[0];
        int minimum_height = height_of_soliders[0];
        int max_height_pos = 0;
        int min_height_pos = 0;
        for(int i=0; i < number_of_soliders; i++)
        {
            
            if(maximum_height < height_of_soliders[i])
              {  maximum_height = height_of_soliders[i];
                max_height_pos = i;
              
              }
        }
        for (int i = 0; i < number_of_soliders; i++)
        {
            if(minimum_height >= height_of_soliders[i])
              {  minimum_height = height_of_soliders[i];
                min_height_pos = i;
              }
        }
        if(max_height_pos > min_height_pos){
            cout<<(max_height_pos-1)+(number_of_soliders - min_height_pos)-1;
        }   
        else{
            cout<<(max_height_pos-1)+(number_of_soliders - min_height_pos);
        }
    return 0;
}