#include <bits/stdc++.h>
using namespace std;
long long n,x,r,c;
string s;
map<long long,long long> m;
int main(){
    cin>>n;
    
    for (int i = 0; i < n; i++){
        cin>>x;
        if(m[x]){
            cout<<m[x]<<endl;
        }else{
            for (int i = 1; i <= x; i++){
                if(m[i]){
                    r += m[i];
                }else{
                    s = to_string(i);
                    c = 0;
                    for (int j = 0; j < s.size(); j++){
                        if(j == 0){
                            c++;
                        }else if(s[j] == s[j-1]){
                            c++;
                        }
                    }
                    if(c == s.size()){
                        r++;
                        m[i]=1;
                    }
                }
            }
            if(m[x] == 0){
                m[x] = r;
            }
            cout<<r<<endl;
            r = 0;
        }
    }    
}