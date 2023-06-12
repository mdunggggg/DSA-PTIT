/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[MAX];
struct node{
    int val;
    node *left, *right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};

node *buildAVL(int l, int r){
    if(l > r) return NULL;
    int mid = (l + r) >> 1;
    node *root = new node(a[mid]);
    root->right = buildAVL(mid + 1, r);
    root->left = buildAVL(l, mid - 1);
    return root;
}
void disPlay(node *root){
    if(root == NULL) return ;
    cout << root->val << ' ';
    disPlay(root->left);
    disPlay(root->right);
}
void Process(){
    int n; cin >> n;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    sort(a , a + n);
    node *root = buildAVL(0, n - 1);
    disPlay(root);
    cout << '\n';


}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
