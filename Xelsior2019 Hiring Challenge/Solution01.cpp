#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        unsigned long int num;
        cin>>num;
        unsigned int count = 0;
        while(num != 1){
            if(num%2 == 0){
                num = num/2;
                count++;
            }else{
                num = num - 1;
                count++;
            }
        }

        cout<<count<<endl;
    }
    
    return 0;
}