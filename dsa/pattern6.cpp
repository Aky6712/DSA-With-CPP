#include<iostream>
using namespace std;

int main(){
 int n ;
 cout<<"Enter ant value : ";
 cin>>n;
 int row = 1;

 while(row<=n){
    int col = 1;
    while(col<=n){
        char ch = 'A' + row +col - 2;;
        cout<<ch;
        col += 1;
    }
    cout<<endl;
    row += 1;

 }
}
