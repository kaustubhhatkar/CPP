#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int num;
    cin>>num;
    int maxi=0;
    int passengers=0;
    while(num--)
    {
        int a,b;
        cin>>a>>b;
        passengers=passengers-a+b;
        maxi=max(maxi,passengers);
    }
    cout<<maxi<<endl;
    return 0;
}