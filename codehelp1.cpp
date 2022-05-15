//  program to sort 1's and 0's in array

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {0,1,1,0,1,0,1};
    int p = 0,h=0;
    int arr1[7] = {};
    int arr2[7] = {};
    for (int i = 0; i < 7; i++)
    {
        if(arr[i] == 0){
            arr1[p] = arr[i];
            p++;
        }
        else{
            arr2[h] = arr[i];
            h++;
        }
    }
    int arrsize1 = sizeof(arr1)/sizeof(arr1[0]);
    int arrsize2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int j=0; j<p;j++){
        cout<<arr1[j]<<" ";
    }
    for(int k=0;k<h;k++){
        cout<<arr2[k]<<" ";
    }
}
