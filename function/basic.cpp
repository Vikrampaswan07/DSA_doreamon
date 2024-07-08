#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i=1; i<=4; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<=5-i; j++){
            if(j==1 || j==5-i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
return 0;
}