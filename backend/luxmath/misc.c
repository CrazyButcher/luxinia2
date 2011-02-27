// Copyright (C) 2004-2011 Christoph Kubisch
// This file is part of the "Luxinia Engine".
// For conditions of distribution and use, see copyright notice in LICENSE.txt

#include <luxmath/misc.h>


LUX_API float lxGetAverageOfN (const float *array, int n)
{
  float avg;
  int i;

  i = n;
  avg = 0;
  while (i--) avg+=array[i];

  return avg/n;
}

LUX_API float lxGetMinOfN (const float *array, int n) {
  float min;

  min = *array;
  while (n--) if (min>*array) min = *(array++); else array++;

  return min;
}

LUX_API float lxGetMaxOfN (const float *array, int n) {
  float max;

  max = *array;
  while (n--) if (max<*array) max = *(array++); else array++;

  return max;
}

LUX_API float lxGetIntAverageOfN (const int *array, int n)
{
  float avg;
  int i;

  i = n;
  avg = 0;
  while (i--) avg+=array[i];

  return avg/n;
}

LUX_API int lxGetIntMinOfN (const int *array, int n) {
  int min;

  min = *array;
  while (n--) if (min>*array) min = *(array++); else array++;

  return min;
}

LUX_API int lxGetIntMaxOfN (const int *array, int n) {
  int max;

  max = *array;
  while (n--) if (max<*array) max = *(array++); else array++;

  return max;
}

LUX_API void  lxPermutation(int *out, int n, int *temp)
{
  int i;
  int index;
  int *pInt;


  pInt = temp;
  for (i = 0; i < n; i++,pInt++){
    *pInt = i;
  }

  pInt = out;
  for (i = 0; i < n; i++,pInt){
    index = rand()%n;
    while (temp[index] < 0){
      index++;
      index%=n;
    }

    *pInt = temp[index];
    temp[index] = -1;
  }
}
