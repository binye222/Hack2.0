#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define PI                      3.1415926
#define EARTH_RADIUS            6371

int main(int argc, char **argv) {
/*latitudeA latitudeB
changeInLongitude is the difference between location B’s longitude and location A’s longitude
*/
   double latitudeA, latitudeB, changeInLongitude;
   printf("Please enter latitude of lacation A:");
   scanf("%lf", &latitudeA);

   printf("Please enter latitude of lacation B:");
   scanf("%lf", &latitudeB);

   double longitudeA, longitudeB;
   printf("Please enter longitude of location A");
   scanf("%lf", &longitudeA);

   printf("Please enter longitude of location B");
   scanf("%lf", &longitudeB);

   changeInLongitude = longitudeA - longitudeB;
   changeInLongitude = changeInLongitude / 180 * PI;
   latitudeA = latitudeA / 180 * PI;
   latitudeB = latitudeB / 180 * PI;

   double distance;
   distance = arccos(sin('latitudeA')sin('latitudeB') + cos('latitudeA')cos('latitudeB')cos('changeInLongitude')) * EARTH_RADIUS;

   printf(" Origin:          (%f, %f)\n", &latitudeA, &longitudeA);
   printf(" Desitination:    (%f,%f)\n", &latitudeB, &longitudeB);
   printf(" Air Distance is %f \n", &distance);
