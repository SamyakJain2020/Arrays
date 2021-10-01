//Array Implementation in C

/***
 * Introduction
 * An array is defined as the collection of similar type of data items stored at contiguous memory locations. 
 * Arrays are the derived data type in C programming language which can store the primitive type of data such as int, char, double, float, etc.
 * 
 ***/

/***
 * 
 * Sample array- [2,4,12,8,1]
 * Index       - [0,1,2,3,4]
 * Array length- 5
 * First Index - 0
 * Last Index  - 4
 * 
 * **/
#include<stdio.h>
int main(){
    // Array declaration by specifying size
    int arr1[10];
 
    // With recent C/C++ versions, we can also
    // declare an array of user specified size
    int size = 10;
    int arr2[size];

    // Array declaration by initializing elements
    int arr3[] = { 10, 20, 30, 40 };
    /***
     * Compiler creates an array of size 4.
     * above is same as  "int arr[4] = {10, 20, 30, 40}"
    ***/

   // Array declaration by specifying size and initializing
    // elements
    int arr[6] = { 10, 20, 30, 40 };

    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"

    /***
     * 
     * User Input in array and print it
     * 
     ***/

    int i,newarr[10];
    printf("Enter values in array:");
    for(i=0;i<10;i++){

        scanf("%d",&newarr[i]);

    }
    printf("Array is:");
    for(i=0;i<10;i++){
        printf("%d",newarr[i]);
    }

    return 0;



}
