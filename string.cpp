
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{

optimize();

//string a="abu yousuf",b=" Md jumman ";
//char c='$';
//cout<<a+c+b<<endl;
//a.clear();
//a=b;
//cout<<a;//abu youssuf remove
//if(a==b)cout<<1<<endl;
//reverse(a.begin(),a.end());
//cout<<a<<endl;

//string sp;
//getline(cin,sp);
//cout<<sp;
string abu="cvgfdAAAMvv";
sort(abu.begin(),abu.end());
int sz=unique(abu.begin(),abu.end())-abu.begin();
for(int i=0;i<sz-1;i++){
    cout<<abu[i]<<endl;

}
string x="metropolitan university";





    return 0;
}
