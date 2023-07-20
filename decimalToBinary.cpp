#include <iostream>
using namespace std;
int main(){
    int n, lastDigit, power=1, ans=0;
    cin>>n;
    while (n>0) {
        lastDigit=n%2;
        ans+=lastDigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans;
    return 0;
}
