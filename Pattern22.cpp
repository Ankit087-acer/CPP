#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=n;i>0;i--){
    for(int j=0;j<i;j++){
        cout<<(char)('A'+j)<<" ";
    }
    cout<<"\n";
   }
    return 0;
}