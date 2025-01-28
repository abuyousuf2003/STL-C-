#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>st;
   for(int i=0;i<5;i++)
   {
       int x;
       cin>>x;
       st.push(x);
   }

 while( !st.empty())
 {
     cout<<st.top()<<endl;
     st.pop();
 }


    return 0;
}
