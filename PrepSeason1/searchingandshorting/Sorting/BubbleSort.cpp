// #include<iostream>
// using namespace std;
// void Bubble_sort(int *arr,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 //swap
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// void Slection_sort(int *arr,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int min=arr[i],min_index=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<min)
//             {
//                 min=arr[j];
//                 min_index=j;
//             }
//         }
//         //swaping
//         int temp=arr[i];
//         arr[i]=arr[min_index];
//         arr[min_index]=temp;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[n];
//     }
//     Bubble_sort(arr,n);
//     // Slection_sort(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }