#include <iostream>
using namespace std;

int binarySearch(int array[] , int size , int target){
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int mid = (start + end ) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (target > array[mid]) {
            start = mid;
        } else {
            end = mid;
        }
    }

    int mid = (start+end) / 2;
    if (array[mid] == target) {
        return mid;
    } else {
        return -1;
    }
}

int main() {
    int n, arr[n];
    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int el;
    cout << "Enter element " << endl;
    cin >> el;

//    for (int i=0;i<n;i++){
//        cout << arr[i] << " ";
//    }

    cout << binarySearch(arr, n , el);

    return 0;
}
