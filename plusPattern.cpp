#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n-1; i++){
        for (int j=1; j<=n-1; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int j=1; j<=2*n-1; j++){
        cout<<"*";
    }
    cout<<endl;
    for (int i=n+1; i<=2*n-1; i++){
        for (int j=1; j<=n-1; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}
