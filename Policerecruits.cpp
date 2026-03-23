#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int n ;
    cin>>n;
  int untreated = 0;
  int officers = 0;
    while(n--){
        int x ; 
        cin>>x;
   if(x> 0){
    officers+=x;

   }
   else {
    if(officers>0){
        officers--;
    }
    else {
        untreated++;
    }
 
}
   }
    
    cout<<untreated<<endl;
    return 0;
}