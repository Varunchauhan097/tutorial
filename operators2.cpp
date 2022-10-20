#include<iostream>
using namespace std;

int main(){
    bool exp1=true;
    bool exp2=false;
    
    cout<<(exp1&&exp2)<<endl; //false0
    cout<<(exp1||exp2)<<endl; //true1
    cout<<(!exp1)<<endl; //false0
    return 0;
}