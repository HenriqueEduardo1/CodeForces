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

int n,x;

void troca(int a){
    if(a%2 == 0){
        for(int i = 1; i <= a; i+=2){
            cout<<i+1<<' '<<i<<' ';
        }cout<<endl;
    }else if(a==3){
        cout<<3<<' '<<1<<' '<<2<<endl;
    }else{
        int v[a+1];
        for(int i = 1; i <= a; i++){
            v[i] = i;
        }
        for(int i = 1; i < a-3; i+=2){
            cout<<v[i+1]<<' '<<v[i]<<' ';
        }
        cout<<v[a]<<' '<<v[a-2]<<' '<<v[a-1]<<endl;
    }
}
 
int main() {_
    cin>>n;

    while(n--){
        cin>>x;
        troca(x);
    }
    
}