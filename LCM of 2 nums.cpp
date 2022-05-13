#include<iostream>
using namespace std;
int main(){
   int n1,n2,LCM,max;
   cout<<"Enter two numbers: ";
   cin>>n1>>n2;
   if(n1>n2){
       max=n1;
   }
   else{
       max=n2;
   }
   for(int i=max; i>=max; i++){
       if(i%n1==0 && i%n2==0){
           cout<<"LCM: "<<i<<endl;
           break;
       }
   }
}
