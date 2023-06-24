// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
// The array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
// Time Complexity of Insertion Sort is :
// Best Case = O(n)   Average Case = O(n^2)    Worst Case = O(n^2)
// Space Complexity = O(1)


#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i =1 ;i<n;i++){

        int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                 arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main(){
    int Size;
    cout<<"Enter the size of Array"<<endl;
    cin>>Size;
    int *arr = new int[Size];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0 ; i<Size;i++){
        cin>>arr[i];
    }
    Insertion_sort(arr,Size);
    cout<<"Sorted Array: "<<endl;
    for(int i =0 ;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
