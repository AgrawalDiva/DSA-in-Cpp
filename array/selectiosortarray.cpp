#include <iostream>

using namespace std;

void selection_sort(int arr[],int n){
    for (int i=1;i<n;i++){
        int curr, prev;
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
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

    selection_sort(arr,n);
    print_array(arr,n);

    return 0;
}