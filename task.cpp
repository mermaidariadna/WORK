#include "task.hpp"

void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
}

void fillRandom(int* arr, int size, int min, int max){
        srand(time(nullptr));
        for(int i = 0; i < size; i++){ 
                arr[i] = rand() % (max - min + 1) + min;
        }
}

int showEl(const int* arr, int size, int N, int M){
        static int st = 0;
        static int ind = 0;
        if(st >= M){
                return 0;
        }
        for(int i = 0; i < M; i++){
                std::cout << arr[ind] << " ";
                ind++;
        }
        st++;
        std::cout << std::endl;
        showEl(arr, size, N, M);
        return 0;
}
int showEl2(const int* arr, int size, int N, int M){
        static int st = 0;
        static int ind = 0;
        if(st >= M){
                return 0;
        }
        for(int i = 0; i < M; i++){
                std::cout << arr[ind] << " ";
                ind++;
        }
        st++;
        std::cout << std::endl;
        showEl(arr, size, N, M);
        return 0;
}

void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}

int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}
int getMax(const int* arr, int size){
        int left = 0;
        int right = size - 1;
        if(right == left){
                std::cout << "max = " << arr[left] << std::endl;
                return 0;
        }
        if(arr[left] <= arr[right]){
                left++;
        }
        else if(arr[left] > arr[right]){
                right--;
        }
        getMax(arr, size);
        return 0;
}

int getMin(const int* arr, int size){
        int left = 0;
        int right = size - 1;
        if(right == left){
                std::cout << "min = " << arr[left] << std::endl;
                return 0;
        }
        if(arr[left] <= arr[right]){
                right--;
        }
        else if(arr[left] > arr[right]){
                left++;
        }
        getMax(arr, size);
        return 0;
}
void fillRandom100(int* arr, int size){
         srand(time(nullptr));
        for(int i = 0; i < size; i++){
                arr[i] = rand() % 100;
        }
}

void showArray(int* arr, int size){
        for(int i = 0; i < size; i++){
                std::cout << i << '\t' << arr[i] << std::endl;
        }
}
