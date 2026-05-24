#include <iostream>

using namespace std;

int main(){

    //Taking array as an input from users

    int arr[5];
    for (int i=0 ; i<5 ; i++){
        cout<< "Enter the number for array " << i+1 << ":";
        cin>> arr[i];
    }

    //searching the largest element in array
    int max_num=0;
    for (int i=0 ; i<5 ; i++){
        if (arr[i]>max_num){
            max_num=arr[i];
        }
    }
    cout<<"The Largest number in the array is: "<<max_num;
}