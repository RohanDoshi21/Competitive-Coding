#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<vector>

using namespace std;

int main(){
        ofstream out_file {"../question_paper.txt" , std::ios::app};
        ifstream in_file_1 {"../file_1.txt"};
        ifstream in_file_2 {"../file_2.txt"};
        ifstream in_file_3 {"../file_3.txt"};
        ifstream in_file_4 {"../file_4.txt"};
        ifstream in_file_5 {"../file_5.txt"};
        ifstream in_file_6 {"../file_6.txt"};
        ifstream in_file_7 {"../file_7.txt"};
        ifstream in_file_8 {"../file_8.txt"};
        ifstream in_file_9 {"../file_9.txt"};
        ifstream in_file_10 {"../file_10.txt"};
   
   
    
    srand(time(0));
    
    
    string line_1;
    vector<string> lines_1;
    
    int total_lines_1=0;
    while(getline(in_file_1,line_1))
    {
       total_lines_1++; 
    lines_1.push_back(line_1);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_1;
    out_file<<lines_1[random_number]<<endl;
    }
    
        string line_2;
    vector<string> lines_2;
    
    int total_lines_2=0;
    while(getline(in_file_2,line_2))
    {
       total_lines_2++; 
    lines_2.push_back(line_2);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_2;
    out_file<<lines_2[random_number]<<endl;
    }
    
        string line_3;
    vector<string> lines_3;
    
    int total_lines_3=0;
    while(getline(in_file_3,line_3))
    {
       total_lines_3++; 
    lines_3.push_back(line_3);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_3;
    out_file<<lines_3[random_number]<<endl;
    }
    
    string line_4;
    vector<string> lines_4;
    
    int total_lines_4=0;
    while(getline(in_file_4,line_4))
    {
       total_lines_4++; 
    lines_4.push_back(line_4);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_4;
    out_file<<lines_4[random_number]<<endl;
    }
    
    string line_5;
    vector<string> lines_5;
    
    int total_lines_5=0;
    while(getline(in_file_5,line_5))
    {
       total_lines_1++; 
    lines_1.push_back(line_5);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_5;
    out_file<<lines_5[random_number]<<endl;
    }
    
    string line_6;
    vector<string> lines_6;
    
    int total_lines_6=0;
    while(getline(in_file_5,line_6))
    {
       total_lines_6++; 
    lines_5.push_back(line_6);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_6;
    out_file<<lines_6[random_number]<<endl;
    }
    
    string line_7;
    vector<string> lines_7;
    
    int total_lines_7=0;
    while(getline(in_file_7,line_7))
    {
       total_lines_7++; 
    lines_7.push_back(line_7);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_7;
    out_file<<lines_7[random_number]<<endl;
    }

   string line_8;
    vector<string> lines_8;
    
    int total_lines_8=0;
    while(getline(in_file_8,line_8))
    {
       total_lines_8++; 
    lines_8.push_back(line_8);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_8;
    out_file<<lines_8[random_number]<<endl;
    }
    
     string line_9;
    vector<string> lines_9;
    
    int total_lines_9=0;
    while(getline(in_file_9,line_9))
    {
       total_lines_8++; 
    lines_8.push_back(line_8);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_9;
    out_file<<lines_9[random_number]<<endl;
    }
    
     string line_10;
    vector<string> lines_10;
    
    int total_lines_10=0;
    while(getline(in_file_10,line_10))
    {
       total_lines_10++; 
    lines_10.push_back(line_10);  
  }
   
    for(int i = 0 ; i <= 1; i++){
        int random_number=rand()%total_lines_10;
    out_file<<lines_10[random_number]<<endl;
    }
    
            
            in_file_1.close();
            in_file_2.close();
            in_file_4.close();
            in_file_5.close();
            in_file_5.close();
            in_file_6.close();
            in_file_7.close();
            in_file_8.close();
            in_file_9.close();
            in_file_10.close();
            out_file.close();
        
            
           
    return 0;
}