#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}

int main(){
    int n , r ;
    cout<<"Enter n and r value :";
    cin>>n>>r;

    cout<<"Answer is "<<nCr(n,r)<<endl;


}
