#include <iostream>
int binary_search(const int array[],int size, int x) {
    int middle = size/2;
    while (middle != 0){
        if (array[middle] == x){
            return middle;
        }
        if(array[middle] > x){
            middle = middle / 2;
        }
        if(array[middle] < x){
            middle = (middle + size)/2;
        }
    }
    return -1;
}
int main() {
    int size = 10;
    int *arr = new int[size] {1,2,3,5,7,9,25,32,654,432};
    std::cout << binary_search(arr,size,9);
    return 0;
}