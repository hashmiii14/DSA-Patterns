/*
Theory:
An array is a linear data structure that stores
multiple elements of the same data type in
contiguous memory locations.

Array indexing starts from 0.

Example:
int arr[5] = {10, 20, 30, 40, 50};

Basic C++ Code - Array Traversal
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}