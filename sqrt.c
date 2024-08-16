#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x)
{
    if (x <= 0) return 0;
	if (x == 1) return 1;

    long long i = 1;
    while (i * i <= x)
	{
		if (i > 46340)
			return 0;
        i++;
	}
    return i - 1;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int input = atoi(argv[1]);
        printf("sqrt(%d) = %d\n", input, mySqrt(input));
    }
    return 0;
}