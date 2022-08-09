#include<bits/stdc++.h>
using namespace std;

string solve(vector<int> &keys, vector<bool> &doors,  int inhand , int cnt){
    if(keys[inhand]==0){
        if(cnt==2)
            return "YES";
        else 
            return "NO";
    }
    if(doors[inhand]==true)
        return "NO";
    
    doors[inhand] = true;
    inhand = keys[inhand]-1;
    cnt++;
    return solve(keys, doors, inhand, cnt);
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int key;
        cin>>key;
        vector<bool> doors(3, false);
        vector<int> keys(3);
        for(int i=0;i<3;i++){
            cin>>keys[i];  
        }
        cout<<solve(keys, doors, key-1, 0)<<endl;

    }
}