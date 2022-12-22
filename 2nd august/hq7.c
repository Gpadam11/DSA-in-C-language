#include <stdio.h>

// Upper triangular
int up_tri(int n, int a[][n])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < i - 1; j++)
            if (a[i][j] != 0)
                return 1;

    return 0;
}

// Lower Triangular
int low_tri(int n, int a[][n])
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][j] != 0)
                return 1;

    return 0;
}

// Tri-diagonal matrix
int tri_dia(int n, int a[][n])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = i + 2; j < n; j++)
            if (a[i][j] != 0)
                return 1;

    for (i = 1; i < n; i++)
        for (j = 0; j < i - 1; j++)
            if (a[i][j] != 0)
                return 1;

    return 0;
}

int main()
{
    int i, j, n, shp;
    printf("Enter no of rows or columns of matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements of matrix\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter row %d elements ", i + 1);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n");

        shp = up_tri(n, a);
        if (shp == 0)
            printf("The given matrix is Upper-Triangular.");
        else
            printf("The given matrix is Not Upper-Triangular.");

        shp = low_tri(n, a);
        if (shp == 0)
            printf("The given matrix is Lower-Triangular.");
        else
            printf("The given matrix is Not Lower-Triangular.");
    
        shp = tri_dia(n, a);
        if (shp == 0)
            printf("The given matrix is Tri-Diagonal.");
        else
            printf("The given matrix is Not Tri-Diagonal.");

    return 0;
}