// https://codeforces.com/problemset/problem/1133/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int h1,h2,m1,m2;
    char chr;
    cin>>h1>>chr>>m1;
    cin>>h2>>chr>>m2;

    int t1=h1*60+m1;
    int t2=h2*60+m2;

    int result=(t1+t2)/2;

    

    if(result/60<10)
    {
        cout<<"0"<<result/60;
    }
    else
    {
        cout<<result/60;
    }

    if(result%60<10)
    {
        cout<<chr<<"0"<<result%60<<endl;
    }
    else{
        cout<<chr<<result%60<<endl;
    }
    return 0;
}