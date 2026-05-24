#include <iostream>

using namespace std;
void checksort(int arr[],int n){
    bool isSwap= false;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
    }
    if (isSwap==true){
        cout<<"Array not sorted";
    }
    else{
        cout<<"Array is already sorted";
    }
}
int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    checksort(arr,n);

}