/*
    Introduction
 * An array is defined as the collection of similar type of data items stored at contiguous memory locations. 
 * Arrays are the derived data type in C programming language which can store the primitive type of data such as int, char, double, float, etc.
*/

/*  
    Complexity Analysis
 *  Because it takes a single step to access an item of an array via its index, or add/remove an item at the end of an 
    array, the complexity for accessing, pushing or popping a value in an array is O(1). Whereas, linearly searching through an array via its index,
    as seen before, has a complexity of O(n).
*/


/* implimentation of arrays */
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Array declaration by specifying size
    int arr1[7];
 
    // With recent C/C++ versions, we can also
    // declare an array of user specified size
    int size = 5;
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

    int i,arr[10];
    cout<<"Enter values in array:"<<endl;
    for(i=0;i<10;i++){

        cin>>arr[i];

    }
    cout<<"Array is"<<endl;
    for(i=0;i<10;i++){
        cout<<arr[i];
    }

    return 0;

}

/* Advantages and Disadvantages */
/* Advantages 
1. Arrays represent multiple data items of the same type using a single name.
2. In arrays, the elements can be accessed randomly by using the index number.
3. Using arrays, other data structures like linked lists, stacks, queues, trees, graphs etc can be implemented.
4. Two-dimensional arrays are used to represent matrices.
*/

/* Disadvantages 
1. The number of elements to be stored in an array should be known in advance.
2. An array is a static structure (which means the array is of fixed size). 
3. Insertion and deletion are quite difficult in an array as the elements are stored in consecutive memory locations and the shifting operation is costly.
4. Allocating more memory than the requirement leads to wastage of memory space and less allocation of memory also leads to a problem.
*/