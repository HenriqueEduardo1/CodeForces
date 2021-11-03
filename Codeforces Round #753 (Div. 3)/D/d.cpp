#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define i64 long long
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define eb emplace_back
#define UNVISITED 0
#define VISITED 1
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vl vector<i64> 
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<i64,i64>
#define vpii vector<pii>
#define vpll vector<pll>
#define sti stack<int>
#define stii stack<pii>
#define mii map<int,int>
#define mll map<i64,i64>
#define min_heap priority_queue<int,vi, greater<int>>
#define max_heap priority_queue<int>

using namespace std;

int main() {_
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vi v(n);
        char c;
        bool dah = true;
        min_heap r,b;

        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        for(int i = 0; i < n; i++){
            cin>>c;
            if(c == 'R')
                r.push(v[i]);
            else
                b.push(v[i]);
        }
        
        for(int i = 1; i <= n; i++){
            if(!b.empty() && b.top() >= i){
                b.pop();
                continue;
            }
            if(!r.empty() && r.top() <= i){
                r.pop();
                continue;
            }
            dah = false;
        }
        cout<<(dah ? "YES" : "NO")<<endl;
    }
    
}