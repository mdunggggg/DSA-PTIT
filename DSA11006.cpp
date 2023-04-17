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
void make(node *root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void find(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root -> val == u){
        make(root, u, v, c);
    }
    else{
        
        find(root->left, u, v, c);
        find(root->right, u, v, c);
    }
}
void spiralOder(node *root){
    stack<node*>st1, st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node* top = st1.top();
            st1.pop();
            cout << top->val << ' ';
            if(top->right != NULL) st2.push(top->right);
            if(top->left != NULL) st2.push(top->left);
        }
        while(!st2.empty()){
            node* top = st2.top();
            st2.pop();
            cout << top->val << ' ';
            if(top->left != NULL) st1.push(top->left);
            if(top->right != NULL) st1.push(top->right);
        }
    }
    cout << '\n';
}
void Process(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
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
   spiralOder(root);

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    