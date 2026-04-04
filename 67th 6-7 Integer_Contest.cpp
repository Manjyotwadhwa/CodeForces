#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin>>t;
 while(t--){
    long long sum = 0;
 
    vector<int>a(7);
    for(int i = 0; i<7;i++){
    cin>>a[i];
}
  sort(a.begin(),a.end());
  for(int i = 0; i<6;i++){
    sum+= a[i] ;
  }
  sum = sum*-1;
  sum+=a[a.size()-1];
  cout<<sum<<endl;
 }
 return 0;
}