/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int n = s.size();
    stack<int>num;
    stack<string>str;
    for(int i = 0 ; i < n ; ++i){
        if(isdigit(s[i])){
            string cur = "";
            while(isdigit(s[i])){
                cur += s[i];
                ++i;
            }
            --i;
            num.push(stoi(cur));
        }
        else if(s[i] == ']'){
            string cur = "";
            while(str.top() != "["){
                cur = str.top() + cur;
                str.pop();
            }
            str.pop();

            string res = "";
            int count = num.top();
            num.pop();
            while(count--){
                res += cur;
            }
            str.push(res);
        }
        else{
            str.push(string(1, s[i]));
            if(s[i] == '[' and (i == 0 or !isdigit(s[i - 1]))){
                num.push(1);
            }
        }
        
    }

    string ans = "";
    while(!str.empty()){
        ans = str.top() + ans;
        str.pop();
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    