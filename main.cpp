/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description: This is a program used to experiment with integer arrays 
 *
 * Revision History:
 * Initial version: Aug 8th, 2020
 */

#include<iostream>

using namespace std;

/*****************************************************/
// Function:     get_array_capacity()
// Description:  This function computes the number of
//               elements present in the integer array
// Inputs:       pointer to starting address of int array
// Return value: length of the array
/*****************************************************/

int get_array_capacity(int *arr)
{
    int arrcount = 0;

	while((*arr == 0) || (*arr == 1))
	{
		arrcount++;
		arr++;
		//cout << "arrcount: " << arrcount << " ";
	}

	return arrcount;
}

/*****************************************************/
// Function:     maxConsectiveOnes()
// Description:  This function finds the maximum number 
//               of consecutive 1's occurring in the 
//               integer array
// Inputs:       pointer to starting address of int 
//               array
// Return value: Count of the max number of consecutive 
//               1s in the array
// Example: {1,1,1,0,1,1,0,1,1,1,1} should return 4
/*****************************************************/

int maxConsectiveOnes(int *arr)
{
	int i = 0, count = 0, arrcount = 0 /*,curr_idx = 0, next_idx = 0*/;
	int max_consec_count = 0, idx = 0;
	arrcount = get_array_capacity(arr);
	//cout << "arrcount: " << arrcount << endl;

	for(count = 0; idx < arrcount-1; idx++)
	{
		//cout << "count: " << count << " ";
		//cout << "arr[idx]: " << arr[idx] << " ";
		//cout << "arr[idx+1]: " << arr[idx+1] << " " << endl;

		if(arr[idx] == arr[idx + 1])
		{
			count++;
			if(max_consec_count < count)
		    {
			    max_consec_count = count;
				//cout << "max_consec_count: " << max_consec_count << " " << endl;
		    }
		}
		else
		{
			count = 0;
		}

	}
	//cout << "Debg#2: max_consec_count: " << max_consec_count << " ";

	return max_consec_count+1;
}

/*****************************************************/
// Function:     main()
// Description:  This is the main() function
// Inputs:       None
// Return value: None
/*****************************************************/

void main()
{
	int intarr[] = {1,1,0,1,1,1,1,0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
	cout << "Number of consecutive ones in the array is: " << maxConsectiveOnes(intarr);

	while(1);
}