#include<iostream>
#include <string>
#include <vector>
using namespace std;
string treeTostr(Treenode * root){
  if(root==NULL){
    return ""
  }
  string result = to_string(root->val);
  string left =  treeTostr(root->left);
  string right = treeTostr(root->right);
   if(root->right==NULL)return result + "("+left+")";
  if(root->left==NULL)return result + "()"+ "(" + right + ")";

  return result+ "(" + left + ")" + "(" + right + ")";
}
