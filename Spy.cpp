#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

int main(){ 
int t;
cin>>t;

while(t--){
int n;
cin>>n;

vector<int>spy(n);
unordered_map<int,int>freq;

for(int i = 0; i<n;i++){
    cin>>spy[i];
  freq[spy[i]]++;

}
for(int i = 0 ; i<n;i++){
    if(freq[spy[i]] == 1){
       cout<<i+1<<endl;
    }
}
}
return 0;
}