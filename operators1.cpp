#include <iostream>
using namespace std;

int main()
{
    int num1=6;
    int num2=3;

    cout <<num1+num2<< endl; //9
    cout <<num1-num2<< endl; //3
    cout <<num1*num2<< endl;//18
    cout <<num1/num2<< endl;//2
    cout <<num1%num2<< endl;//0
    
    cout<<(num1==num2)<<endl; //false0
    cout<<(num1!=num2)<<endl; //true1
    cout<<(num1>=num2)<<endl; //true1
    
    cout<<(num1+=3)<<endl;//9
    cout<<(num2-=2)<<endl;//1
    cout<<(num1%=3)<<endl;//0
    return 0;
}