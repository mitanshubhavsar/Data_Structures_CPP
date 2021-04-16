#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if(root1 == NULL || root2 == NULL){
        return false;
    }

    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left,root2->left);
        bool cond3 = isIdentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
        return true;
        }else{
            return false;
        }
    }

    
}

int main(){

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    if(isIdentical(root,root)){
        cout<<"BSTs are Identical"<<endl;
    }else{
        cout<<"BSTs are not Identical"<<endl;
    }

    Node* root1 = new Node(6);
    root1->left = new Node(3);
    root1->right = new Node(10);

    if(isIdentical(root,root1)){
        cout<<"BSTs are Identical"<<endl;
    }else{
        cout<<"BSTs are not Identical"<<endl;
    }
    return 0;
}

/*     Tree 1
         2
        / \
       1   3
*/

/*      Tree 2
           6
          / \ 
         3   10
*/