#include<stdio.h>
int main(){

unsigned int num; // Declare an unsigned integer variable to store the input number
printf("Enter a hexadecimal number: "); // ask the user to enter a hexadecimal number
scanf("%x", &num); // Read the hexadecimal number 
num = num | 0xF; //Uses the bitwise OR operator to modify 'num' by setting the last four bits to 1
printf("Modified number: 0x%X\n", num); //print the number in hexadecimal form 



    return 0;
}