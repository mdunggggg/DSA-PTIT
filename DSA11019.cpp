/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct node{
    int val;
    node *left, *right;
    node(int x){
        left = right = NULL;
        val = x;
    }
};
node *insert(node *root, int x){
    if(root == NULL){
        return new node(x);
    }
    if(x < root->val){
        root->left = insert(root->left, x);
    }
    else{
        root->right = insert(root->right, x);
    }
    return root;
}
void disPlay(node *root){
    if(root == NULL) return;
    disPlay(root->left);
    disPlay(root->right);
    cout << root->val << ' ';

}
void Process(){
    int n ; cin >> n;
    node* root = NULL;
    for(int i = 0; i < n ; ++i){
        int x; cin >> x;
        root = insert(root, x);
    }
    disPlay(root);
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
