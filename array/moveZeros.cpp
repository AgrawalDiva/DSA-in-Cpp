#include <iostream>

using namespace std;

void moveZero(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j+1]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=10;
    int arr[n]={0,1,20,3,0,2,0,8,0,0};
    moveZero(arr,n);
    printArray(arr,n);

}