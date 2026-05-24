#include <iostream>

using namespace std;

void leftrotate(int arr[],int n,int rotation){
    for (int i=0;i<rotation;i++){
        for (int j=0;j<n-i-1;j++){
            swap(arr[j],arr[j+1]);
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
    int n=4;
    int rotation=1;
    int arr[n]={0,1,20,3};
    leftrotate(arr,n,rotation);
    printArray(arr,n);

}