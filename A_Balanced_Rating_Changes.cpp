// https://codeforces.com/problemset/problem/1237/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int flag=1;
   for(int i=0;i<n;i++)
   {
        int num;
        cin>>num;
        if(num%2==0)
        {
            cout<<num/2<<endl;
        }
        else{
            cout<<(num+flag)/2<<endl;
            flag*=-1;
        }

   }
   return 0;
}