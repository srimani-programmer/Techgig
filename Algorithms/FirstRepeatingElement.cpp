#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];

    for(int i=0;i<size;i++)
        cin>>arr[i];

    int count = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i];
                count++;
                break;
            }else{
                continue;
            }
        }

        if(count == 1)
            break;
    }

    return 0;
}