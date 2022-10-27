#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int z=1;

  for (int i=1; i<=n; i++)
  {
    for (int j=n; j>=i; j--)
    {
      cout<<" ";
    }
    cout<<i; 

    if (i!=0)
    {
      for (int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      cout<<i;
      z+=2;
    }
    cout<<endl; 
  }

  for (int i=1; i<=z; i++)
  {
    cout<<i;
  }

return 0;
}