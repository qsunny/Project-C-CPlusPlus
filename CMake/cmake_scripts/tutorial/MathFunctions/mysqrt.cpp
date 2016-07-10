#include <math.h>
#include "MathFunctions.h"


double mysqrt(double a) {
	//if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
	return result = exp(log(x)*0.5);
#else 	
  return sqrt(a);
#endif
}
