#include <iostream>
using namespace std;

int main() {
    int  arr = {1, 2, 3, 4, 5}; // Declare and initialize arr
    int end = arr.size() - 1;
    int first = -1;
    int last = -1;
    int mid, target = 3; // Example target

    // Implement binary search to find first and last occurrence of target
    int start = 0;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            if (first == -1) {
                first = mid;
            }
            last = mid;
            end = mid - 1; // Adjust end to find first occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    end = arr.size() - 1;
    start = first != -1 ? first : 0;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1; // Adjust start to find last occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    std::cout << "First occurrence of " << target << " is at index " << first << std::endl;
    std::cout << "Last occurrence of " << target << " is at index " << last << std::endl;

    return 0;
}