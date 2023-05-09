#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int selection(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_id = i;
        for (int j = i + 1; j < n; j++)
            if (a[min_id] > a[j])
                min_id = j;
        // swap(&a[min_id], &a[i]);
        int swap = a[min_id];
        a[min_id] = a[i];
        a[i] = swap;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selection(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
