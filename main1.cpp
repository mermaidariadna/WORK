#include <iostream>
#include "task.hpp"

void task0(){
        int arr0[10];
        fillRandom(arr0, 10, 0, 200);
        showArray(arr0, 10);

}
void task1(){
        int arr1[100];
        fillRandom(arr1, 100, 100, 150);
        showEl(arr1, 100, 10, 10);
        std::cout << std::endl;
        selectionSort(arr1, 100);
        showEl2(arr1, 100, 10, 10);
        std::cout << std::endl;
}
void task2(){
        int arr2[10];
        fillRandom100(arr2, 10);
        getMax(arr2, 10);
        getMin(arr2, 10);
}

int main(){
        std::cout << "task0" << std::endl;
        task0();
        std::cout <<"task1" << std::endl;
        task1();
        std::cout << "task2" << std::endl;
        task2();
        return 0;
}
