bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    long long int after = 0, before = x;

    while (x)
    {
        after = after * 10 + x % 10;
        x /= 10;
    }

    return after == before;
}