#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n;

    int k ;
    cin>>k;
    int total = 240 - k;
    int count = 0;
    int i = 1;
    int times = 0;
    while(i<=n && total>=5*i){
     times++;
     total -= 5*i ;
      i++;
    }
    cout<<times<<endl;
    return 0;
}