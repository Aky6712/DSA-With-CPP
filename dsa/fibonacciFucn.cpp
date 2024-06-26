#include<iostream>
using namespace std;

int fibo(int n){

    int a = 0;
    int b = 1;
    int i = 3;
   int c;
    while (i<=n){
      c = a +b;
        a = b;
        b = c;
        i ++;

    }

    return c;
}

int main(){
int n;
cout<<"Enter n for Fibonacci series : ";
cin>>n;

int ans = fibo(n);

cout << "Nth Fibonacci no is : "<<ans<<endl;
}
