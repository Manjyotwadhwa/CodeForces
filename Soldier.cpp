#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total = 0;
   int f =1 ;
    while(w--){
        total+=k*f;
        f++;
    }
  int borrow = total - n ;

      if(total<n){
        cout<<0<<endl;
      }else{
    cout<<borrow<<endl;
      }
    return 0 ;
}