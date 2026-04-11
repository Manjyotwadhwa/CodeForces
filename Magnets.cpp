#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int count = 1;
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i =0 ; i<n;i++){
          cin>>a[i];
    }
       for(int i = 0; i<a.size()-1;i++){
        if(a[i]!=a[i+1]){
            count++;
        }
       }
       cout<<count<<endl;

}