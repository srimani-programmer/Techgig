#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    unsigned long int len = s.size();
    string result = "";
    unsigned int count = 0;

    for(int i=0;i<len;i++)
        if(s[i] == 'a')
            count++;

    for(int i=0;i<count;i++)
        result += 'a';

    for(int i=0;i<len;i++){
        if(s[i] == 'a')
            continue;
        else
            result += s[i];
    }

    cout<<result;

    return 0;

}