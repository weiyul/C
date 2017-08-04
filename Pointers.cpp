//============================================================================
// Name        : Pointers.cpp
// Author      : Wei-Yu Liao
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Functions prototypes
void showAddress();
void pointerChangeContentOfVariable();
void pointerChangeContentOfVariable2();
void arrayNamesDereferencedWithAsterisk();
void processesOfArrayContentsWithPointer();
void subscriptNotationWithPointerAndPointerNotationWithArrayName();
void usesAddressOfEachElementInArray();
void displayArrayContentsWithPointer();
void displayArrayContentsWithPointer2();
void getNumber(int *);
void doubleValue(int *);
void pointersAsFunctionParameters();

int main() {
	//showAddress();
	//pointerChangeContentOfVariable();
	//pointerChangeContentOfVariable2();
	//arrayNamesDereferencedWithAsterisk();
	//processesOfArrayContentsWithPointer();
	//subscriptNotationWithPointerAndPointerNotationWithArrayName();
	//usesAddressOfEachElementInArray();
	//displayArrayContentsWithPointer();
	displayArrayContentsWithPointer();
	//pointersAsFunctionParameters();
	return 0;
}

void showAddress(){
	//Use the & operator to determine a variable's address and the sizeof operator to determine its size
	int X = 25, Y=50, Z = 75;
	cout << "The size of X is " << sizeof(X)<< " bytes\n";// print 4 byes
	cout << "The value in X is "<< X << endl;// print 25
	int *Ptr;
	Ptr = &X;// Store address of X in Ptr
	cout << "The address of X is "<< Ptr<< endl;
	cout << "The address of X is " << &X << endl;
}

void pointerChangeContentOfVariable(){
	int x =25, *ptr=&x;//store the address of x in ptr
	cout<< "Here is the value in x, print twice:\n";
	cout << x <<" "<< *ptr << endl;
	*ptr = 100;// change the value of x to 100
	cout << x <<" "<< *ptr << endl;
}

void pointerChangeContentOfVariable2(){
	int X = 25, Y=50, Z = 75;
	int *Ptr;
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
}
void arrayNamesDereferencedWithAsterisk(){
    // shows an array name being dereferenced with the * operator
    short Numbers[] ={10, 20, 30, 40, 50};
    cout << "The first element of the array is ";
    cout << *Numbers << endl;// print The first element of the array is 10
}

void processesOfArrayContentsWithPointer(){
    // processes the contents of an array. Pointer notation is used
    int newNumbers [5];
    cout<< "Enter five numbers: ";
    for (int count =0; count < 5; count++)
    	cin >> *(newNumbers + count);
    cout<< "Here are the numbers you entered:\n";
    for(int count=0; count<5; count++)
    	cout<< *(newNumbers + count)<< " ";
    cout<< endl;
}

void subscriptNotationWithPointerAndPointerNotationWithArrayName(){
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
}

void usesAddressOfEachElementInArray(){
   float coins[4] = {0.05, 0.1, 0.25, 0.5};
   float *floatPtr; //Pointer to a float
   int count; // Array index
   floatPtr = coins; // floatPtr now points to a coins array
   // Use the address of each element in the array
   for(count =0; count<4; count++){
	   floatPtr = &coins[count];
	   cout<< *floatPtr << " ";// show the contents of the coins array
   }
   cout << endl;
}

void displayArrayContentsWithPointer(){
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
   cout<< "\nThe numbers in set backwards are: \n";
   for(index = 0; index<9; index++){
	   num--;
	   cout<< *num << " ";
   }
   cout<< endl;
}

void displayArrayContentsWithPointer2(){
   // Use a pointer to display the contents of an integer array
   int set[9]={1,3,5,7,9,11,13,15,17};
   int *num, index;
   num=set;
   cout<< *num<< " "; //display the first element
   while(num < &set[8]){
	   num++;
	   cout<< *num<< " ";
   }
   cout<< *num<< " "; // display the last element
   while(num>set){
	   num--;
	   cout<< *num << " ";
   }
   cout<< endl;
}

void pointersAsFunctionParameters(){
	int number;
	getNumber(&number);//pass address of number to getNumber
	doubleValue(&number);
	cout<< "The value doubled is " << number << endl;
}
// Definition of getNumber. The parameter, input, is a pointer.
// This function asks the user for a number. The value entered is stored in the variable pointed to by input.


void getNumber(int *input){
	cout<<"Enter an integer number: ";
	cin>> *input;
}

// Definition of doubleValue. The parameter, val, is a pointer.
// This function multiplies the variable pointed to by Val by two.

void doubleValue(int *val){
	*val *=2;
}
