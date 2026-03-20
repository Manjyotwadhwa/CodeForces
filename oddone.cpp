#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int a,b,c;

    while(n--){
      cin>>a;
      cin>>b;
      cin>>c;
      if(a == b){
        cout<<c<<endl;
 
      }
      else if(b==c){
        cout<<a<<endl;

      }
      else if(a==c){
        cout<<b<<endl;
      
      }
 
    }
  return 0;
}