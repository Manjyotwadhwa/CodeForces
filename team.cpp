#include<iostream>
using namespace std ;

int main(){
int n ;
 cin>>n ;
 int count1 =0;
 while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>=2){
      count1++;
    } 
}
  cout<<count1<<endl;

return 0;
}
