#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
    int nf, n, i = 0, j;
    srand(time(NULL));

    printf("Enter no. of frames: ");
    scanf("%d", &nf);
    printf("\nEnter window size: ");
    scanf("%d", &n);

    while (i < nf) {
        for (j = i; j < i + n && j < nf; j++)
            printf("Sent frame %d\n", j);

        for (j = i; j < i + n && j < nf; j++) {
            if (rand() % 2) {
                printf("Ack %d\n", j);
            } else {
                printf("\nFrame %d not received\nRetransmitting Window\nSent frame %d\nAck %d\n", j, j, j);
            }
        }

        i += n;
    }
}
