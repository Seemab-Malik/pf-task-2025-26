#include<iostream>
using namespace std;
int main()
{

    double num1,num2;
    char op;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter second number:";
    cin>>num2;
    cout<<"enter operater (+,-,*,/):";
    cin>>op;
if(op=='+')
    cout<<"result:"<<num1+num2;
    else if(op=='-')
        cout<<"result:"<<num1-num2;
    else if (op =='*')     
        cout<<"result:" <<num1* num2;  
    else if (op =='/')
        cout<<"result:" <<num1/ num2;             
    else
        cout<<"Invalid operator .";
    
    return 0;
    
}
