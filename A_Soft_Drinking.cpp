#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<(min((l*k)/nl,min(p/np,c*d)))/n;
    return 0;
}