#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,vector<int>>p;
    p.first=6;
    //p.second="abuyousuf";
    p.second={5,8,9};
    cout<<p.first;
    for(auto u:p.second)cout<<u<<endl;

//pair making:
pair<int,int>p1;
p1=make_pair(2,3);
//another way:
//p1={7,8};
cout<<p1.second;



    return 0;
}
