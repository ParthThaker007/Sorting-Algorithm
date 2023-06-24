#include <iostream>
using namespace std;

void selectionSort(int input[], int n) {
	for(int i = 0; i < n-1; i++ ) {
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) {
		if(input[j] < min) {
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
	}
}

int main() {
	int Size;
    cout<<"Enter the Size of Array "<<endl;
    cin>>Size;
    int *input = new int[Size];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i =0; i<Size ; i++){
        cin>>input[i];
    }
	selectionSort(input, Size);
	for(int i = 0; i < 6; i++) {
		cout << input[i] << " ";
			 
	}
	cout << endl;
}
