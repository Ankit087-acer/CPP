#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<(char)('A'+i)<<" ";
    }
    cout<<"\n";
   }
    return 0;
}