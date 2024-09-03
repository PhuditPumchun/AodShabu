#ifndef ARRAYISI_HPP
#define ARRAYISI_HPP

#include <iostream>

using namespace std;

class ArrayISI{
    protected:
        static const int max_size = 50;
        int arri1[max_size];
        string arrs[max_size];
        int arri2[max_size];
        int size = 0;
    public:
        ArrayISI(){
            size = 0;
        }

        void insert(int value1, string  data, int value2){
            arri1[size] = value1;
            arrs[size] = data;
            arri2[size] = value2;
            size ++;
        }

        void display(){
            for (int i = 0; i < size; i++){
                cout << arri1[i] << " : " << arrs[i] << " : " << arri2[i];
            }
            cout << endl;
        }

};
#endif ARRAYISI_HPP