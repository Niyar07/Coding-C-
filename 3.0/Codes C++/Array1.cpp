#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    // bool arr[10];
    // char arr1[15];
    // int arr2[5]= {2,4,6 };
    // int crr[4];
    // fill(crr, crr+4,0);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<crr[i]<<" ";
    // }
    
    // for (int  i = 0; i < 4; i++)
    // {
    //     cout<<i[arr]; 
    // }
    
    int arr[5] ={ 1,3,5,7,3};
    int size = 5;

    printArr(arr, size);
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// void rotateArray(int arr[], int size, int shift){
//     int finalShift= shift%size;

//     if(finalShift ==0){
//         return ;
//     }

//     // step 1 : Copy last finalShift element into a temp array
//     int temp[1000];
//     int index=0;
//     for (int i = size-finalShift; i < size; i++)
//     {
//         temp[index]= arr[i];
//         index++;
//     }

//     // step2 Shift array element by final Shift place
//     for (int i = size-1; i>=0; i--)
//     {
//         arr[i] = arr[i-finalShift];
//     }
    
//     // step3 copy temp elements into original array
    
//     for(int i=0; i<finalShift ; i++){
//         arr[i] = temp[i];
//     }
// }
// int main(){
//     // // Q.1 Fliff the 0 to 1 and 1 to 0 in array
//     // int arr[9]={0,1,1,1,0,0,1,1,0};

//     // int j=8;
//     // int count =0;
//     // cout<<"Before : ";
//     // for (int i = 0; i < 9; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // while (j>=0)
//     // {
//     //     if((arr[j]==1 || arr[j]==0 )&& count==0){
//     //         if (arr[j]==1)
//     //         {
//     //             count++;
//     //         }    
//     //     }
//     //     else
//     //     {
//     //         if(arr[j] == 0) {
//     //         arr[j] = 1;
//     //     } else {
//     //         arr[j] = 0;
//     //     }
//     //     }
        
//     //     j--;

//     // }
//     // cout<<"\nAfter : ";
//     // for (int i = 0; i < 9; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }



//     // // Q. Sort this array 
//     // int arr[]={1,0,0,1,0,0,1,0,0,1};
//     // int count_0 =0, count_1=0;

//     // cout<<"\nBefore Sorting : \n";
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
    
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     if (arr[i]==1)
//     //     {
//     //         count_1++;
//     //     }
//     //     else
//     //     {
//     //         count_0++;
//     //     }        
//     // }

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     if (i<count_0)
//     //     {
//     //         arr[i]=0;
//     //     }
//     //     else
//     //     {
//     //         arr[i]=1;
//     //     }   
//     // }
    
//     // cout<<"\nAfter Sorting : \n";
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
    

//     // Q3. Print All the Possibel pairs from the array 

//     // int arr[]={10,20,30,40};

//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 4; j++)
//     //     {
//     //         cout<<arr[i]<<", "<<arr[j]<<"\n";
            
//     //     }
//     //     cout<<"\n";
//     // }

//     int size=6;
//     int arr[size]={10,20,30,40,50,60};
//     int shift=2;

//     cout<<"Before Shifting : ";
//     for (int  i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  rotateArray(arr, size, shift);
//     cout<<"\nAfter  Shifting : ";
//     for (int  i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
   
//     return 0;
// }


