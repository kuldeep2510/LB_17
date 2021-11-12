////////////////////////////////////////////////////////
//
// Fuction Name:  Addition
// Input:         Integer,Integer
// Output:        Integer
// Description:   It is use to add 2 numbers
// Author:        Kuldeep Shamrao Hajare
// Date:          31/08/2021
//
////////////////////////////////////////////////////////

/*
   Algorithm
   
   
   START
     Accept first number as NO1
	 Accept second number as NO2
	 Perform addition of NO1 & NO2
	 Store the result in RET 
	 Return the value of Return
   STOP	 

*/

#include"Header.h"
int Addition(
             int iNo1, //First input argument
             int iNo2  //second input argument
            )
{
	int iResult=0;     //Local variable to store result
	
	iResult=iNo1+iNo2;
	
	return iResult;    //Return the value to the caller
		
}