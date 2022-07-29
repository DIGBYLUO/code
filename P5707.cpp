#include<iostream>
using namespace std;
int s,v,t,h;

int main(){
    cin >> s>>v;
    if(s%v==0){
        t=s/v;
    }else{
        t=(int)s/v+1;
    }
    t+=10;
    while(t>=60){
        t-=60;
        h++;
    }
    if(h*60+t>=480){
        h-=8;
        h= 24 - h;
        if(t!=0){
            h--;
            t=60-t;
        }
        if(h<10){
            cout << '0'<<h;
        }else{
            cout <<h;
        }
        cout<<':';
        if(t<10){
            cout << '0'<<t;
        }else{
            cout <<t;
        } 
        return 0;
    }
    h=8-h;
    if(t!=0){
            h--;
            t=60-t;
        }
        if(h<10){
            cout << '0'<<h;
        }else{
            cout <<h;
        }
        cout<<':';
        if(t<10){
            cout << '0'<<t;
        }else{
            cout <<t;
        } 
    return 0;

}