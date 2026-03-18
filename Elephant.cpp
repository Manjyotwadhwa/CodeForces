#include<iostream>
using namespace std;

int main(){
    int x ; 
    cin>>x;

    int count= 0;
    
    while(x>0){
        x-=5;
        count++;

    }
    cout<<count<<endl;
    return 0;
}