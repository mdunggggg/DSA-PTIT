/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
     int n, x;
    cin >> n;
    deque<int> st;
    while (n--)
    {
        cin >> x;
        if (x == 1)
            cout << st.size() << endl;
        else if (x == 2)
        {
            if (st.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (x == 3)
        {
            cin >> x;
            st.push_back(x);
        }
        else if (x == 4)
        {
            if (st.size())
                st.pop_front();
        }
        else if (x == 5)
        {
            if (st.size())
                cout << st.front() << endl;
            else
                cout << -1 << endl;
        }
        else if (x == 6)
        {
            if (st.size())
                cout << st.back() << endl;
            else
                cout << -1 << endl;
        }
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    