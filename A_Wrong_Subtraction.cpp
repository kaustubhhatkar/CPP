#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int num,n;
    cin>>num>>n;
    while(n--)
    {
        int temp=num%10;
        if(temp==0)
        {
            num=num/10;
        }
        else
        {
            num=num-1;
        }
    }
    cout<<num<<endl;
    return 0;
}