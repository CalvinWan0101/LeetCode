/*
9487-EX
1111-1
1111-2
1111-3
1111-4
1011-5
1011-6
1011-7
1010-8
1000-9
Ans=9
字串中最大的數字即是所求
*/

int minPartitions(char *n)
{
    int max = -1;
    for (int i = 0; i < strlen(n); i++)
        max = n[i] > max ? n[i] : max;
    return max - 48;
}
