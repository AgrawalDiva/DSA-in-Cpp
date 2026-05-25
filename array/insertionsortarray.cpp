#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n){
    int index;
    for (int i=0;i<n;i++){
        int min=100;
        for (int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}

void print_array(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n=5;
    int arr[n]={4,1,5,2,3};

    insertion_sort(arr,n);
    print_array(arr,n);

    return 0;
}


