#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z; 
    int val1, val2, val3; 
    int symbols[] = {0, 11, 10, 22, 21, 20}; 

    printf("Enter the first symbol number (1-6): "); 
    scanf("%d", &x); 

    printf("Enter the second symbol number (1-6): "); 
    scanf("%d", &y); 

    printf("Enter the third symbol number (1-6): "); 
    scanf("%d", &z); 

    x = symbols[x - 1]; 
    y = symbols[y - 1]; 
    z = symbols[z - 1]; 

    val1 = (2 * x) + 11; 
    val2 = ((2 * z) + y) - 5; 
    val3 = abs((y + z) - x); 

    printf("The numbers are: \n%d %d %d", val1, val2, val3); 

    return 0; 
}