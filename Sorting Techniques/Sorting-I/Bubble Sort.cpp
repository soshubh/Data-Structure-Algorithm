#include <iostream>
using namespace std;
int bubble(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (a[j] > a[j + 1])
            {
                int p = a[j];
                a[j] = a[j + 1];
                a[j + 1] = p;
            }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubble(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
