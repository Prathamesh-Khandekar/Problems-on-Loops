#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){          //Direct formula to calculate sum is: (n*(n+1))/2
        sum=sum+i;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
