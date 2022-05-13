#include<iostream>
using namespace std;
int main(){
  int n,num[10],i;
  cout<<"Enter the number: ";
  cin>>n;
    for(i=0; n>0; i++){
        num[i]=n%2;
        n=n/2;
    }   
    cout<<"Binary number: ";
    for(i=i-1; i>=0; i--){
      cout<<num[i];
    }
}
