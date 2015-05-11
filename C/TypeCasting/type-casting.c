#include <stdio.h>

int main()
{
    int sum;
    int count;
    float avg;


    sum = 125;
    count = 50;

    avg = sum / count;
    printf("<LINE%d> sum: %d, count: %d, avg: %f \n", __LINE__, sum, count, avg);


    avg = (float)sum / count;
    printf("<LINE%d> sum: %d, count: %d, avg: %f \n", __LINE__, sum, count, avg);


    return 0;
}
