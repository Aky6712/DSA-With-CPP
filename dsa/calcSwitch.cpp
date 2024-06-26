#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform : "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Adddition of "<<a<<" and " <<b<<" is : "<<(a+b)<<endl;
        break;

    case '-':
    cout<<"Subtration of "<<a<<" and " <<b<<" is : "<<(a-b)<<endl;
    break;

    case '*':
    cout<<"Multiplication of "<<a<<" and " <<b<<" is : "<<(a*b)<<endl;
    break;

    case '/':
    cout<<"Division of "<<a<<" and " <<b<<" is : "<<(a/b)<<endl;
    break;


    default:
    cout<<"Invalid operation";
        break;
    }
}
