#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        
        unsigned long int number;
        unsigned int count = 0;
        cin>>number;

        while(true){
            
            if(number == 1)
                break;
            else{
                if(number % 2 == 0){
                    number = number / 2;
                    count = count + 1;
                }else if(number % 2 == 1){
                    number = number - 1;
                    count = count + 1;
                }
            }
        }


        cout<<count<<endl;
        
    }
    
    return 0;
}