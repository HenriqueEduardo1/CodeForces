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

vi p,t;
int m,n,e1,e2;
string o;

void init(int n) {
    p = vector<int>(n+1);
    t = vector<int>(n+1);
    for(int i = 0; i <= n; i++) {
        t[i] = 1;
        p[i] = i;
    }
}
int get(int a) {
    if(a != p[a]) {
        p[a] = get(p[a]);
    }
    return p[a];
}
void join(int a, int b) {
    a = get(a);
    b = get(b);

    if(t[a] > t[b]) {
        swap(a, b);
    }

    p[a] = b;
    t[b] += t[a];
}
 
int main() {_
    cin>>n>>m;

    init(n);

    while(m--){
        cin>>o>>e1>>e2;

        if(o == "get"){
            if(get(e1) == get(e2))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            join(e1,e2);

    }
}