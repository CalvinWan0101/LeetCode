class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // Start with "I", like "I" "IV" "IX"
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
            // Start with "x", like "X" "XL" "XC"
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
            // Start with "C", like "C" "CD" "CM"
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
            // V
            else if (s[i] == 'V')
                sum += 5;
            // L
            else if (s[i] == 'L')
                sum += 50;
            // D
            else if (s[i] == 'D')
                sum += 500;
            // M
            else if (s[i] == 'M')
                sum += 1000;
        }
        return sum;
    }
};