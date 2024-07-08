#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words={"a","aba","ababa","aa"};
    int cnt=0;
    for(int i=0; i<words.size(); i++){
        for(int j=i+1; j<words.size(); j++){
            int x=0;
            int found = words[j].find(words[i]);
            if(found != string::npos && found==0){
                x++;
            }
            string arr=words[i];
            found = words[j].find(arr, found+1);
            if(found != string::npos && found ==words[j].size()-words[i].size()){
                x++;
            }
            if(x==2){
                cout<<"i"<<i<<"j"<<j<<endl;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}