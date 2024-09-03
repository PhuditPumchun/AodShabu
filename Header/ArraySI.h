#ifndef ARRAYSI_HPP
#define ARRAYSI_HPP

#include <iostream>

using namespace std;

class ArraySI{
    protected:
        static const int max_size = 30;
        string arrs[max_size];
        int arri[max_size];
        int size = 0;
    public:
        ArraySI(){
            size = 0;
        }

        int getValue(string data){
            return arri[search(data)];
        }

        void setValue(string data,int value){
            arri[search(data)] = value;
        }

        void insert(string text, int value){
            arrs[size] = text;
            arri[size] = value;
            size++;
        }

        void display(){
            for (int i = 0; i < size; i++){
                cout << arrs[i] << " : " << arri[i] << endl;
            }
        }

        int search(string data){
            for(int i = 0; i < size; i++){
                if (arrs[i] == data){
                    return i;
                }
            }
            return -1;
        }

        void del(string data){
            int index = search(data);
            if (index != -1) {
                for (int i = index; i < size - 1; i++){
                    arrs[i] = arrs[i + 1];
                    arri[i] = arri[i + 1];
                }
                size--;
            }
            display();
        }

        void bubblesort(){
            bool isswap;
            for (int i = 0; i < size; i++){
                isswap = false;
                for (int j = 0; j < size - i - 1; j++){
                    if (arri[j + 1] < arri[j]){
                        swap(arrs[j], arrs[j + 1]);
                        swap(arri[j], arri[j + 1]);
                        isswap = true;
                    }
                }
                if (!isswap){
                    break;
                }
            }
        }

        void quicksort(int left, int right){
            if (left < right) {
                int pivotIndex = partition(left, right);
                quicksort(left, pivotIndex - 1);
                quicksort(pivotIndex + 1, right);
            }
        }
        int partition(int left, int right){
            int pivot = arri[right];
            int i = left - 1;
            for (int j = left; j < right; j++){
                if (arri[j] <= pivot){
                    i++;
                    swap(arrs[i], arrs[j]);
                    swap(arri[i], arri[j]);
                }
            }
                swap(arrs[i + 1], arrs[right]);
                swap(arri[i + 1], arri[right]);
                return i + 1;
            }
};
#endif ARRAYSI_HPP

