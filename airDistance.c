#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define PI                      3.1415926
#define EARTH_RADIUS            6371

int main(int argc, char **argv) {
//*latitudeA latitudeB
∆ is the difference between location B’s longitude and location A’s longitude *//


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

   changeInLongitude = abs(longitudeA - longitudeB)

   double radian(double d);
   double get_distance(double lat1, double lng1, double lat2, double lng2);

//calculate radian
double radian(double d)
{har
}

//calculate distant
double get_distance(double lat1, double lng1, double lat2, double lng2)
{
    double radLat1 = radian(lat1);
    double radLat2 = radian(lat2);
    double a = radLat1 - radLat2;
    double b = radian(lng1) - radian(lng2);

    double dst = 2 * asin((sqrt(pow(sin(a / 2), 2) + cos(radLat1) * cos(radLat2) * pow(sin(b / 2), 2) )));

    dst = dst * EARTH_RADIUS;
    dst= round(dst * 10000) / 10000;
    return dst;
}
