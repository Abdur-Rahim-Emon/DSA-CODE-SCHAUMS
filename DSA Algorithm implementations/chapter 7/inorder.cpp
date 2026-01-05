#include<bits/stdc++.h>
using namespace std;
 struct node{
    public:
        int val;
        node *left;
        node *right;
        node(int x){
        val=x;
        left=right=NULL;

        } 
    };
    void preorder(node * root){
        if(root==NULL)return;
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
  int main(){
   node *root=new node(44);
   root->left=new node(30);
   root->right=new node(50);
   root->left->left=new node(22);
   root->right->right=new node(60);
   root->right->right->left=new node (55);
   root->right->right->right=new node(77);
   root->right->right->left->right=new node(57);
   cout<<"preorder traversal ";
   preorder(root);
   cout<<endl;
   
  }
