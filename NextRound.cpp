#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
   int count = 0;
    int k ;
    cin>>k;
    vector<int>score(n);
   for(int i = 0; i<n;i++){
     cin>>score[i];
   }
   int cutoff = score[k-1];

   for(int i = 0 ;i<n ;i++){
    if(score[i]>=cutoff && score[i]>0){
        count++;
    }  
}
cout<< count<< endl;
return 0 ;
}