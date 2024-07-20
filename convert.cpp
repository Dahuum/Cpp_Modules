#include <iostream>
const int N = 40;
template <class T>

inline void sum(T& p, int n, T d[])
{
    int i;
    p = 0;

    for (i = 0; i < n; ++i)
        p += d[i];
}

int main()
{
    int i;
    int accum = 0;
    int data[N];

    for (i = 0; i < N; ++i)
        data[i] = i;

    sum(accum, N, data);
    std::cout << "sum is " << accum << std::endl;
    return 0; 
}