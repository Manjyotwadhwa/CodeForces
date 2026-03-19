#include<iostream>
#include<vector>
using namespace std ;

int main(){
int n,h ;
 int count = 0;
cin>>n>>h;
vector<int>height(n);
for(int i = 0; i<n;i++){
cin>>height[i];

 if(height[i]<=h)count++;
 else count+=2;
}
cout<<count<<endl;
return 0 ;
}
 