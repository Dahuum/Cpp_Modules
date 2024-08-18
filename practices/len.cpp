#include <iostream>
#include <string>


class Solution {
public:
    int lengthOfLastWord( std::string s ) {
        int len = 0;
        int i = s.length() - 1;
        while (s[i] == ' ' || s[i] == '\t')
            i--;
        while (i != 0 && (s[i] > 32 && s[i] < 127))
            i--;
        if (s[i] <= 32 || s[i] >= 127)
            i++;
        while (s[i] > 32 && s[i] < 127)
        {
            i++;
            len++;
        }
        return len;
    }
};

int main ( int ac, char **av )
{
    (void)ac;
    Solution s;
    std::string string = av[1];
    std::cout << s.lengthOfLastWord(string) << std::endl;
}