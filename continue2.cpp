#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}