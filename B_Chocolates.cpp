// https://codeforces.com/problemset/problem/1139/B

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    long long count=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]<A[i+1])
        {
            count+=A[i];
        }
        else{

            if(A[i+1]-1<0)
            {
                break;
            }
            else{
                count+=A[i+1]-1;
                A[i]=A[i+1]-1;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}