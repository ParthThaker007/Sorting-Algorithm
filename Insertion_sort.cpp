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