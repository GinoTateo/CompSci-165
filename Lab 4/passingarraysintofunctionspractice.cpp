
#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

void printArray(int theArray[], int sizeOfArray);
void printArray2(int theArray[], int sizeOfArray);

int main()
{

    int gino[3] = {20,54,675};
    int cool[6] = {2,3,4,5,6,7};
    
    printArray(gino,3);
    printArray2(cool,6);
}

void printArray(int theArray[], int sizeOfArray) {
    for(int x = 0; x<sizeOfArray;x++){
        cout << theArray[x]<< endl;
    }
}
    void printArray2(int theArray[], int sizeOfArray){
        for(int x = 0; x<sizeOfArray;x++){
            cout << theArray[x]<< endl;
    }
}
    

