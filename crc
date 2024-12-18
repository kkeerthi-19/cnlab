#include<stdio.h>

void division(int temp[], int gen[], int n, int r) {
    for (int i = 0; i < n; i++) {
        if (temp[i]) {
            for (int j = 0; j <= r; j++)
                temp[i + j] ^= gen[j];
        }
    }
}

int main() {
    int n, r, message[50], gen[50], temp[50];

    printf("Enter number of frame bits: ");
    scanf("%d", &n);
    printf("Enter the frame: ");
    for (int i = 0; i < n; i++) scanf("%d", &message[i]);

    printf("Enter number of generator bits: ");
    scanf("%d", &r);
    printf("Enter the generator: ");
    for (int i = 0; i < r; i++) scanf("%d", &gen[i]);

    for (int i = 0; i < r - 1; i++) message[n + i] = 0;
    for (int i = 0; i < n + r - 1; i++) temp[i] = message[i];

    division(temp, gen, n, r - 1);

    printf("CRC: ");
    for (int i = 0; i < r - 1; i++) {
        printf("%d ", temp[n + i]);
        message[n + i] = temp[n + i];
    }

    printf("\nTransmitted Message: ");
    for (int i = 0; i < n + r - 1; i++) printf("%d ", message[i]);

    for (int i = 0; i < n + r - 1; i++) temp[i] = message[i];
    division(temp, gen, n, r - 1);

    for (int i = 0; i < r - 1; i++) {
        if (temp[n + i]) {
            printf("\nError detected in received message.");
            return 0;
        }
    }

    printf("\nNo error in received message.\nReceived Message: ");
    for (int i = 0; i < n; i++) printf("%d ", message[i]);

    return 0;
}
