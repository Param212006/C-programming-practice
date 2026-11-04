//to take number of heads and number of legs in a pultry farm
//now you are required to find total number oh hens and goats in the pultry farm
#include <stdio.h>

int main() {
    int head, leg, goat, hen;

    printf("Enter the number of heads: ");
    if (scanf("%d", &head) != 1 || head < 0) {
        printf("Invalid input for heads.\n");
        return 1;
    }

    printf("Enter the number of legs: ");
    if (scanf("%d", &leg) != 1 || leg < 0) {
        printf("Invalid input for legs.\n");
        return 1;
    }

    // Check if the solution is mathematically possible
    if (leg % 2 != 0 || leg < 2 * head || leg > 4 * head) {
        printf("No valid combination of hens and goats matches the given heads and legs.\n");
        return 0;
    }

    goat = (leg - 2 * head) / 2;
    hen = head - goat;

    printf("Total number of hens in the farm : %d\n", hen);
    printf("Total number of goats in the farm: %d\n", goat);

    return 0;
}