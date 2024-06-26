#include<iostream>
using namespace std;

int setBitA(int a){
    int count = 0;

    while(a!=0)
    {
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}

int setBitB(int b){
    int count = 0;
    while(b!=0)
    {
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}

int main(){
    int a , b;
    cin >> a >> b;
        int Abit = setBitA(a);
        int Bbit = setBitB(b);

        cout<<"Set bits of A ="<<Abit<<endl;
        cout<<"Set bits of B ="<<Bbit<<endl;

        int answer = Abit + Bbit;
        cout<<"Total set bit of A and B are ="<<answer<<endl;
        return 0;

        }
