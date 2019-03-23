#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        int noOfMatches = 0;
        long int totalTeams;
        cin>>totalTeams;
        
        while(true){
            
            if(totalTeams == 1)
                break;
            else{
                noOfMatches += (totalTeams / 2);
                totalTeams = (totalTeams / 2) + (totalTeams % 2);
            }
        }

        cout<<noOfMatches<<endl;
        
    }

    return 0;
}