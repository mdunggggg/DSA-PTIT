/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>v;
void Process(){
    int n;
    string s;
    stack<int> st;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "pop")
            st.pop();
        else if (s == "show")
        {
            if (st.size())
            {
                stack<int> q;
                while (st.size())
                {
                    q.push(st.top());
                    st.pop();
                }
                while (q.size())
                {
                    cout << q.top() << " ";
                    st.push(q.top());
                    q.pop();
                }
                cout << endl;
            }
            else
                cout << "empty" << endl;
        
        }
    }
}
int main(){
    Faster();
        Process();
}
    