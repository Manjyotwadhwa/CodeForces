#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
while(t--){
     int maxf = 0;
    int n ;
    cin>>n;
    vector<int>a(n);
    unordered_map<int,int>freq;
    for(int i = 0; i<n;i++){
      cin>>a[i];
    }
  for(int x : a){
    freq[x]++;
  }

  for(auto &it : freq){
    maxf = max(maxf,it.second);
  }
  int dist = freq.size();
  int ans = max(min(maxf -1,dist),min(maxf,dist - 1));
  cout<<ans<<endl;
 
}
return 0;
}