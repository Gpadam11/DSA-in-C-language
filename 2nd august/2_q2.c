//wap to add two distance by passing structure to a function

#include <stdio.h>
struct distance
{
  int km;
  int mt;
};
 

struct distance add (struct distance d1, struct distance d2)
{
  struct distance total;
  total.km = d1.km + d2.km;
  total.mt = d1.mt + d2.mt;
  
  if(total.mt>=1000)
  {
      total.km= total.km + 1;
      total.mt= total.mt-1000;
  }
  return (total);
}

int main ()
{
  struct distance d1, d2, totaldistance;
  printf ("Enter the kilometers and meters covered for distance 1: ");
  scanf ("%d %d", &d1.km, &d1.mt);
  printf ("Enter the kilometers and meters covered for distance 2: ");
  scanf ("%d %d", &d2.km, &d2.mt);

  totaldistance = add (d1, d2);
  printf ("\nThe total distance is: %d Kilometers and %d Meters", totaldistance.km, totaldistance.mt);
  return 0;
}


