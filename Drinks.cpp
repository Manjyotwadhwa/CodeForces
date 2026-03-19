#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n;
    double x;
   double sum = 0;
    for(int i = 0; i<n;i++){
    cin>>x;
    sum+=x;
    }
   double divide = sum/n;
    cout<<divide<<endl;

 return 0;
}