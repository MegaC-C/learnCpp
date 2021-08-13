#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;




int main() {

	int max=0;
	vector<int> nums;
	cin >> max;
	for(int i=2; i<=max;++i) nums.push_back(i);
	
	//for(int i=0; i<nums.size();++i) cout << nums[i]<<endl;
	
	for (int a=0; a<nums.size()-1; ++a){
		
		for (int i=1;i<nums.size();++i){
			if((i+a)<nums.size() && nums[a+i]%nums[a]==0){
				nums.erase(nums.begin()+(i+a));
				--i;
			}
		}
		
		
	}

		for(int j=0; j<nums.size();++j) cout << nums[j]<<endl;

}



