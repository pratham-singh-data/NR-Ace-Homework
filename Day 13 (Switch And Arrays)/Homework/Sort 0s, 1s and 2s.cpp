void solution(int arr[], int n){
    int zeros = 0, ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        if (arr[i] == 1)
        {
            ones++;
        }
        if (arr[i] == 2)
        {
            twos++;
        }
    }

    for (int i = 0; i < zeros; i++)
    {
        arr[i] = 0;
    }

    ones += zeros;
    for (int i = zeros; i < ones; i++)
    {
        arr[i] = 1;
    }

    twos += ones;
    for (int i = ones; i < twos; i++)
    {
        arr[i] = 2;
    }
}