#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define EARTH_RADIUS            6371

int main(int argc, char **argv) {
/*latitudeA latitudeB
changeInLongitude is the difference between location B’s longitude and location A’s longitude
*/
   double latitudeA, latitudeB, changeInLongitude;
   double longitudeA, longitudeB;
   
   printf("Please enter latitude of lacation A:");
   scanf("%lf", &latitudeA);

   printf("Please enter longtitude of lacation A:");
   scanf("%lf", &longitudeA);

   printf("Please enter latitude of location B");
   scanf("%lf", &latitudeB);

   printf("Please enter longitude of location B");
   scanf("%lf", &longitudeB);
   
   changeInLongitude = longitudeA - longitudeB;
   changeInLongitude = (changeInLongitude / 180) * M_PI;
   latitudeA = (latitudeA / 180) * M_PI;
   latitudeB = (latitudeB / 180) * M_PI;


   double distance;
   distance = acos(sin(latitudeA)*sin(latitudeB) + cos(latitudeA)*cos(latitudeB)*cos(changeInLongitude)) * EARTH_RADIUS;

   //Convertback to degree to print
   latitudeA = (latitudeA / M_PI) * 180;
   latitudeB = (latitudeB / M_PI) * 180;
   
   printf(" Origin:          (%lf, %lf)\n", latitudeA, longitudeA);
   printf(" Desitination:    (%lf,%lf)\n", latitudeB, longitudeB);
   printf(" Air Distance is %lf \n", distance);
   return 0;
 }