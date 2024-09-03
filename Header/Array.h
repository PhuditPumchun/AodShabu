#ifndef  ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

using namespace std;

class Array{
    protected:
        static const int max_size = 50;
        int arr[max_size];
        int size = 0;
    public:
        Array(){
            size = 0;
        }

        int getSize(){
            return size;
        }

        int getValue(int index){
            return arr[index];
        }

        void setValue(int index,int value){
            arr[index] = value;
        }

        void insert(int value){
            arr[size] = value;
            size ++;
        }

        void display(){
            for (int i = 0; i < size; i++){
                cout << arr[i] << "  ";
            }
            cout << endl;
        }

        int search(int value){
            bool isfound = false;
            for (int i = 0; i < size; i++){
                if (value == arr[i]){
                    return i;
                    isfound = true;
                    break;
                }
            }
            if (!isfound){
                return -1;
            }
        }

        void del(int value){
            int index = search(value);
            for (int i = index; i < size-1; i++){
                arr[i] = arr[i+1];
            }
            size--;
            display();
        }

        void selectionsort() {
            int min, tempindex;
            for (int i = 0; i < size - 1; i++) {
                cout << "I = " << i << endl;
                min = arr[i];
                tempindex = i;

                for (int j = i + 1; j < size; j++) {
                    if (arr[j] < min) {
                        min = arr[j];
                        tempindex = j;
                    }
                }

                if (tempindex != i) {
                    arr[tempindex] = arr[i];
                    arr[i] = min;
                }

                display();
            }
        }

        void insertionsort() {
            int tempdata;
            for (int i = 1; i < size; i++) {
                cout << "I = " << i << endl;
                for (int j = i; j > 0; j--) {
                    if (arr[j] < arr[j - 1]) {
                        tempdata = arr[j];
                        arr[j] = arr[j - 1];
                        arr[j - 1] = tempdata;
                    }
                }
                display();
            }
        }

        void bubblesort(){
            bool isswap;
            for (int i = 0; i < size; i++){
                cout << "I = " << i << endl;
                isswap = false;
                for (int j = 0; j < size-i-1; j++){
                    if (arr[j+1] < arr[j]){
                        int tmp;
                        tmp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = tmp;
                        isswap = true;
                    }
                }

                display();
                if(!isswap){
                    break;
                }
            }
        }

        void quicksort(int left, int right) {
            if (left < right) {
                int pivotIndex = partition(left, right);
                quicksort(left, pivotIndex - 1);
                quicksort(pivotIndex + 1, right);
            }
        }

        int partition(int left, int right) {
            int pivot = arr[right];
            int i = left - 1;
            for (int j = left; j < right; j++) {
                if (arr[j] < pivot) {
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[i + 1], arr[right]);
            return i + 1;
        }

        void swap(int& a, int& b) {
            int temp = a;
            a = b;
            b = temp;
        }
};

#endif ARRAY_HPP