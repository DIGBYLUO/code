#include <iostream>
using namespace std;

int main(){
    int n,sum=0,t=0;
    cin >> n;
    int a[n];
    for(int i =0 ;i < n;i++){
        cin >> a[i];
        sum +=a[i];
    }
    sum /= n;
    for(int i =0 ;i < n;i++){
        if(a[i]!=sum){
            a[i+1]-=sum-a[i];
            t++;
        }
    }
    cout << t<<endl;
}