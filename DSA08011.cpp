    /*  Hoang Manh Dung - D21 ProPTIT  */
    #include<bits/stdc++.h>
    using namespace std;
    #define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    const double PI = 2 * acos(0);
    const int MOD = 1e9 + 7;
    const int MAX = 1e6 + 5;
    set<string>se;
    int n , sz;
    string s, t;
    int bfs(){
        queue<pair<string,int>>q;
        q.push({s, 1});
        se.insert(s);
        while(!q.empty()){
            string cur = q.front().first;
            int dis = q.front().second;
            q.pop();
            if(cur == t){
                return dis;
            }
            for(int i = 0 ; i < sz; ++i){
                for(char c = 'A' ; c <= 'Z'; ++c){
                    string tmp = cur;
                    tmp[i] = c;
                    if(se.find(tmp) != se.end()){
                        se.erase(tmp);
                        q.push({tmp, dis + 1});
                    }
                }
            }
        }
        return 0;
    }
    void Process(){
        cin >> n >> s >> t;
        sz = s.size();
        se.clear();
        for(int i = 0 ; i < n ; ++i){
            string cur; cin >> cur;
            se.insert(cur);
        }
        cout << bfs() << '\n';
    }
    int main(){
        Faster();
        int t; cin >> t;
        while(t--)
            Process();
    }
        