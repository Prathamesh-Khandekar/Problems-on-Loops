#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number: ";
   cin>>n;

   if(n==2 || n==3){
       cout<<"Prime\n";
       return 0;
   }
   else{
       for(int i=2; i<=n/2; i++){
       if(n%i==0){
           cout<<"Not prime\n";
           return 0;
       }
   }
   }
   cout<<"Prime number\n";
}
