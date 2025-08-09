#include<bits/stdc++.h>
using namespace std;

//Bubble Sort Algorithm
void bubbleSort(vector<int> & arr){
    int n=arr.size();
    bool swapped;

    for(int i=0;i<n-1;i++){
        swapped= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printArray(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}

int main(){

    vector<int> arr={1,4,3,5,2,6,3};
    bubbleSort(arr);
    cout<<"Sorted array is: ";
    printArray(arr);
    return 0; 
}
