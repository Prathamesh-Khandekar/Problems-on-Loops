#include<iostream>
using namespace std;
int main(){
   int n,sum=0,t1=0,t2=1;
   cout<<"Enter total terms to be printed: ";
   cin>>n;
   cout<<"Fibonacci series is: ";
   cout<<"0 1 ";
   for(int i=1; i<=n-2; i++){
       sum=t1+t2;
       cout<<sum<<" ";
       t1=t2;
       t2=sum;
   }
}
