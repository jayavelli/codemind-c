#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, s, area;

  
  scanf("%lf%lf%lf", &a, &b, &c);

  s = (a+b+c)/2; // Semiperimeter

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("%.2f
", area);

  return 0;
}