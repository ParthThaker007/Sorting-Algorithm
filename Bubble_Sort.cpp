// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
// This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
//Time Complexity of Bubble Sort is:
// Best Case = O(n)   Average Case = O(n^2)  Worst Case = O(n^2)
//Space Complexity of Bubble Sort is : O(1)




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
