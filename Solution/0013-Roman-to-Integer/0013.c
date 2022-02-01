int romanToInt(char *s)
{
    char rom[13][2] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int romnum[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // I開頭,包含 "I" "IV" "IX"
        if (s[i] == 'I')
        {
            // IV
            if (s[i + 1] == 'V')
            {
                sum += 4;
                i++;
            }
            // IX
            else if (s[i + 1] == 'X')
            {
                sum += 9;
                i++;
            }
            // I
            else
                sum += 1;
        }
        // X開頭,包含 "X" "XL" "XC"
        else if (s[i] == 'X')
        {
            // XL
            if (s[i + 1] == 'L')
            {
                sum += 40;
                i++;
            }
            // XC
            else if (s[i + 1] == 'C')
            {
                sum += 90;
                i++;
            }
            // X
            else
                sum += 10;
        }
        // C開頭,包含 "C" "CD" "CM"
        else if (s[i] == 'C')
        {
            // CD
            if (s[i + 1] == 'D')
            {
                sum += 400;
                i++;
            }
            // CM
            else if (s[i + 1] == 'M')
            {
                sum += 900;
                i++;
            }
            // C
            else
                sum += 100;
        }
        // 單獨V
        else if (s[i] == 'V')
            sum += 5;
        // 單獨L
        else if (s[i] == 'L')
            sum += 50;
        // 單獨D
        else if (s[i] == 'D')
            sum += 500;
        // 單獨M
        else if (s[i] == 'M')
            sum += 1000;
    }
    return sum;
}