#include <bits/stdc++.h>
using namespace std;

int main(){

    string s,s2="";
    cin>>s;
    int n = s.length(),c=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c++;
        }
    }
    cout<<c*(c-1)/2<<endl;
}