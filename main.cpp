#include "mbed.h"
AnalogIn sensor(A1);
DigitalOut myled(LED1);

int main() {
    float val;
    while(1) {
        val = sensor.read();
        printf("Sensor reading: %2.2f - %2.2f\r\n", val, (float)(1023-val)*10/val);
        myled = !myled;
    }
}