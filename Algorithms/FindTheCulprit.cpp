#include<iostream>

using namespace std;

int main(){
    
    int s1,s2,num;
    int *arr1, *arr2;

    // Array1

    cin>>s1;
    arr1 = new int[s1];

    for(int i=0;i<s1;i++)
        cin>>arr1[i];

    // Array2

    cin>>s2;
    arr2 = new int[s2];

    for(int i=0;i<s2;i++)
        cin>>arr2[i];

    // Checking number
    cin>>num;

    int result = -1;

    for(int i=0;i<s1;i++)
        if(arr1[i] == num){
            result = 1;
            break;
        }
        
    
    for(int i=0;i<s2;i++)
        if(arr2[i] == num){
            result = 2;
            break;
        }

    cout<<result;
    
    return 0;

}