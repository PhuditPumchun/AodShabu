#include <iostream>
#include "Header/ArrayISI.h"

using namespace std;

class foodQueue: public ArrayISI{
    public:
        void enqueue(int value1, string data, int value2){
            insert(value1,data,value2);
        }

        int dequeue(){
            int front = arri1[0];
            for (int i = 0; i < size; i++){
                arri1[i] = arri1[i+1];
                arrs[i] = arrs[i+1];
                arri2[i] = arri2[i+1];
            }
            if(size == 0){
                cout << "NO QUEUE" << endl;
            }
            cout << "Queue for Table : " << front << " is derivered." << endl;
            size--;
            return front;
        }

        void display(){
            for(int i = 0; i < size; i++){
                cout << "Table " << arri1[i] << " : " << arrs[i] << " X" << arri2[i] << endl;
            }
            if(size == 0){
                cout << "NO QUEUE" << endl;
            }
        }

        void checkQueue(int x){
            for(int i = 0; i < size; i++){
                if (arri1[i] == x){
                     cout << "Table " << arri1[i] << " : " << arrs[i] << " X" << arri2[i] << endl;
                }
            }
        }
};
