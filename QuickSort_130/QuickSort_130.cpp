

#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_count = 0; //number of comparisson
int mov_count = 0;
int n;

void input() {
    while (true) {
        cout << "masukkan panjang element array : ";
        cin >> n;

        if (n <= 20)
            break;
        else cout << "\nmaksimum panjang array adalah 20 element" << endl;
    }

    cout << "\n----------------------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n----------------------------------" << endl;

    for (int i = 0; 1 < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[1];
    }
}

//swap the element to indeks x with the element at indeks y
void swap(int x, int y) {
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void quick_sort(int low, int high) {
    int pivot, i, j;
    if (low > high)
        return;

    pivot = arr[low];

    i = low + 1;
    j = high;
}

int main()
{
    cout << endl;
}

