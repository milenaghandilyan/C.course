/*ex1*/
/*
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t1, t2, sum;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
    sum.hours   = t1.hours   + t2.hours   + sum.minutes / 60;

    sum.seconds %= 60;
    sum.minutes %= 60;
    sum.hours   %= 24;

    printf("Sum of time = %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
*/




/*ex2*/
/*
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter first complex number and real imag: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number and real imag: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product = %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
*/



/*ex3*/
/*
#include <stdio.h>
#include <string.h>

union SensorData {
    int temperature;
    float pressure;
    float humidity;
};

int main() {
    union SensorData data;
    char type[20];

    printf("Enter sensor type (temperature / pressure / humidity): ");
    scanf("%s", type);

    if (strcmp(type, "temperature") == 0) {
        printf("Enter temperature value: ");
        scanf("%d", &data.temperature);
        printf("Sensor Type: Temperature\n");
        printf("Corresponding reading: %d\n", data.temperature);
    }
    else if (strcmp(type, "pressure") == 0) {
        printf("Enter pressure value: ");
        scanf("%f", &data.pressure);
        printf("Sensor Type: Pressure\n");
        printf("Corresponding reading: %.2f\n", data.pressure);
    }
    else if (strcmp(type, "humidity") == 0) {
        printf("Enter humidity value: ");
        scanf("%f", &data.humidity);
        printf("Sensor Type: Humidity\n");
        printf("Corresponding reading: %.2f\n", data.humidity);
    }
    else {
        printf("Invalid sensor type!\n");
    }

    return 0;
}
*/

