#include <iostream>
using namespace std;
int main(){
    int m,n,x,y,a,p;
    cin>>m>>n;
    if(m%2==0){
        x=m/2;
        p=x*n;
        cout<<p;
    }
    else if(m%2!=0){
        a=m%2;
        m=m-a;
        x=m/2;
        p=x*n;
        if(n%2==0){
            y=n/2;
            y+=p;
            cout<<y;
        }
        else if(n%2!=0){
            y=(n-1)/2;
            y+=p;
            cout<<y;
        }
    }
}
