#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<int>vec;
  cout<<"enter elements:"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
        int a;
  cin>>a;
    vec.push_back(a);
  }
   for(int i=0;i<vec.size();i++){
        cout<<"element"<<i<<":";
  cout<<vec[i];
  cout<<endl;
  }

  //vector elements clearance:
  vector<int>vec1;
  vec1={12,45,34,23};
  cout<<"after clearation:"<<endl;
  vec1.clear();
  cout<<vec1.size()<<endl;

  cout<<vec1.empty()<<endl;
  //if empty output:1,else output:0
  vec1={34,56};
  cout<<vec1.empty()<<endl;



  //jgugkggu:
  //vector size declaration:
  vector<int>vec2;
  vec2={34,78,9};
  vec2.resize(8);
  for(int i=0;i<vec2.size();i++){
    cout<<vec2[i]<<" ";
  }
  cout<<endl;
  //vect copy;
  vector<int>tmp;
  cout<<"copy vector"<<endl;
  tmp=vec2;
  for(int i=0;i<vec2.size();i++){
    cout<<tmp[i]<<" ";
  }



    return 0;
}
