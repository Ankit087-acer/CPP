#include <iostream>
#include <climits>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
    return 0;
}