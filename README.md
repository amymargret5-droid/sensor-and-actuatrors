# TMP36 Temperature Sensor with Arduino

## Components Used
- Arduino Uno
- TMP36 Temperature Sensor
- Breadboard
- Jumper wires

## Connections
| TMP36 Pin | Arduino |
|------------|---------|
| +Vs | 5V |
| Vout | A0 |
| GND | GND |

## Working
The Arduino reads the analog voltage from the TMP36 sensor and converts it into temperature in Celsius.

## Arduino Code

```cpp
int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * (5.0 / 1024.0);
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
