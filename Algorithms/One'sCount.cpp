#include<iostream>

using namespace std;

int main(){
    int *arr;
    int size;
    cin>>size;
    arr = new int[size];

    for(int i=0;i<size;i++)
        cin>>arr[i];

    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 1)
            count++;
    }

    cout<<count;

    return 0;
}