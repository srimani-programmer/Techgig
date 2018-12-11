#include <iostream>
#include<vector>

using namespace std;
int main()
{
	long int maxjump,downheight;
	int n;
	
	vector<int>v;
	
	cin>>maxjump>>downheight;
	cin>>n;
	for(int i=0;i<n;i++){
	    int val;
	    cin>>val;
	    v.push_back(val);
	}

    unsigned int count =0;

    for(int i=0;i<n;i++){
        int jump=0;
        while(1){
            jump = jump + maxjump;

            if(jump >= v[i]){
                count++;
                break;
            }else{
                count++;
                jump = jump - downheight;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
