/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    string s; cin >> s;
    int countX = 0, countT = 0, countD = 0;
    for(char c : s){
        if(c == 'X') ++countX;
        else if(c == 'T') ++countT;
        else ++countD;
    }
    int i = 0, ans = 0;
    while(i < countX){      
        if(s[i] == 'T'){
            for(int j = countX ; j < countT + countX; ++j){
                if(s[j] == 'X'){
                    ++ans;
                    swap(s[i], s[j]);
                    break;
                }
            }
        }
        else if(s[i] == 'D'){
            for(int j = countX + countT ; j < n ; ++j){
                if(s[j] == 'X'){
                    ++ans;
                    swap(s[i], s[j]);
                    break;
                }
            }
        }
        ++i;
    }
    for(int i = 0 ; i < countX ; ++i){
        if(s[i] != 'X'){
            ++ans;
        }
    }
    for(int i = countX ; i < countX + countT ; ++i){
        if(s[i] != 'T'){
            ++ans;
        }
    }
    cout << ans;

}
int main(){
    Faster();
        Process();
}
    