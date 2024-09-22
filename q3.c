#include<stdio.h>
int main(){
unsigned int firstv, secondv; // variables for two hexadecimal value
int p, n; // Variables for position (p) and number of bits (n)
printf("Enter the first hexadecimal value: "); // ask user to enter the first hexadecimal value
scanf("%hhx", &firstv); //Read the first hexadecimal value
printf("Enter the second hexadecimal value: "); // Ask the user to enter second hexadecimal value
scanf("%hhx", &secondv); // Read Second hexadecimal value
printf("Enter p and n (p,n): "); // enter p and n
scanf("%d %d", &p, &n); // Read p and n

unsigned int lastnBitssecondv= secondv & ((1 << n)-1); // Extract the last n bits from the second value
unsigned int shiftedBits = lastnBitssecondv << ( (p - n + 1)); // Shift these bits to the correct position in firstv
unsigned int clearmask = ~((1 << n)-1 << (p - n + 1)); // Create a mask to clear the bits in firstv at the chosen position
firstv = firstv & clearmask; // Clear the bits in firstv at the specified position
firstv= firstv | shiftedBits; // Set the bits in firstv with the shifted bits from secondv
printf("Output:%x\n ", firstv);




    return 0;
}