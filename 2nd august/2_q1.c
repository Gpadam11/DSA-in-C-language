 /* WAP  to store n employees data such as employee name, gender, designation, department, basic pay.
Calculate the gross pay of each employees as follows:

gross pay= basic pay+hr+da
ha=25% of basic pay
da=75% of basic pay
*/

#include<stdio.h>

typedef struct
{
    char name[30], gender[6], desig[30], dept[100];
    double basicsalary;
    double grosssalary;
} 
employee;

void empinfodisp(employee *x)
{
    printf("Name: %s\n",(*x).name);
    printf("Gender: %s\n",(*x).gender);
    printf("Designation %s\n",(*x).desig); 
    printf("Department %s\n",(*x).dept); 
    printf("Basic Salary: %lf\n",(*x).basicsalary);
    (*x).grosssalary=(*x).basicsalary+((0.25)*((*x).basicsalary))+((0.75)*((*x).basicsalary));
    printf("Gross Salary: %lf\n",(*x).grosssalary);
}

int main()
{
    int n;
    printf("enter no of employees ");
    scanf("%d",&n);
    employee e[n]; 
    for(int i=0;i<n;i++)
    {
        printf("Enter name of employee-%d ",i+1);
        scanf("%s",e[i].name);
        printf("Enter gender of employee (M for male, F for female)-%d: ",i+1);
        scanf("%s",e[i].gender);
        printf("Enter designation of employee-%d: ",i+1);
        scanf("%s",e[i].desig);
        printf("Enter department of employee-%d: ",i+1);
        scanf("%s",e[i].dept);
        printf("Enter basic salary of employee-%d: ",i+1);
        scanf("%lf",&e[i].basicsalary);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nEmployee-%d info:\n",i+1);
        empinfodisp(&e[i]);
    }
    return 0;
}