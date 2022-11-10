
 // Name : Prem Shankar SID : 21104084   Branch : EE
// Comparison between Bubble Sort and Selection Sort.

# include <bits/stdc++.h>
using namespace std;



void bubbleSort(int arr[],int n){
    
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){                
                swap(arr[j],arr[j+1]);                               

            }
        }
    }   
}
// 1. Number of Comparisons:

// for bubble sort during first pass(when i=0), n-1 comparisons are made, for the second pass(when i=1) n-2 comparisons, for the 3rd pass(i=2), n-3 comparisons and so on until the last pass(i=n-2) where only 1 comparison is made. Hence total no. of comparisons are n-1 + n-2 + n-3 ...... + 1 = (n(n-1))/2.

// 2. Number of Swaps:
// It  performs more number of swapping operation as compared to selection sort. 

// 3. It is an inplace sorting algorithm as there is no extra memory being used in the code.

//4. Time complexity is O(n2) as there are nested 'for' loops in the code of the bubbles sort .






void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx]){
        min_idx = i;
      }

       
    }

    // put min at the correct position
    swap(array[min_idx], array[step]);
  }
}

// 1. Number of Comparisons.
//  The number of comparisons in selection sort is same as bubble sort. As for the first pass we need to compare the 'min-index'(chosen smallest element) with all the other elements present in the array to search for the element smaller than the current smallest element.So it would require n-1 comparisons.Similarly for the second pass, it would require n-2 comparisons and so on. Thus total no.of comparisons requires in selection sort is n-1 + n-2 + n-3 + n-4 + n-5+.....+1 = (n(n-1))/2.

// 2. Number of Swaps
// It performs lesser number of swapping as compared to bubble sort. 

//3 . It is an inplace sorting algorithm... 

// 4. Time complexity of Selection sort is O(n2) as there are nested for loops in the code..


void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
  
    int arr[] = {5,1,2,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
     bubbleSort(arr,n);
     cout << "The sorted Array using Bubble Sort is: ";
     printArray(arr,n);

    selectionSort(arr,n);
    cout<<"The sorted Array using insertion sort is: ";
    printArray(arr,n);
}


    
    






