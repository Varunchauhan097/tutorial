#include <iostream>
using namespace std;
int main(){
    int n, lastDigit, power=1, ans=0;
    cin>>n;
    while (n>0) {
        lastDigit=n%10;
        ans+=lastDigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}
