#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 