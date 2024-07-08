#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>grid={{7,6,3},{6,6,1}};
    int k=18;
    int cnt=0;
    int sum=0;
    for(int j=0; j<grid[0].size(); j++){
        sum=sum+grid[0][j];
        if(sum < k){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt;
}