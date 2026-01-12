#include<iostream>
using namespace std;
int main()
{
    string name, department;
    int rollno;
    flout english, math, physics, total, percentage;
    cout <<"enter student name:";
    cin >>name;
    cout <<"enter rollno:";
    cin >>rollno;
    cout <<"enter department:";
    cin >>department;
    cout <<"enter marks in english:";
    cin >>english;
    cout <<"enter marks in math:";
    cin >>math;
    cout <<"enter marks in physics:";
    cin >>physics;
    total = english + math + physics;
    percentage = (total/300)*100;
    cout <<"================================================\n";
    cout <<"\tSTUDENT RESULT CARD\n";
    cout <<"================================================\n";
    cout <<"name:\t\t"<<name<<endl;
    cout <<"rollno:\t\t"<<rollno<<endl;
    cout <<"department:\t\t"<<department<<endl;
    cout <<"================================================\n";
    cout <<"congratulations " <<name<<"!\n";
    cout <<"================================================\n";
    return 0;
}
                                                               
