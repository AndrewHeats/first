// adding first comment
#include <math.h>
#include <stdio.h>
void
main (void)
{
  double n;
  double a = 3;
  double b = 8;
  double x, f, k, j, r;
  double res;
  for (x = a; x < b;)
    {
      if (x < 5)
	{
	  f = log (x) / log (3);
	  k = sqrt (pow (f, 2));
	  j = log (k) / log (4);
	  r = sqrt (pow (j, 2));
	  res = log (r) / log (5);
	  printf ("res=%lf\n", res);
	  x = x + 0.2;

	}
      else
	{
	  if (x < 7)
	    {
	      n = pow (x, 2) + 16;
	      res = 1 / n;
	      printf ("res=%lf\n", res);
	      x = x + 0.2;
	    }
	  else
	    {
	      res = log (x) + cos (x);
	      printf ("res=%lf\n", res);
          x = x + 0.2;
	    }
	}
    }

  {
    double a, b, h, x, y, d, res;
    int n, l;
    int factorial (n)
    {
      return (n < 2) ? 1 : n * factorial (n - 1);
    }
    a = 0.0;
    b = 0.2;
    h = 0.02;
    d = 0.001;
    for (x = a; x < b + 0.001; x = x + h)
      {
	n = 1;
	res = 0;
	do
	  {
	    l = 2 * n - 1;
	    y = (pow (x, 2 * n) - 1) / (factorial (l));
	    res = res + y;
	    n = n + 1;
	  }
	while (fabs (y) > d);
	printf ("\n x=%lf res=%lf", x, res);
      }
  }
}