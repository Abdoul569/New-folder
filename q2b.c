#include<stdio.h>
int main(){
unsigned int value; // Declare an unsigned int variable to store the hexadecimal input
int p, n;  // Variables for position (p) and number of bits (n)

printf("Enter a hexadecimal value (0x00-0xff): ");
scanf("%hhx", &value);
printf("Enter p and n (p,n): "); //ask the user to enter the position 'p' and number of bits 'n'
scanf("%d %d", &p, &n); // Read the integer values for 'p' (position) and 'n' (number of bits)
unsigned int result= (value >> (p - n + 1) & (1 << n)-1); //Shift the value to the right by (p - n + 1) to get the bits starting from 'p' and mask the result using (1 << n) - 1 to extract only 'n' bits
printf("Output: 0x%x\n", result); // Print the result in hexadecimal format





    return 0;
}
