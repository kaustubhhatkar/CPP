//  https://codeforces.com/problemset/problem/1199/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n,start,end;
    cin>>n>>start>>end;
    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int res=0;
    int j=0;
    while(j<n)
    {
        int i=j-start;
        int k=j+1;
        int flag=1;
        while(i<j && i>=0)
        {
            if(A[i]<A[j])
            {
                flag=0;
                break;
            }
            i++;
        }   
        if(flag)
        {
            while(k<n && k<=j+end)
            {
                if(A[k]<A[j])
                {
                    flag=0;
                    break;
                }
                k++;
            }   
        }

        if(flag)
        {
            res=j+1;
            break;
        }
        else
        {
            j++;
        }
    }
    cout<<res<<endl;

    return 0;
}