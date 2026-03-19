#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   int m ;
    for(int i = 0; i<n;i++){
        cin>>m;
       if(m==1){
        cout<<"HARD"<<endl;
        return 0;
       }  
     }
     cout<<"EASY"<<endl;
     return 0;
    }

