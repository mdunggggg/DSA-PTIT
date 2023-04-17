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
map<int, node*>mp;
void make(int u, int v, char c){
    if(c == 'L') {
        mp[u] -> left = new node(v);
        mp[v] = mp[u] -> left;
    }
    else{
        mp[u] -> right = new node(v);
        mp[v] = mp[u] -> right;
    }
}

bool isLeaf(node *root){
    return root -> left == NULL and root -> right == NULL;
} 
int calc(node *root){
    int sum = 0;
    if(root == NULL)
        return sum;
    if(root -> right != NULL && isLeaf(root -> right)){
        sum += root -> right -> val;
    }
    if(root -> right != NULL && !isLeaf(root -> right)){
        sum += calc(root -> right);
    }
    if(root -> left != NULL && !isLeaf(root -> left)){
        sum += calc(root -> left);
    }
    return sum;
   
}
void Process(){
    int n ; cin >> n;
    node *root = NULL;
    mp.clear();
    while(n--){
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            mp[u] = root;
            make(u, v, c);
           
        }  
        else{
            make(u , v, c);
        }
    }
    cout << calc(root) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    