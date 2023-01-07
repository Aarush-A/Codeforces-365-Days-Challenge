#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char ch;
    char plus;
    plus='+';
    string str2;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            ch=str[i];
            str2.push_back(ch);
            str2.push_back(plus);
        }
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='2'){
            ch=str[i];
            str2.push_back(ch);
            str2.push_back(plus);
        }
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='3'){
            ch=str[i];
            str2.push_back(ch);
            str2.push_back(plus);
        }
    }
    int index=str.size();
    str2.erase(index,1);
    cout<<str2;
}