#include <iostream>
using namespace std;
int main()
{

    int arr[] = { 1, 3, 5, 7, 9 };
    // int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 
    // int k = 4; 
    k = k % n;
    int i, j;

    for (i = n - k, j = n - 1; i < j; i++, j--)
     {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0, j = n - k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}