#include <iostream>
using namespace std;


int main(){
 int n ;
 cout<<"Enter ant value : ";
 cin>>n;
 int row = 0;
while(row<=n){
        int col = n - row; // Loop control variable for columns
        while (col > 0) {
             cout << "*";
            col--;
        }
        cout<<endl;
        row++;
    }

    return 0;
}
