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
    string s;
    deque<int> dq;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (dq.size())
                cout << dq.front() << "\n";
            else
                cout << "NONE" << "\n";
        }
        else if (s == "POP")
        {
            if (dq.size())
                dq.pop_front();
        }
    }
}
int main(){
    Faster();
        Process();
}
    