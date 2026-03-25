#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
     
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);
        for(int i = 0; i<n ;i++){
            cin>>a[i];
        }
     sort(a.begin(),a.end());
     if(a.size() == 1){
        cout<<"YES"<<endl;
       continue;
     }
      bool possible = true;
        for(int i = 0; i<a.size()-1;i++){
            if(abs(a[i]-a[i+1])>1){
            possible = false;
              cout<<"NO"<<endl;
              break;
            }
        }
         if(possible){
            cout<<"YES"<<endl;
         }  
    }
    return 0;
}