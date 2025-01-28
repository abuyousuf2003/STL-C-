
#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int > s={1,1,1,3,4,4,4,2,3,2,2};
  cout<<s.size();
for(auto u:s)cout<<u<<endl;
set<int>::iterator it;
for(it=s.begin();it != s.end();it ++)cout<<*it;
s.clear();
//cout<<s.empty();
s.insert(7);
s.insert(4);
s.insert(1);
s.insert(7);
s.insert(79);
for(auto u:s)cout<<u<<endl;
cout<<"after"<<endl;
cout<<*s.begin()<<endl;
cout<<*s.end()<<endl;
cout<<*s.rbegin();



    return 0;
}
