#include <iostream>
#include <vector>

using namespace std;

// Constant for the size of the data vector
const int N = 40;

// Calculates the sum of elements in a vector and stores it in the provided pointer
void sum(int *p, int n, const vector<int> &data)
{
    // Initialize the sum to 0
    *p = 0;

    // Iterate through the vector and add each element to the sum
    for (int i = 0; i < n; ++i)
    {
        *p += data[i];
    }
}

int main()
{
    // Variable to store the calculated sum
    int accum = 0;

    // Create a vector of size N and initialize its elements with their indices
    vector<int> data(N);
    for (int i = 0; i < N; ++i)
    {
        data[i] = i;
    }

    // Calculate the sum of elements in the data vector and store it in accum
    sum(&accum, N, data);

    // Print the calculated sum
    cout << "sum is " << accum << endl;
    return 0;
}