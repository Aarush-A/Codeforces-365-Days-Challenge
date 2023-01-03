#include <iostream>
using namespace std;
int main(){
    int n,k,adv=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    x=arr[k-1];
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            if(arr[j]>=x){
                adv+=1;
            }
        
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    cout<<adv;
}