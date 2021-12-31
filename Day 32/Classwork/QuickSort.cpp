#include<bits/stdc++.h>
using namespace std;

template<class T>
void swap(T& a, T& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

template <class T>
void display(vector<T>& inp){
    for (int i = 0; i < inp.size(); i++){
        cout << inp[i] << ' ';
    }
    cout << '\n';
}

template<class T>
int partition(vector<T>& inp, int start, int end){
    int pivot = start;
    int low = start, high = end;

    while(low < high){
        while(low < end && inp[low] <= inp[pivot]){
            low++;
        }

        // low has now stopped
        while(high > start && inp[high] > inp[pivot]){
            high--;
        }
        // high has now stopped

        if(low < high){
            // high is in front of low
            T temp = inp[low];
            inp[low] = inp[high];
            inp[high] = temp;
        }
    }

    T temp = inp[pivot];
    inp[pivot] = inp[high];
    inp[high] = temp;
    return high; // pivot is shifted to high
}

template<class T>
void quickSort(vector<T>& inp, int low, int high){
    if(high <= low) return; // one or zero element, already sorted; trivial case

    int pivot = partition(inp, low, high);
    quickSort(inp, low, pivot - 1);
    quickSort(inp, pivot + 1, high);
}

int main(){
    vector<int> inp;
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cout << "Enter the element at index " << i << ": ";
        cin >> temp;
        inp.push_back(temp);
    }

    cout << "\nPre Processed:\n";
    display(inp);

    quickSort(inp, 0, n - 1);

    cout << "\nPost Processed:\n";
    display(inp);
    return 0;
}