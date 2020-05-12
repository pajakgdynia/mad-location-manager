#ifndef COMMONS_H
#define COMMONS_H

#include <stdint.h>

#define UNUSED_ARG(x) ((void)x)

#ifdef __cplusplus
extern "C" {
#endif

double Degree2Rad(double degree);
//////////////////////////////////////////////////////////////////////////

double Rad2Degree(double rad);
//////////////////////////////////////////////////////////////////////////

double MilesPerHour2MeterPerSecond(double mph);
//////////////////////////////////////////////////////////////////////////

int RandomBetween2Vals(int low,
                       int hi);
///////////////////////////////////////////////////////

double LowPassFilter(double prev,
                     double measured,
                     double alpha);
///////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif // extern "C"

#endif // COMMONS_H
