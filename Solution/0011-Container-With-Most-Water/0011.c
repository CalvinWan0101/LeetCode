int maxArea(int *height, int heightSize)
{
    int left = 0, right = heightSize - 1, high = 0, max = 0;
    while (left < right)
    {
        high = height[left] < height[right] ? height[left] : height[right];
        max = max > high * (right - left) ? max : high * (right - left);
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return max;
}