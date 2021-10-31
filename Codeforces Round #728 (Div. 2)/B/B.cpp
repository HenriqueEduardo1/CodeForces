#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
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
 
i64 a,n,x;
 
int main() {_
    cin>>a;
 
    while(a--){
        cin>>n;
 
        i64 v[n+1],ans=0;
        for(int i = 1; i <= n; i++){
            cin>>v[i];
        }
        for(int i = 1; i <= n; i++){
            x = v[i];
            while((x-i) <= n){
                if(((x-i) > i) && (v[i]*v[x-i] == i+(x-i))){
                    ans++;
                }
                x += v[i];
            }
        }
        cout<<ans<<endl;
    }
}