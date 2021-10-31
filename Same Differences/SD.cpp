#include <bits/stdc++.h>
using namespace std;
long long n,a,b,v,r;
map<long long,long long> m;
int main(){
    cin>>n;
    
    for (int i = 0; i < n; i++){
        cin>>a;
        r = 0;
        for (int j = 0; j < a; j++){
            cin>>b;
            v = b - j;
            r += m[v];
            m[v]++;
        }
        cout<<r<<endl;
        m.clear();
    }
}