#include<bits/stdc++.h>
using namespace std;
struct tree{
int data;
struct tree* left;
struct tree* right;

};
struct tree* createNode(int data)
{
 struct tree* node_x;
 node_x-> data=data;
 node_x->left=NULL;
 node_x->right=NULL;
};
void preOrder(struct tree* root)
{
     if(root !=NULL){
    cout<<root->data<<" ";
    preOrder( root->left);
    preOrder( root->right);
    }
}
int main()
{
    struct tree* ara1[100];
    int ara[100];
    for(int i=0;i<5;i++)
    {
     cin>>ara[i] ;
   ara1[i] = createNode(ara[i]);
    }
     for(int i=0;i<5;i++)
    {
    ara1[i]->left= ara1[i+1];
    if(i==5)
    {
        ara1[i]->right=NULL;
        break;
    }
    ara1[i]->right= ara1[i+2];
    }
    preOrder(ara1[0]);
}
