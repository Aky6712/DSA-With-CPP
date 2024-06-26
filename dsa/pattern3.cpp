#include<iostream>
using namespace std;

int main(){
    int row = 1;


    int n;
    cout<<"Enter a number : ";
    cin>>n;

    while(row<=n){
        int col = 1;
         //int value = row ;
        while(col<=row){
            cout<<col + row - 1;
            //value = value +1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
