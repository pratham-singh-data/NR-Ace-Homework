#include <iostream>
#include <cstring>
#define NUMS 1000000
using namespace std;

int main()
{
    int *prime = new int[NUMS];
    memset(prime, -1, sizeof(int) * NUMS);

    prime[0] = prime[1] = 0;

    for (int i = 2; i < NUMS; i++)
    {
        if (prime[i] == -1)
        {
            for (int j = 2 * i; j < NUMS; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    // prime first 100 primes
    for (int i = 0, j = 0; j < 100 && i < NUMS; i++)
    {
        if (prime[i] == -1)
        {
            cout << i << ' ';
            j++;
        }
    }
    return 0;
}

// in 10000 numbers there is only one prime hence the density of prime numbers is quite less in any given range so the complexity of the above comes to be O(n log(log(n)))