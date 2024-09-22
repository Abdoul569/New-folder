#include<stdio.h>
int main(){
unsigned int number;
int count_of_ones=0, count_of_zeros=0; 
printf("Enter a 32-bits integer: "); //read the integer input
scanf("%u", &number);
for(int i=0; i<32; i++){
    if(number & 1){
        count_of_ones++; //if the bits is 1, increase count_of_ones
    }
    else{
        count_of_zeros++; // if the bits is 0, increase count_of_zeros
    }
    number >>= 1;
}
//display the counts
printf("Number of bits set to 1: %d\n", count_of_ones);
printf("Number of bits set to 0: %d\n", count_of_zeros);


    return 0;
}