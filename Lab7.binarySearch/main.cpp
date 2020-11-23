//
//  main.cpp
//  Lab7
//
//  Created by Jarren Jose on 11/11/20.
//

#include <iostream>

//Recursive Binary Search
int binarySearch(int arr[], int first, int last, int target) {

    if (last >= first) {
        int mid = first + (last - first) / 2;
        
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            return binarySearch(arr, first, mid - 1, target);
  
        return binarySearch(arr, mid + 1, last, target);
    }
    
    return -1;
}

//Insertion Sort for Binary Search
void insertionSort(int arr[], int length) {
    
    int initial, location, temp;
    
    for (initial = 1;  initial < length; initial++) {
        
        if (arr[initial] < arr[initial - 1]) {
        temp = arr[initial];
        location = initial;
            
        do {
            arr[location] = arr[location - 1];
            location--;
        } while (location > 0 && arr[location - 1] > temp);
            
        arr[location] = temp;
            
        }
    }
}


int main(int argc, const char * argv[]) {
    
    int studentID[7] = {0, 4, 7, 1, 6, 3, 8};
    std::cout << "Student ID: \n";
    for (int j = 0; j < 7; j++) {
        std::cout << studentID[j] << " ";
    }
    std::cout << "\n\n";
    
    insertionSort(studentID, 7);
    std::cout << "Sorted using insertion sort: \n";
    for (int i = 0; i < 7; i++) {
        std::cout << studentID[i] << " ";
    }
    std::cout << "\n\n";
    
    
    int target = 6;
    int a = binarySearch(studentID, 0, 7 - 1, target);
    std::cout << "Binary Search: \nLocation of " << target << " : " << a << "\n\n";
    
    return 0;
}

