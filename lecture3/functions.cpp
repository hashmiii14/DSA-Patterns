#include<iostream>
using namespace std;
int hashmi (int n){
    int result = n*n;
    return result;
}
int main(){
    int n = 10; 
    int result = hashmi(n);
    cout<<result<<endl;

    return 0;
}