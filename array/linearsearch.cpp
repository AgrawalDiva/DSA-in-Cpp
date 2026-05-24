#include <iostream>

using namespace std;

int main(){
    //linear search in array

    int arr[10];
    for (int i=0;i<10;i++){
        cout<<"Enter the number in array " << i+1 <<": ";
        cin>>arr[i];
    }

    int num;
    cout<<"Enter the number you want to find: ";
    cin>> num;

    //finding the number
    int position;
    bool found=false;
    for(int i=0;i<10;i++){
        if (num==arr[i]){
            position=i+1;
            found=true;
            break;
        }
    }

    if(found==true){
        cout<< "The number "<<num<<" is present in the array at "<< position<<" position";
    }
    else{
        cout<< "The number is not present in the array";
    }
}