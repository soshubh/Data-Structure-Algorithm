#include <iostream>
#include <vector>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i <= high - 1)
            i++;
        while (a[i] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}
void quick_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(a, low, high);
        quick_sort(a, low, pIndex - 1);
        quick_sort(a, pIndex + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quick_sort(a, 0, n - 1);
    cout << "This is quick sort :\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
