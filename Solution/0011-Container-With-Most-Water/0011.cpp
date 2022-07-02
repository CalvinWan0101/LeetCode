class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, high = 0, max = 0;
        while (left < right)
        {
            // get the smaller side 
            high = height[left] < height[right] ? height[left] : height[right];

            // get the area
            max = max > high * (right - left) ? max : high * (right - left);

            // move the pointer
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return max;
    }
};