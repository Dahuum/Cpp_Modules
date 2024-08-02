#include <iostream>
#include <string>

class Solution {
public:
    bool isValid(std::string s)
    {
        int round = 0; int square = 0; int curly = 0;

        for (char c : s) {
            if (c == '(') round++;
            else if (c == ')') round--;
            else if (c == '[') square++;
            else if (c == ']') square--;
            else if (c == '{') curly++;
            else if (c == '}') curly--;
        }
        return  round == 0 && square == 0 && curly == 0;
    }
};

int main( int ac, char *av[])
{
    (void)ac;
    std::string string = av[1];
    Solution s;
    if (s.isValid(string) == 1) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;
}