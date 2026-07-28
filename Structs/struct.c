#include <stdio.h>

struct Sensor
{
    int id;
    float value;
    int timestamp;
};

void printSensor(struct Sensor *s)
{
    printf("Sensor id, value, timestamp: [%d, %f, %d]\n", s->id, s->value, s->timestamp);
}

int main()
{
    struct Sensor sensors[3];
    sensors[0].id = 1;
    sensors[0].value = 5.0;
    sensors[0].timestamp = 3;
    sensors[1].id = 10;
    sensors[1].value = 10.0;
    sensors[1].timestamp = 6;
    sensors[2].id = 11;
    sensors[2].value = 15.0;
    sensors[2].timestamp = 9;

    int i = 0;
    while (i < 3)
    {
        printSensor(&sensors[i]);
        i++;
    }

    return 0;
}