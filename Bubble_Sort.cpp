// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
// This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
//Time Complexity of Bubble Sort is:
// Best Case = O(n)   Average Case = O(n^2)  Worst Case = O(n^2)
//Space Complexity of Bubble Sort is : O(1)

//Take an array of numbers "5 1 4 2 8", and sort the array from lowest number to greatest number using bubble sort. In each step, elements written in bold are being compared. Three passes will be required;

// First Pass
// ( 5 1 4 2 8 ) → ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
// ( 1 5 4 2 8 ) → ( 1 4 5 2 8 ), Swap since 5 > 4
// ( 1 4 5 2 8 ) → ( 1 4 2 5 8 ), Swap since 5 > 2
// ( 1 4 2 5 8 ) → ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
// Second Pass
// ( 1 4 2 5 8 ) → ( 1 4 2 5 8 )
// ( 1 4 2 5 8 ) → ( 1 2 4 5 8 ), Swap since 4 > 2
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
// Now, the array is already sorted, but the algorithm does not know if it is completed. The algorithm needs one additional whole pass without any swap to know it is sorted.

// Third Pass
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )


#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n){
  for(int i=0 ;i<n-1;i++){
    for(int j =0 ;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }   
}
int main(){
    int Size;
    cout<<"Enter the Size Of Array"<<endl;
    cin>>Size;
    int *arr = new int[Size];
    cout<<"Enter the elements of the Array"<<endl;
    for(int i = 0; i<Size ; i++){
        cin>>arr[i];
    }
    Bubble_Sort(arr,Size);
    cout<<"Sorted Array: "<<endl;
    for(int i =0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}
