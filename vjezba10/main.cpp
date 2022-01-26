#include "Header.hpp"

int main()
{
    int arr[] = { 11, 9, 16, 19, 20, 1, 5 };
    char a[] = { 'F', 'a', 's', 'z', 'W', 'b', 'h', 'B', 'k'};
    sort_arr(arr, 7);
    sort_arr(a, 9);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 9; i++) {
        cout << a[i] << " ";
    }
}