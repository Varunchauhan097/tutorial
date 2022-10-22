#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    if (num>=90) {
        cout<<"A";
    }
    else if (num>=80) {
        cout<<"B";
    }
    else if (num>=70) {
        cout<<"C";
    }
    else {
        cout<<"F";
    }
    return 0;
}
        
        