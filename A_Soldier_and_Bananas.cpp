#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int amount=0;
    for(int i=1;i<=w;i++)
    {
        amount+=i*k;
    }

    if(amount>n)
    {
        cout<<amount-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
    return 0;
}