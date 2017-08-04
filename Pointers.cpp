//============================================================================
// Name        : Pointers.cpp
// Author      : Examples
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Use the & operator to determine a variable's address and the sizeof operator to determine its size
	int X = 25, Y=50, Z = 75;

	cout << "The size of X is " << sizeof(X)<< " bytes\n";// print 4 byes
    cout << "The value in X is "<< X << endl;// print 25

    int *Ptr;
    Ptr = &X;// Store address of X in Ptr
    cout << "The address of X is "<< Ptr<< endl;
    cout << "The address of X is " << &X << endl;

    // Ptr can be used to change the contents of the variable X.
    // This is done with the indirection operator, *
    // When the indirection operator is placed in front of a pointer variable name,
    // it dereferences the pointers.
    // When you are working with a dereferenced pointer, you are actually working with the value the pointer is pointing to


    *Ptr = 100; // Change the value of X to 100
    cout <<"Here the value of X is changed to " << X << endl;// print 100
    *Ptr *=2; // Multiply value in X by 2

    Ptr = &Y; // Store the address of Y in Ptr
    *Ptr *=2; // Multiply value in Y by 2

    Ptr = &Z; // Store the address of Z in Ptr
    *Ptr *=2; // Multiply value in Z by 2

    cout<< "Here are the new values of X, Y, Z:\n";
    cout<< X << " "<< Y << " " << Z << endl; // print 200 100 150


    // shows an array name being dereferenced with the * operator
    short Numbers[] ={10, 20, 30, 40, 50};
    cout << "The first element of the array is ";
    cout << *Numbers << endl;// print The first element of the array is 10



/*    // processes the contents of an array. Pointer noatation is used
    int newNumbers [5];
    cout<< "Enter five numbers: ";
    for (int count =0; count < 5; count++)
    	cin >> *(newNumbers + count);
    cout<< "Here are the numbers you entered:\n";
    for(int count=0; count<5; count++)
    	cout<< *(newNumbers + count)<< " ";
    cout<< endl;*/

    // Use subscript notation with a pointer and pointer notation with an array name
   float coins[4] = {0.05, 0.1, 0.25, 0.5};
   float *floatPtr; //Pointer to a float
   int count; // Array index
   floatPtr = coins; // floatPtr now points to a coins array
   cout.precision(2);
   cout<< "Here are the values in the coins array:\n";
   for (count = 0; count<4; count++)
	   cout<< floatPtr[count]<< " ";
   cout<< "\nHere are the values in the coins array again\n";
   for (count = 0; count<4; count++)
	   cout << *(coins +count)<< " ";
   cout << endl;


   // Use the address of each element in the array
   for(count =0; count<4; count++){
	   floatPtr = &coins[count];
	   cout<< *floatPtr << " ";// show the contents of the coins array
   }
   cout << endl;

   // Use a pointer to display the contents of an integer array
   int set[9]={1,3,5,7,9,11,13,15,17};
   int *num, index;
   num=set;
   cout<< "The numbers in set are: \n";
   for(index =0; index<9; index++){
	   cout<< *num << " ";
	   num++;
   }
   cout<< endl;

   num=set;
   cout<< *num<< " "; //display the first element
   while(num < &set[8]){
	   num++;
	   cout<< *num<< " ";
   }
   cout<< endl;

   cout<< "\nThe numbers in set backwards are: \n";
   for(index = 0; index<9; index++){

	   cout<< *num << " ";
	   num--;
   }
   cout<< endl;

   num = &set[8];
   cout<< *num<< " "; // display the last element
   while(num>set){
	   num--;
	   cout<< *num << " ";
   }
   cout<< endl;



    return 0;
}
