/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string s;
int n;
stack<int>st;
void Process(){
    cin >> s;
    if (s == "PUSH")
    {
        cin >> n;
        st.push(n);
    }
    else if (s == "POP")
    {
        if (st.size())
            st.pop();
    }
    else if (s == "PRINT")
    {
        if (st.size())
            cout << st.top() << endl;
        else
            cout << "NONE" << endl;
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    