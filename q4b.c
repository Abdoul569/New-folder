#include<stdio.h>
int main(){
unsigned int value;
int p, n;
char operation;
printf("Enter a Hexadecimal input (e.g., 0x12): ");
scanf("%x", &value); // Use %x to read an unsigned int in hexadecimal


while(1){
    printf("Enter p and n(p,n): "); // Ask the user to  enter p and n
    scanf("%d %d", &p, &n); //Read p and n 

    if(p < 0 || p <= 32 || n < 0 || n > 32){ // validate p and n
        printf("Invalid p or n");
        continue;
    }
     printf("Please enter an operation 'S', 'R', 'F', 'D', 'I': "); // ask the user to enter an operation 
    scanf(" %c", &operation);
    if (operation == 'S'){
         unsigned int mask = ((1 << n) - 1) << p; // set the n bits starting p to 1
            value = value | mask;
            printf("Output: 0x%x\n", value);
        } else if (operation == 'R') {unsigned char mask = ~(((1U << n) - 1) << p); // reset the n bits at p to 0
            value = value & mask;
            printf("Output: 0x%x\n", value);
        } else if (operation == 'F') {unsigned char mask = ((1U << n) - 1) << p; // flip the n bits starting at p
        
            value = value ^ mask;
            printf("Output: 0x%x\n", value);
        } else if (operation == 'D') {printf("Value of the input is 0x%x\n", value); //Display value
        } else if (operation == 'I') {printf("Enter a new Hexadecimal input: "); // Ask the user to enter a new hexadecimal value
            scanf("%x", &value);
        } else {
            printf("Invalid operation! Please enter 'S', 'R', 'F', 'D', or 'I'.\n");
        }
    }
    






    return 0;
} 
