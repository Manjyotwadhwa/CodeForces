#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    cin>>s;

    for(int i = 0; i<s.size();i++){
        int d = s[i] - '0';

        if(i == 0 && d == 9) continue;

        if(d>=5){
            d=9-d;
        }
     s[i] = d + '0';
    }
    cout<<s<<endl;
    return 0;
}