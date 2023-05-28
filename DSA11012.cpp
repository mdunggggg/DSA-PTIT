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
    
    if(c == 'L'){
        root->left = new node(v);
    }
    if(c == 'R'){
        root->right = new node(v);
    }   
}
void find(node *root, int u, int v, char c){
    if(root == NULL){
        return;
    }
    if(root->val == u){
        make(root, u, v, c);
    }
    else{
        find(root->left, u, v, c);
        find(root->right, u , v, c);
    }
}
bool compare(node *root_x, node *root_y){
    if(root_x == NULL and root_y == NULL) 
        return true;
    if((root_x == NULL and root_y != NULL) or (root_x != NULL and root_y == NULL))
        return false;
    if(root_x->val != root_y->val){
        return false;
    }
    return compare(root_x->right, root_y->right) and compare(root_x->left, root_y->left); 
}
void Process(){
    int n; cin >> n;
    node *root_x = NULL;
    for(int i = 0; i < n ; ++i){
        int u, v; char c;
        cin >> u >> v >> c;
        if(root_x == NULL){
            root_x = new node(u);
            make(root_x, u, v, c);
        }
        else{
            find(root_x, u, v, c);
        }
    }
    node *root_y = NULL;
    cin >> n;
    for(int i = 0; i < n ; ++i){
        int u, v; char c;
        cin >> u >> v >> c;
        if(root_y == NULL){
            root_y = new node(u);
            make(root_y, u, v, c);
        }
        else{
            find(root_y, u, v, c);
        }
    }
    cout << compare(root_x, root_y) << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    