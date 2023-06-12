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
        val = x;
        left = right = NULL;
    }
};
node *build(node *root, int x){
    if(root == NULL) return new node(x);
    if(x < root->val){
        root->left = build(root->left, x);
    }
    else root->right = build(root->right, x);
    return root;
}
int calc(node *root){
    if(root == NULL) return 0;
    if(root->left == NULL and root->right == NULL){
        return 1;
    }
    return 1 + max(calc(root->left), calc(root->right));
}

void Process(){
    int n; cin >> n;
    node *root = NULL;
    for(int i = 0 ; i < n ; ++i){
        int x; cin >> x;
        root = build(root, x);
    }
    cout << calc(root) - 1 << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
