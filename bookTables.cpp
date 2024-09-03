#include "Header/Array.h"

using namespace  std;

class bookTables : public Array {
public:
    bookTables(int table) {
        size = 0;
        for (int i = 0; i <= table-1; i++) {
            insert(0);  // Initialize all tables as unbooked (0)
        }
    }

    void books(int index) {
        if (arr[index - 1] == 0) {
            arr[index - 1] = 1;
            cout << "Book Success!!" << endl;
        } else {
            cout << "That table is booked already!!" << endl;
        }
    }

    void clear(int index) {
        if (arr[index - 1] == 1) {
            arr[index - 1] = 0;
            cout << "Clear success!! Thank you for eating with us" <<endl;
        } else {
            cout << "That table isn't booked yet" << endl;
        }
    }

    void checkbookTable(){
        for (int i = 0; i < size; i++){
            if(arr[i] == 1){
                cout << "Table " << i+1 << " : Booked" << endl;
            }
            else{
                continue;
            }
        }
    }

    void checkunbookTable(){
        for (int i = 0; i < size; i++){
            if(arr[i] == 0){
                cout << "Table " << i+1 << " : unbooked" << endl;
            }
            else{
                continue;
            }
        }
    }

    void display(){
        for(int i = 0; i < size; i++){
            string tableStatus;
            if (arr[i] == 0){
                tableStatus = "Unbooked";
            }
            if (arr[i] == 1){
                tableStatus = "Booked";
            }
            cout << "Table " << i+1 << " : " << tableStatus << endl;
        }
    }
};
