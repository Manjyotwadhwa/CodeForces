#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n;

    int a,b,c;
      while(n--){
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b && a<c || a<b && a>c){
            cout<<a<<endl;
        }
        else if(b>a && b<c|| b<a && b>c){
            cout<<b<<endl;
        }
        else {
            cout<<c<<endl;
        }
    }
    return 0;
}