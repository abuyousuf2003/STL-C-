#include<bits/stdc++.h>
using namespace std;
int i;
bool cmp(pair<int,int>x,pair<int,int>y)
{
 if(x.first>y.first)return 1;
 else if( x.first == y.first ) return x.second<y.second;
 return 0;
}
int main()
{
    int n;
    cin>>n;
   vector<pair<int,int>>vec;
   for(i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;
       vec.push_back({x,y});
   }
   sort(vec.begin(),vec.end(),cmp);

for(auto u:vec)cout<<u.first<<" "<<u.second<<endl;

    return 0;
}
