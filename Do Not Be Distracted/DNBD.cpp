#include <bits/stdc++.h>
using namespace std;
int n,p,r;
string x;
map<char,int> m;
int main(){
    cin>>n;
    
    for (int i = 0; i < n; i++){
        cin>>p>>x;
        for (int j = 0; j < p; j++){
            if(j==0){ ++m[x[j]]; }
            else if((m[x[j]]) && (x[j] != x[j-1])){ r++; }
            else{ ++m[x[j]]; }
        }
        if(r==0){ cout<<"YES"<<endl; }
        else{ cout<<"NO"<<endl; }
        r = 0;
        m.clear();
    }
}