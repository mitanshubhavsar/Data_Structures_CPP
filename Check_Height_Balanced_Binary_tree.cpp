#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight,rHeight) + 1;
}


bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <= 1){
        return true;
    }else{
        return false;
    }
}

bool isBalanced_Optimised(Node* root,int* height){     //More Optimised
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isBalanced_Optimised(root->left, &lh)==false){
        return false;
    }
    if(isBalanced_Optimised(root->right, &rh)==false){
        return false;
    }

    *height = max(lh,rh) + 1;
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    struct Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

    

    struct Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    int height = 0;

    if(isBalanced_Optimised(root2,&height)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not Balanced Tree"<<endl;
    }

    return 0;
}

/* 
       1
      /  \
     2    3
    / \   / \
   4   5 6   7
*/

/* 
           1
          /   
         2    
        /    //Not Balanced
       3   
     
*/


