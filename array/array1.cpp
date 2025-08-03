#include <bits/stdc++.h>
using namespace std;

// finding ma element in array bruteforce approach
//  findmax(vector<int> &arr){
//    sort(arr.begin(), arr.end());
//    return arr[arr.size()-1];
//  }

// int main(){
//   vector<int> arr= {1,4,2,8,12,5};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout << "max element is" << findmax(arr) <<endl;

//   return 0;
// }

// finding max element in array using optimal approach, max element approach

// int findmax(int arr[], int n){
//   int max = arr[0];
//   for(int i=0; i<n; i++){
//     if(arr[i]>max){
//       max = arr[i];
//     }
//   }
//   return max;
// }

// int main()
// {
//  int arr[] = {1, 4, 2, 8, 12, 65, 34};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "max element is" << findmax(arr, n) << endl;

//   return 0;
// }

// to find second largest element without using sorting


//using sorting approach, but this will work if there is no duplicates

// int findseclar(int arr[], int n){

//   if(n==1 || n==0){
//     return -1;
//   }
//   sort(arr, arr+n);
//   return arr[n-2];
// }


//sorting approach when there is duplicates

// int findseclar(int arr[], int n)
// {

//   if (n == 1 || n == 0)
//   {
//     return -1;
//   }
//   sort(arr, arr + n);
//   for(int i=n-2; i>=0; i--){
//     if(arr[i] != arr[n-1]){
//       return arr[i];
//     }
//   }
// }


//better appraoch to find second largest or second smallest using 2 loops, first for finding largest , after that find second largest

int findseclar(int arr[], int n){

  int lar = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]>lar){
      lar = arr[i];
    }
  }

  int slar = -1;
  for(int i=0; i<n; i++){
    if(arr[i]>slar && arr[i]!=lar){
      slar = arr[i];
    }
  }

  return slar;
}

//optimal approach to find second largest element in array

// int findseclar(int arr[], int n)
// {

//   int lar = arr[0], slar = -1;

  

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] > lar)
//     {
//       slar = lar;
//       lar = arr[i];
//     }
//     else if (arr[i] < lar && arr[i] > slar)
//     {
//       slar = arr[i];
//     }
//   }

//   return slar;
// }

int main()
{
  int arr[] = {1, 4, 4, 8, 20, 65, 65};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "second largest element is" << findseclar(arr, n) << endl;

  return 0;
}
