#include "Header/ArraySI.h"
#include <fstream>

using namespace std;

class Stock : public ArraySI {
public:

    void stockcheck(){
        for (int i = 0; i < size; i++){
            if (arri[i] <= 3){
                cout << arrs[i] << " Has only " << arri[i] << " stock left. Please top up quickly." << endl;
            }
        }
    }

    void importfile(string filename){
        string name;
        int value;
        ifstream file(filename);
        if (file.is_open()){
                while (file >> name >> value){
                    insert(name,value);
            }
        }
        else{
            cout << "Cant read file" << endl;
        }
        file.close();
    }

    void exportfile(){
        ofstream file("Stock.txt");
        for (int i = 0;i < size; i++){
            quicksort(0,size-1);
            file << arrs[i] << " : " << arri[i];
            if(arri[i] <= 3){
                 file << ": There is little stock left. Please top up quickly.";
            }
            file <<endl;
        }
        file.close();
        cout << "Export succesfully!! Please check the file"<<endl;
    }
};