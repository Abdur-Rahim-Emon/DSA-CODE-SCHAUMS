#include<bits/stdc++.h>
using namespace std;
struct  node
{
    int val;
    node *right;
    node *left;
    node(int x){
        val=x;
        left=right=NULL;
    }
};
void postOrder(node *root){
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

int main(){
    node * root=new node(44);
    root->left=new node(30);
    root->right=new node(50);
    root->left->left=new node(22);
    root->right->right=new node(60);
    root->right->right->left=new node(55);
        root->right->right->right=new node(77);
            root->right->right->left->right=new node(57);
               
    

  cout<<"postorder "<<endl;
  postOrder(root);
}