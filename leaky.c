#include <stdio.h>

struct packet { int time, size; } p[50];

int main() {
    int n, bsize, outrate, bfilled = 0, i = 1, k = 0;

    printf("Enter number of packets: ");
    scanf("%d", &n);
    printf("Enter packets (time and size):\n");
    for (int j = 0; j < n; j++) scanf("%d%d", &p[j].time, &p[j].size);

    printf("Enter bucket size and output rate: ");
    scanf("%d%d", &bsize, &outrate);

    while (i <= p[n - 1].time || bfilled > 0) {
        printf("\nTime %d: ", i);
        if (k < n && p[k].time == i) {
            if ((bfilled += p[k].size) > bsize) {
                bfilled -= p[k].size;
                printf("%d byte packet discarded, ", p[k].size);
            } else {
                printf("%d byte packet inserted, ", p[k].size);
            }
            k++;
        }
        int transfer = (bfilled > outrate) ? outrate : bfilled;
        bfilled -= transfer;
        printf("%d bytes transferred, %d bytes in bucket", transfer, bfilled);
        i++;
    }
    return 0;
}
