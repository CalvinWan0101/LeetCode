int lengthOfLastWord(char *s)
{
    int end, start, i;
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            end = i;
            break;
        }
    }
    for (; i >= 0; i--)
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            start = i;
            break;
        }
        else if (i == 0 && s[i] != ' ')
        {
            start = i - 1;
            break;
        }
    return end - start;
}