#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>vec;
   //unique number;
   vec={2,4,5,1,7,7,9,7};
   sort(vec.begin(),vec.end());
 int s=  unique(vec.begin(),vec.end()) - vec.begin();
   for(int i=0;i<s;i++){
    cout<<vec[i]<<endl;
   }

   //2d vector:
   vector< vector<int>  >v;
   vector<int>a={1,8,5};
      vector<int>b={7,9,1};
      for(auto x:v){
        for(auto y:x){
            cout<<y;
        }

      }






    return 0;
}
