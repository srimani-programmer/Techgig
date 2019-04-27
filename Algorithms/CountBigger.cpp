#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int num;
    cin>>num;
    int countBiggerValue = 0;

    for(int i=0;i<size;i++){
        if(arr[i] > num)
            countBiggerValue++;
    }

    cout<<countBiggerValue;

    return 0;
}