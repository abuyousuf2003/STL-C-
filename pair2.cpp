#include<bits/stdc++.h>
using namespace std;
int main()
{
   pair<int,int>p1,p2;
   p1={8,9};
   p2={3,1};
   if(p1>p2)cout<<"yes";
   //first value check
   //if vaues are same then check next one
   pair<int , int>p=min(p1,p2);


   //vector sort using pair:
   vector<pair<int,string>>v;
   v.push_back({5,"k"});
     v.push_back({8,"j"});
       v.push_back({2,"q"});
         v.push_back({90,"w"});
           v.push_back({3,"e"});
             v.push_back({98,"r"});
               v.push_back({5,"k"});
                v.push_back({5,"k"});
               sort(v.begin(),v.end());

               //for uniqueness:
               int sz=unique(v.begin(),v.end()) - v.begin();


for(auto u:v)cout<<u.first<<endl<<u.second;
    return 0;
}
