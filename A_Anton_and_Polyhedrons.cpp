#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str=="Tetrahedron")
        {
            count+=4;
        }
        else if(str=="Cube")
        {
            count+=6;
        }
        else if(str=="Octahedron")
        {
            count+=8;
        }
        else if(str=="Dodecahedron")
        {
            count+=12;
        }
        else
        {
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}
