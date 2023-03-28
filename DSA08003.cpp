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
        if (s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (dq.size())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (dq.size())
                dq.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTBACK")
        {
            if (dq.size())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPBACK")
        {
            if (dq.size())
                dq.pop_back();
        }
    }
}
int main(){
    Faster();
        Process();
}
    