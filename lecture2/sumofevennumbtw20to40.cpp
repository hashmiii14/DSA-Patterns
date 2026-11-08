#include<iostream>
using namespace std;
int main(){
    int n=40 , sum = 0;
    for(int i=20; i<=n; i++){
        if(i%2==0){
        sum = sum +i;
        }
    }
    cout<<"Sum = "<<sum;
    return 0;
}