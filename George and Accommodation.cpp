#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
   int count = 0;
    while(t--){
        int p;
        int q;
        cin>>p;
        cin>>q;
        if((q-p)>=2){
         count++;
        }
    }
    cout<<count<<endl;
}