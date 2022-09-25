class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>target_int;

        unordered_map<int,int> mymap;

        for(int i=0;i<nums.size();i++)
            {
                int second_int= target-nums[i];
                if(mymap.find(target-nums[i])){

                    target_int.push_back([target-num[i]]) ;
                    target_int.push_back(i);
                    return target_int;
                    break;
                }

                else{

                    mymap[num[i]]=i;
                }
            }
    }
};
