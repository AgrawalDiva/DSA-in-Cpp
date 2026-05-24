#include <iostream>

using namespace std;

int main(){

    //taking array from the user 
    int arr[5];
    for (int i=0 ; i<5 ; i++){
        cout<< "Enter the number for array " << i+1 << ":";
        cin>> arr[i];
    }

    //finding second largest number in the array 
    int largest=0;
    int sec_largest=0;
    for (int i=0 ; i<5 ; i++){
        if (arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
    }

    cout<<"The second largest number is: "<<sec_largest;
    
}