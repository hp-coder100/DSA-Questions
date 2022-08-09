#include<iostream>
#include<string>
using namespace std;
bool isPalindrom(string str){
    int i=0,j= str.size()-1;
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(isPalindrom(str)){
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}