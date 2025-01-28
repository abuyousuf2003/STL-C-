#include<bits/stdc++.h>
using namespace std;
int ara[123];
int main()
{
int t;
cin>>t;
while(t--)
{
   int n,k;
   cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    vector<pair<int,int>>v;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;i++)
        {
         if(i != j && ara[i]-ara[j]==k)
         {

           v.push_back({ara[i],ara[j]})  ;
         }
        }
    }
    int sz=unique(v.begin(),v.end())-v.begin();
    cout<<sz;

}
    return 0;
}

