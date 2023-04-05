/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string s;
int flag;
vector<int>f;
vector<string>res;
char num[10] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
char dau[4] = {'+' , '-' , '*' , '/'};
bool check(string t){
    int x = (t[0] - '0') * 10 + t[1] - '0';
    int y = (t[5] - '0') * 10 + t[6] - '0';
    int z = (t[10] - '0') * 10 + t[11] - '0';
    if(x < 10 || y < 10 || z < 10)
        return false;
    if(t[3] == '+'){
        if(x + y == z)
            return true;
    }
    else if (t[3] == '-'){
        if(x - y == z)
            return true;
    }
    else if (t[3] == '*'){
        if(x * y == z)
            return true;
    }
    else if (t[3] == '/'){
        if(y == 0) 
            return false;
        if(x % y != 0)
            return false;
        if(x / y == z)
            return true;
    }
    return false;
}
void Try(int i){
    if(i == f.size()){
       if(check(s)){
            res.push_back(s);
       }
        return;
    }
    if(f[i] == 3){
        for(int j = 0 ; j < 4 ; ++j){
            s[f[i]] = dau[j];
            Try(i + 1);
            s[f[i]] = '?';
        }
    }
    else{
        for(int j = 0 ; j < 10 ; ++j){
            s[f[i]] = num[j] + '0';
            Try(i + 1);
            s[f[i]] = '?';
        }
    }
   
}
void Process(){
    getline(cin >> ws, s);
    f.clear();
    flag = 0;
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '?')
            f.push_back(i);
    }
    Try(0);
    sort(res.begin(), res.end());
    if(res.size() == 0){
        cout << "WRONG PROBLEM!\n";
    }
    else    
        cout << res[0] << '\n';
    res.clear();
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    