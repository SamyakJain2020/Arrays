// Introduction to Arrays

/*
An array is a group of like-typed variables that are referred to by a common name.
- In Java all arrays are dynamically allocated.(discussed below)
- Since arrays are objects in Java, we can find their length using the object property length. This is different from C/C++ where we find length using sizeof.
- A Java array variable can also be declared like other variables with [] after the data type.
- The variables in the array are ordered and each have an index beginning from 0.
- Java array can be also be used as a static field, a local variable or a method parameter.
- The size of an array must be specified by an int or short value and not long.
- The direct superclass of an array type is Object.
- Every array type implements the interfaces Cloneable and java.io.Serializable.
*/


/*
An array declaration has two components: the type and the name. type declares the element type of the array. 
The element type determines the data type of each element that comprises the array. Like an array of integers, 
we can also create an array of other primitive data types like char, float, double, etc. or user-defined data types 
(objects of a class). Thus, the element type for the array determines what type of data the array will hold.
*/


//Immplementation of Arrays

// Java Program to Insert an element
// at a specific position in an Array

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {

	// Function to insert x in arr at position pos
	public static int[] insertX(int n, int arr[],
								int x, int pos)
	{
		int i;

		// create a new array of size n+1
		int newarr[] = new int[n + 1];

		// insert the elements from
		// the old array into the new array
		// insert all elements till pos
		// then insert x at pos
		// then insert rest of the elements
		for (i = 0; i < n + 1; i++) {
			if (i < pos - 1)
				newarr[i] = arr[i];
			else if (i == pos - 1)
				newarr[i] = x;
			else
				newarr[i] = arr[i - 1];
		}
		return newarr;
	}

	// Driver code
	public static void main(String[] args)
	{

		int n = 10;
		int i;

		// initial array of size 10
		int arr[]
			= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		// print the original array
		System.out.println("Initial Array:\n"
						+ Arrays.toString(arr));

		// element to be inserted
		int x = 50;

		// position at which element
		// is to be inserted
		int pos = 5;

		// call the method to insert x
		// in arr at position pos
		arr = insertX(n, arr, x, pos);

		// print the updated array
		System.out.println("\nArray with " + x
						+ " inserted at position "
						+ pos + ":\n"
						+ Arrays.toString(arr));
	}
}

/*
Output: 
Initial Array:
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

Array with 50 inserted at position 5:
[1, 2, 3, 4, 50, 5, 6, 7, 8, 9, 10]

*/
/*
***Time Complexity 
The computational complexity for writing to and accessing an array is O(1). 
No matter the number of elements in the array, the calculation to find the element in the array is single multiplication and addition.

*/