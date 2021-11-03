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
#define int long long

using namespace std;

int t, x, n;

int32_t main() {_
    cin>>t;

    while(t--){
        cin>>x>>n;

        if(n % 4 == 0){
            cout<<x<<endl;
        }else if(n % 4 == 1){
            cout<<(x%2==0 ? x-n : x+n)<<endl;
        }else if(n % 4 == 2){
            cout<<(x%2==0 ? x+1 : x-1)<<endl;
        }else{
            cout<<(x%2==0 ? x+n+1 : x-n-1)<<endl;
        }

    }
}