// https://practice.geeksforgeeks.org/problems/binary-search-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-search-trees

class Solution
{
public:
    bool isBSTTraversal(vector<int> &nums)
    {
        for (int i = 0; i <= nums.size() - 2; i++)
            if (nums[i] >= nums[i + 1])
                return false;
        return true;
    }
};
