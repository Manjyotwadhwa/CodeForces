#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
       int maxl = 1;
    int count = 1;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
 
    for(int i = 1 ;i<a.size();i++){
     if(a[i]>a[i-1]){
        count++;
     }
     else {
        count = 1 ;
     }
     maxl = max(maxl,count);
  
    }
       cout<<maxl<<endl;
    return 0;
}
