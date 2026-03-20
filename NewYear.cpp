#include<iostream>
using namespace std ;

int main(){
    int a , b ,c;
     cin>>a>>b>>c;
    
     int diff = 0;

     if(b>a && b<c ||b<a && b>c ){
        diff= abs(b-a) + abs(b-c);
     }
     else if (a>b && a<c ||a<b && a>c){
         diff= abs(a-b) + abs(a-c);
     }
     else {
        diff= abs(b-c) + abs(a-c);
     }
     cout<<diff<<endl;
     return 0;
}