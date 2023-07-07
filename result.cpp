#include <iostream>
using namespace std;
int main() {
    int marks;
    cin>>marks;
    if (marks>=33) {
        if (marks>=90) {
            cout<<"Gracefully Pass";
        } else {
        cout<<"pass";
        }
    } else {
        cout<<"Fail";
    }
    return 0;
}
