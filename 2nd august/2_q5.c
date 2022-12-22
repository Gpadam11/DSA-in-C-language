//WAP Store information of n students using structures and Dynamic Memory Allocation.

// #include <stdio.h>
// #include <stdlib.h>

struct details
{
    char name[50];
    char gender;
    long roll;
    int sem;
    char sec;
};
typedef struct details stu;

void input(stu *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name \n");
        scanf("%s",&p[i].name);
        printf("Enter the gender \n");
        scanf(" %c",&p[i].gender);
        printf("Enter the roll number \n");
        scanf("%ld",&p[i].roll);
        printf("Enter the semester \n");
        scanf("%d",&p[i].sem);
        printf("Enter the section \n");
        scanf(" %c",&p[i].sec);
    }
}

void display(stu *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nName: %s\n",p[i].name);
        printf("Gender: %c \n",p[i].gender);
        printf("Roll number: %ld \n",p[i].roll);
        printf("Semester: %d \n",p[i].sem);
        printf("Section: %c \n",p[i].sec);
    }
}

void details()
{
    stu *ptr;
    int n;
    printf("Enter the number of students \n");
    scanf("%d",&n);
    ptr=(stu*) calloc(n,sizeof(stu));

    input(ptr,n);
    display(ptr,n);
}