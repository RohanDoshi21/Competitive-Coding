#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in_file {"../answer_sheet.txt"};
        try {
            if(!in_file.is_open()){
                throw "File error";
            }
            
            double average_score{0};
            int count;
            string Name; 
            char answered[5];
            char correct_answer[5];
            in_file >> correct_answer;
            cout<<endl;
            cout << "Name\t \tPoints"<<endl;
            cout << "-----------------------------\n";
            while(in_file >> Name >> answered ){
                int points {0};
                for(int i = 0 ; i<5 ; i++)
                {   
                    if(answered[i]==correct_answer[i]){
                        points++;
                    }
                    count = i;
                    
                }
                    average_score += points;
                cout << Name << "\t \t" << points << endl;
            }
            
            
            average_score = average_score/count;
            cout << "-----------------------------\n";
            cout << "Average Score \t" << average_score <<endl <<endl;
            
            
            in_file.close();
        }
        catch(string &ex){
            cerr << ex << endl;
        }
    return 0;
}