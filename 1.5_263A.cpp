#include <iostream>
using namespace std;
int main(){
    int n;
    int posa=0,posb=0,posc=0,posd=0,pose=0;
    int arra[5],arrb[5],arrc[5],arrd[5],arre[5];
    for(int i=0;i<5;i++){
        cin>>n;
        arra[i]=n;
    }
    for(int i=0;i<5;i++){
        cin>>n;
        arrb[i]=n;
    }
    for(int i=0;i<5;i++){
        cin>>n;
        arrc[i]=n;
    }
    for(int i=0;i<5;i++){
        cin>>n;
        arrd[i]=n;
    }
    for(int i=0;i<5;i++){
        cin>>n;
        arre[i]=n;
    }
    for(int i=0;i<5;i++){
        if(arra[i]==1){
            posa+=(10+i);
        }
        else if(arrb[i]==1){
            posb+=(10+i);
        }
        else if(arrc[i]==1){
            posc+=(10+i);
        }
        else if(arrd[i]==1){
            posd+=(10+i);
        }
        else if(arre[i]==1){
            pose+=(10+i);
        }
    }
    int mov=0;
    if(posa!=0 or pose!=0){
        mov+=2;
    }
    else if(posb!=0 or posd!=0){
        mov+=1;
    }
    else if(posc!=0){
        mov+=0;
    }
    if(posa==10 or posb==10 or posc==10 or posd==10 or pose==10){
        mov+=2;
    }
    else if(posa==14 or posb==14 or posc==14 or posd==14 or pose==14){
        mov+=2;
    }
    else if(posa==11 or posb==11 or posc==11 or posd==11 or pose==11){
        mov+=1;
    }
    else if(posa==13 or posb==13 or posc==13 or posd==13 or pose==13){
        mov+=1;
    }
    cout<<mov;   
}
