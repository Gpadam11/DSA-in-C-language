// Write the following menu driven program for the binary search tree

// ----------------------------------------
// Binary Search Tree Menu
// ----------------------------------------
// 0. Quit
// 1. Create
// 2. In-Order Traversal
// 3. Pre-Order Traversal
// 4. Post-Order traversal
// 5. Search
// 6. Find Smallest Element
// 7. Find Largest Element
// 8. Deletion of Tree

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int ch, val;
    printf("0) Quit \n");
    printf("1) Create \n");
    printf("2) In-Order Traversal\n");
    printf("3) Pre-Order Traversal \n");
    printf("4) Post-Order traversal \n");
    printf("5) Search \n");
    printf("6) Find Smallest Element \n");
    printf("7) Find Largest Element \n");
    printf("8) Deletion of Tree \n");

    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        {
            printf("Quit \n");
            break;
        }
        case 1:
        {
           
            break;
        }
        case 2:
        {
           
            break;
        }
        case 3:
        {
           
            break;
        }
        case 4:
        {
            
            break;
        }
        case 5:
        {
          
            break;
        }
        case 6:
        {
            
            break;
        }
        case 7:
        {
            
            break;
        }
        case 8:
        {
            
            break;
        }
        default:
        {
            printf("Invalid choice \n");
        }
        }
    } while (ch != 8);
    return 0;
}