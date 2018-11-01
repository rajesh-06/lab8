/*Q1.Write a program to find sum of all elements of an array. (Use functions)*/

//include the library 
#include<iostream>
using namespace std;

//function
int * func(int arr[]){
	// assigns value to array
	for(int i = 0 ; i < 10 ; i++){
		arr[i] = i + 1;
	}
return arr;
}


//main function
int main(){
	
int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
	//printing the value of sum
	cout<<"The answer of 0";
	//taking the values from the arrays
	int *p = func(arr);
		for(int i = 0 ; i < 10 ; i++){
			cout <<" + "<< *(p+i);
			}
	// sums value to array
	int x = 0;
	for(int i = 0 ; i < 10 ; i++){
		x = x + arr[i];
	}
	//printing the final value
	cout << " is equal to "<<x << endl;
return 0;
}
