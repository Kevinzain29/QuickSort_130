

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

    while (i <= j) {
        //search for an element greater then pivot
        while ((arr[i] <= pivot) && (1 <= high)) {
            i++;
            cmp_count++;
        }
        //search for an element less than or equal to pivot 
        while ((arr[j] > pivot) && (j >= low)) {
            j--;
            cmp_count++;
        }
        cmp_count++;
        if (i < j) {                //if the greater element is on the left of the element
            swap(i, j);             //swap the element at index 1 with the at index
            mov_count++;
        }
    }

    if (low < j) {                  //j now containt the index of the last element in the sorted list
        swap(low, j);
        mov_count++;
    }
    quick_sort(low, j - i);

    //sort of the lost on the right of pivot using quick sort
    quick_sort(j + i, high);
}

void display() {
    cout << "\n===============================" << endl;
    cout << "Sorted Array" << endl;
    cout << "\n===============================" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nNumber of Comparassion : " << cmp_count << endl;
    cout << "Number of data movement : " << mov_count << endl;
}

int main()
{
    input();
}

