#include <iostream>
    using namespace std;
   
   int binarySearch(int arr[], int n, int x) {
     int start = 0, end = n-1;
     while (start <= end) {
       int mid = start + (end - start) / 2;
       if (arr[mid] == x) {
         return mid;
       }  
       else if (x < arr[mid]) {
         end = mid - 1;
       } else {
         start = mid +1 ;
       }
     }
     return -1;
   }
   
   int main(){
     int n;
     cin >> n;
     int arr[100];
     for (int i = 0; i < n; i++) {
       cin >> arr[i];
     }
     int x;
     cin >> x;
     int result = binarySearch(arr, n, x);
     if (result == -1) {
       cout << "Element is not present in array"<< endl;
     
     } else {
       cout << "Element is present at index " << result<<endl;
     }
     
     
   }