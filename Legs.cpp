#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t ;

    while(t--){
        int n;
          int count = 0;
        cin>>n;
        while(n>0){
        if(n>0 && n>=4){
            count++;
          n-=4;
        }
     else if ( n>0 && n == 2){
        count++;
        n-=2;
     }
    }
     cout<<count<<endl;
}
    return 0;
}