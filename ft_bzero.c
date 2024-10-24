#include <stdio.h>
#include <string.h>
void ft_bzero(void *ptr, size_t num) {
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < num; i++) {
        p[i] = 0;  // Set each byte to 0
    }
}

  // For bzero or memset

// Declaration of your homemade ft_bzero function
void ft_bzero(void *ptr, size_t num);

int main() {
    // ================== Char Array Tests =====================
    char char_arr1[20];
    char char_arr2[20];

    // Initialize char arrays with some non-zero data
    memset(char_arr1, 'A', sizeof(char_arr1) - 1);
    memset(char_arr2, 'A', sizeof(char_arr2) - 1);
    char_arr1[19] = '\0';  // Null-terminate the strings
    char_arr2[19] = '\0';

    // Use standard bzero (or memset to 0) to clear char array
    bzero(char_arr1, sizeof(char_arr1) - 1);

    // Use homemade ft_bzero to clear char array
    ft_bzero(char_arr2, sizeof(char_arr2) - 1);

    // Print results for char arrays
    printf("Char array using bzero: ");
    for (int i = 0; i < 19; i++) {
        printf("%d ", char_arr1[i]);  // Print the ASCII values (should be 0)
    }
    printf("\n");

    printf("Char array using ft_bzero: ");
    for (int i = 0; i < 19; i++) {
        printf("%d ", char_arr2[i]);  // Print the ASCII values (should be 0)
    }
    printf("\n\n");

    // ================== Integer Array Tests =====================
    int int_arr1[10];
    int int_arr2[10];

    // Initialize int arrays with some non-zero data
    for (int i = 0; i < 10; i++) {
        int_arr1[i] = i + 1;
        int_arr2[i] = i + 1;
    }

    // Use standard bzero (or memset to 0) to clear int array
    bzero(int_arr1, sizeof(int_arr1));

    // Use homemade ft_bzero to clear int array
    ft_bzero(int_arr2, sizeof(int_arr2));

    // Print results for integer arrays
    printf("Integer array using bzero:  ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", int_arr1[i]);  // Should print 0 for each element
    }
    printf("\n");

    printf("Integer array using ft_bzero: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", int_arr2[i]);  // Should print 0 for each element
    }
    printf("\n");

    return 0;
}
