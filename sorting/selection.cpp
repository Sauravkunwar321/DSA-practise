#include <bits/stdc++.h>
using namespace std;

// void selection_sort(int arr[], int n)
// {
//   for (int i = 0; i <= n - 2; i++)
//   {
//     int mini = i;
//     for (int j = i; j <= n - 1; j++)
//     {
//       if (arr[j] < arr[mini])
//       {
//         mini = j;
//       }
//     }
//     // swap
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }
// }

// void bubble_sort(int arr[], int n)
// {

//   for (int i = n - 1; i >= 1; i--)
//   {
//     int didswap = 0;
//     for (int j = 0; j <= i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         // swap
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//         didswap = 1; // we did a swap
//       }
//     }
//     if (didswap == 0)
//     {
//       // no swap means array is sorted
//       break;
//     }
//   }
// }

void insertion_sort(int arr[], int n){

  for(int i=0; i<=n-1; i++){
    int j=i;
     while(j>0 && arr[j-1]>arr[j]){
      int temp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = temp;
      j--;
     }
  }
}


int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // before sorting

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // selection_sort(arr, n);
  // bubble_sort(arr, n);
   insertion_sort(arr, n);


  // after sorting
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
