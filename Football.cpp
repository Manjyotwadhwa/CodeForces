#include<iostream>
#include<string>
using namespace std ;

int main(){
    string s ;
    cin>>s;
    int count1 = 0;
    int count0 = 0;
    int maxcount1 = 0;
    int maxcount0 = 0;
    for(int i = 0 ;i<s.length();i++){
        if(s[i] == '1'){
        count1++;
        count0=0;
        }
        else {
            count1=0;
            count0++;
    }
    maxcount1 = max(maxcount1,count1);
    maxcount0 = max(maxcount0,count0);
}
    if(maxcount1 >=7 || maxcount0>=7  ||maxcount1 >=7 && maxcount0>=7){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
    

