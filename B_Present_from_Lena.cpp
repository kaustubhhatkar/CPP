// https://codeforces.com/problemset/problem/118/B

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    char space=' ';

    //Start Part
    for(int i=0;i<n;i++)
    {  
        for(int k=0;k<2*(n-i)-1;k++)
        {
            cout<<space;
        }

        for(int j=0;j<=i;j++)
        {   
            cout<<" "<<j;
        }
        for(int j=i-1;j>=0;j--)
        { 
            cout<<" "<<j;
        }
        cout<<endl;
    }

    //Middle Part
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(int i=n-1;i>0;i--)
    {
        cout<<i<<" ";
    }
    cout<<"0"<<endl;


    //  last Part
    for(int i=n-1;i>=0;i--)
    {
        for(int k=0;k<2*(n-i)-1;k++)
        {
            cout<<space;
        }
        for(int j=0;j<=i;j++)
        {   
            cout<<" "<<j;
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}