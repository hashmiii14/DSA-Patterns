#include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout<<"Enter Number = ";
    cin>>n;
    if(n==0){
        cout<<sum<<endl;
    }else{
        for(int i=1; i<=n; i++){
            sum = sum + i;
        }
        cout<<sum<<endl;
    }
    return 0;
}