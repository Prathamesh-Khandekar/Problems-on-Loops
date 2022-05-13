#include<iostream>
using namespace std;
int main(){
   int n1,n2,HCF,flag=0;
   cout<<"Enter two numbers: ";
   cin>>n1>>n2;
       for(int i=2; i<=n1 && i<=n2; i++){
           if(n1%i==0 && n2%i==0){
               HCF=i;
               cout<<"HCF: "<<HCF<<endl;
               flag=1;
               break;
           }
       }
       if(flag!=1){
           HCF=1;
           cout<<"HCF: 1"<<endl;
       }
}
