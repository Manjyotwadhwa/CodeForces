#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin>>t;
while(t--){
    int n ;
    cin>>n ;
    int k ;
    cin>>k;
    vector<int>cost(n);
 bool found = false;
    for(int i = 0; i<n;i++){
       cin>>cost[i];
      if(cost[i] == k){
           found = true;
      }
    }
  
     if(found) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  return 0 ;
}
