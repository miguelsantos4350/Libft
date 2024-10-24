
#include <stdio.h>
#include <string.h>  // for memset

// Homemade ft_memset function
void *ft_memset(void *ptr, int value, size_t num) {
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < num; i++) {
        p[i] = (unsigned char)value;
    }
    return ptr;
}

int main() {
    // ================== Char Array Tests =====================
    char char_arr1[20];
    char char_arr2[20];

    // Use standard memset to set char array to 'A'
    memset(char_arr1, 'A', sizeof(char_arr1) - 1);
    char_arr1[19] = '\0';  // Null-terminate the string

    // Use homemade ft_memset to set char array to 'B'
    ft_memset(char_arr2, 'B', sizeof(char_arr2) - 1);
    char_arr2[19] = '\0';  // Null-terminate the string

    // Print results for char arrays
    printf("Char array using memset:  %s\n", char_arr1);
    printf("Char array using ft_memset: %s\n\n", char_arr2);

    // ================== Integer Array Tests =====================
    int int_arr1[10];
    int int_arr2[10];

    // Use standard memset to set int array to -1
    memset(int_arr1, -1, sizeof(int_arr1));

    // Use homemade ft_memset to set int array to -1
    ft_memset(int_arr2, -1, sizeof(int_arr2));

    // Print results for integer arrays
    printf("Integer array using memset:  ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", int_arr1[i]);  // Should print -1 for each element
    }
    printf("\n");

    printf("Integer array using ft_memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", int_arr2[i]);  // Should print -1 for each element
    }
    printf("\n");

    return 0;
}