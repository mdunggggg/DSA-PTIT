/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>v;
struct node{
    int val;
    node *left, *right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};
void build(node *root, int u, int v, char c){
    if(c == 'L'){
        root -> left = new node(v);
    }
    else root -> right = new node(v);
}
void find(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root -> val == u){
        build(root, u, v, c);
    }
    else{
        find(root -> left , u , v , c);
        find(root -> right , u , v, c);
    }
}
void calc(node *root){
    if(root == NULL) return;
    v.push_back(root -> val);
    calc(root -> left);
    calc(root->right);
}
void Process(){
    node *root = NULL;
    int n; cin >> n;
    v.clear();
    while(n--){
        int u, v;
        char c; cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            build(root, u, v, c);
        }
        else find(root , u, v, c);
    }
    calc(root);
    sort(v.begin(), v.end());
   
    for(int i : v){
        cout << i << ' ';
    }
    cout << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    