#include "leetcode.h"


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		unordered_map<int,int> map;
		for(size_t i = 0; i < nums.size();i++){
			if (map.find(target-nums[i])!=map.end()){
				result.push_back(map[target-nums[i]]);
				result.push_back(i);
				return result;
			}
			map[nums[i]]=i;
		}
		return result;
	}
};


int main(){



}
