#include <bits/stdc++.h>
using namespace std;

// to find frequency of given numbers in a array using hashing/hasharray

// int main(){

//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   //precompute

//   int hash[13]={0};
//   for(int i=0; i<n; i++){
//     hash[arr[i]]++;

//   }

//   int q;
//   cin>>q;
//   while(q--){
//     int num;
//     cin>>num;
//     cout<<hash[num]<<endl;
//   }

//   return 0;

// }

// to find frequency of given char in a string using hash

// int main(){
//   string s;
//   cin>>s;

//   //precompute
//   int hash[26]={0};
//   for(int i=0; i<s.size(); i++){
//     hash[s[i]-'a']++;
//   }

//   int q;
//   cin>>q;
//   while(q--){
//     char c;
//     cin >> c;

//     //fetch
//     cout<<hash[c-'a']<<endl;
//   }

//   return 0;
// }

// to find frequency of character using map

// int main(){
//   string s;
//   cin>>s;

//   //precompute

//   map<char, int> mpp;
//   for(int i=0; i<s.size(); i++){
//     mpp[s[i]]++;
//   }

//   int q;
//   cin>>q;
//   while(q--){
//     char c;
//     cin>>c;
//     cout<<mpp[c]<<endl;
//   }

//   return 0;
// }

// finding highet and lowest frequncy element, bruteforce approach;
// tc=o(n square), sc=o(n)

// void countFreq(int n, int arr[]){

//   vector<bool> visited(n, false);
//   int maxFreq=0, minFreq = n;
//   int maxEle = 0, minEle = 0;

//   for (int i=0; i<n; i++){

//     if(visited[i]== true) continue;

//     int count =1;

//     for(int j=i+1; j<n; j++){
//       if(arr[i]==arr[j]){
//         visited[j] = true;
//         count++;
//       }
//     }

//      if(count>maxFreq){
//       maxFreq=count;
//       maxEle=arr[i];
//      }

//      if(count<minFreq){
//       minFreq = count;
//       minEle = arr[i];
//      }

//   }

//   cout << "Highest frequency element is " << maxEle << endl;
//   cout << "Lowest frequency element is " << minEle << endl;
// }

// int main()
// {
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   countFreq(n, arr);

//   return 0;
// }

// highest and lowest frequecny element, optimized appraoch(using map)

// void countFreq(int n, int arr[]){

//   unordered_map<int, int> mpp;
//   for(int i=0; i<n; i++){

//     mpp[arr[i]]++;

//   }

//   int maxFre=0, minFre =n;
//   int maxEle =0, minEle =0;

//   for(auto it:mpp){
//    int count = it.second;
//    int element = it.first;

//    if(count>maxFre){
//     maxFre = count;
//     maxEle= element;
//    }

//    if(count<minFre){
//     minFre = count;
//     minEle = element;
//    }
//   }

//   cout<<"highest frequency element is"<<maxEle<<endl;
//   cout<<"lowest frequency element is"<<minEle<<"\n";

// }

// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   countFreq(n, arr);

//   return 0;
// }

// frequency of each element in array, bruteforce  way using two loops

void countFreq(int n, int arr[])
{
  vector<int> visited(n, false);

  for (int i = 0; i < n; i++)
  {

    if (visited[i] == true)
      continue;

    int count = 1;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        visited[j] = true;
        count++;
      }
    }

    cout << arr[i] << "=>" << count << endl;
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
  countFreq(n, arr);

  return 0;
}

// frequency of each element in array, optimized way using map

// void countFreq(int n, int arr[])
// {

//   unordered_map<int, int> mpp;
//   for (int i = 0; i < n; i++)
//   {

//     mpp[arr[i]]++;
//   }

//   for (auto it : mpp)
//   {
//    cout<<it.first<<"=>"<<it.second<<endl;

// }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   countFreq(n, arr);

//   return 0;
// }