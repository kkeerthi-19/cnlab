#include <stdio.h>

void printAdj(int a[20][20], int n, int k) {
    for (int j = 1; j <= n; j++) {
        if (a[k][j] == 1) {
            printf("%d -> %d\n", k, j);
        }
    }
}

int main() {
    int n, root, a[20][20];
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter root node: ");
    scanf("%d", &root);
    printAdj(a, n, root);
    return 0;
}
