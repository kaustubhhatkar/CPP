// https://codeforces.com/problemset/problem/109/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    int flag=1;
    int count_7=0;
    while(n%4!=0)
    {
        n=n-7;
        count_7++;
        if(n==0)
        {
           break;
        }
        else if(n<4)
        {
            flag=0;
            break;
        }   
    }

    int no_of_fours=n/4;
    while(no_of_fours>=7)
    {
        count_7+=4;
        no_of_fours-=7;
    }

    if(flag)
    {
        for(int i=0;i<no_of_fours;i++)
        {
            cout<<4;
        }
        for(int i=0;i<count_7;i++)
        {
            cout<<7;
        }
    }
    else if(n==0)
    {
        cout<<count_7<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    

    return 0;
}