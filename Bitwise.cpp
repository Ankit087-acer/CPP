#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"And: "<<(a&b)<<"\n";
    cout<<"Or: "<<(a|b)<<"\n";
    cout<<"Not: "<<(~a)<<"\n";
    cout<<"Right Shift: "<<(a >> b)<<"\n";
    cout<<"Left Shift: "<<(a << b)<<"\n";
    cout<<"Xor : "<<(a^b)<<"\n";
    return 0;
}