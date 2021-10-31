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

int n,x,y,x2,y2,x3,y3,res;

int main(){_
    cin>>n;
    
    while(n--){
        cin>>x>>y>>x2>>y2>>x3>>y3;
        
        if((x!=x2) && (y!=y2)){
            res = abs(x-x2) + abs(y-y2);
        }else if(x==x2 && (y3!=x && y3!=x2)){
            res = y+y2;
        }else if(x==x2 && x3==y3 && y3==x2){
            res = abs(y-y2);
        }else if(x==x2 && (x3==x || x3==x2)){
            res = abs(y-y2);
        }else if(y==y2 && (x3!=y && x3!=y2)){
            res = x+x2;
        }else if(y==y2 && y3==x3 && x3==y2){
            res = abs(x-x2);
        }else if(y==y2 && (y3==y || y3==y2)){
            res = abs(x-x2);
        }
        
        cout<<res<<endl;
    }
}