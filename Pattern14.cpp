#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==3||j==3){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";
        }
    }
    cout<<"\n";
   }
    return 0;
}