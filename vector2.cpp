#include<bits/stdc++.h>
using namespace std;
int main()

{
      vector<int> v;
     v={34,67,23,1};

   //vector printing method 1:
   vector<int>:: iterator ptr;
   for(ptr=v.begin();ptr!=v.end();ptr++)
   {
       cout<<*ptr<<endl;
   }
   vector<int>vec;
   vec={23,78,34,67,8};
  /* for(int t:vec )
   {
       cout<<t<<" ";
   }*/

 for(auto t:vec )
   {
       cout<<t<<" ";
   }
   //auto is prefarable,because it auto detect the number type;

   //sort:
   cout<<endl;
   vector<int>v1;
   v1={3,8,4,1,6,8};
   sort(v1.begin(),v1.end());
   for(auto a:v1){
    cout<<a<<" ";
   }
   //if we want to sort 3 or 4 elements:

   cout<<endl;
   vector<int>v2;
   v2={3,8,4,1,6,8,5,3,9,1,4};
   sort(v2.begin()+3,v2.begin()+7);
   for(auto b:v2){
    cout<<b<<" ";
   }
   //partial sort;

   //descending order sort;

  cout<<endl;
   vector<int>v3;
   v3={3,8,4,1,6,8,5,3,9,1,4};
  // sort(v3.begin(),v3.end(),greater<int>());
    sort(v3.rbegin(),v3.rend());
   for(auto b:v3){
    cout<<b<<" ";
   }


    return 0;
}
