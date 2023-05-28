/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int ans = -1e9;
struct node{
    int val;
    node *left, *right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};
void make(node *root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void find(node *root, int u, int v, char c){
    if(root == NULL)
        return;
    if(root->val == u)
        make(root, u, v, c);
    else{
        find(root->left, u, v, c);
        find(root->right, u, v, c);
    }
}
int calc(node *root){
    if(root == NULL){
        return 0;
    }
    int left = calc(root->left);
    int right = calc(root->right);
    if(root -> left == NULL and root -> right == NULL){
        return root->val;
    }
    
    ans = max(ans, left + right + root->val);
    return max(left, right) + root->val;
}
void Process(){
    int n; cin >> n;
    node *root = NULL;
    for(int i = 0; i < n ; ++i){
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            make(root, u, v, c);
        }
        else{
            find(root, u, v, c);
        }
    }
    ans = -1e9;
    int k = calc(root);
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    