#include <iostream>

using namespace std;

int main() {
    int arr[5];
    for (int i=0;i<5;i++){
        cout<< "Enter the number for array " << i+1 << ":";
        cin>> arr[i];
    }
    cout<< "Array initially"<< endl;
    for (int i=0;i<5;i++){
        cout<< arr[i]<< endl;
    }
    cout<<"Reverse of array"<<endl;
    for (int i=4;i>=0;i--){
        cout<< arr[i]<< endl;
    }

    return 0;
}
