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

using namespace std;

int t,d,m,tt;
vi r;

int main() {_
    cin>>t>>d>>m;
    r = vi(m+1);
    r[0] = 0;

    for(int i = 1; i < m+1; i++){
        cin>>r[i];
    }

    r.eb(d);
    
    for(int i = 0; i < sz(r)-1; i++){
        tt = r[i]+t;
        if(tt <= r[i+1]){
            cout<<"Y"<<endl;
            return 0;
        }
    }
    cout<<"N"<<endl;
}