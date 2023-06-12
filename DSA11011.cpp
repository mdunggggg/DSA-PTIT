/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct node{
    int x;
    node *left, *right;
    node(int val){
        x = val;
        left = right = NULL;
    }
};
void make(node *root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void find(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->x == u){
        make(root, u, v, c);
    }
    else{
        find(root->left, u, v , c);
        find(root->right, u, v, c);
    }
}
bool check(node *root){
    if(root->left == NULL and root->right == NULL){
        return true;
    }
    else if(root->left != NULL and root->right != NULL){
        return check(root->left) and check(root->right);
    }
    else return false;
}
void Process(){
    int n ; cin >> n;
    node *root = NULL;
    for(int i = 0 ; i < n ; ++i){
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            make(root, u , v , c);
        }
        else{
            find(root, u, v, c);
        }
    }
    cout << check(root) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
