#include <iostream>
using namespace std;

void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    //code
    int cases; // total test cases
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        // gather parameters
        int n, d;
        cin >> n >> d;

        // gather array
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // array of first d elements
        int swapper[d];
        for (int i = 0; i < d && i < n; i++)
        {
            swapper[i] = arr[i];
        }

        // swap first elements of array with elements d onwards.
        for (int i = d; i < n; i++)
        {
            arr[i - d] = arr[i];
        }

        // swap last elements with swappers elements
        for (int i = n - d; i < n; i++)
        {
            arr[i] = swapper[i - (n - d)];
        }

        // put output
        show(arr, n);
    }
    return 0;
}