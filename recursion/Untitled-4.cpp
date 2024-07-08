#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="RLRRLLRLRL";
    int cnt=0;
        int r,l=0;
        for(int i=0; i<s.length(); i++){
            cout<<s[i]<<" ";
            if(s[i]=='R')   r++;
            else if(s[i]=='L')   l++;
            if(r==l){
                cnt++;
                r=0;
                l=0;
            }
        }
    cout<<cnt<<endl;
    return 1;
}