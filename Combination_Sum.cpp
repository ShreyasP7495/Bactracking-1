//Time Complexity-O(n*(2^m))
//Space Complexity-O(n)
//Did the code Execute on Leetcode? Yes

class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>k={};
        int sum=0;
        combination(candidates,target,k,0,0);
        return result;
    }
    void combination(vector<int>& candidates,int target,vector<int>k,int index,int sum)
    {
       
        if(sum==target)
        {
            result.push_back(k);
            return;
            
        }
        if(sum>target)
        {
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            k.push_back(candidates[i]);
            combination(candidates,target,k,i,sum+candidates[i]);
            k.pop_back();
        }
    }
};
