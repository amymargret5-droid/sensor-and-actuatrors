// TMP36 Temperature Sensor with Arduino

int sensorPin = A0;   // TMP36 output connected to A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Read analog value from sensor
  int reading = analogRead(sensorPin);

  // Convert reading to voltage
  float voltage = reading * (5.0 / 1024.0);

  // Convert voltage to temperature (°C)
  float temperatureC = (voltage - 0.5) * 100.0;

  // Print temperature
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
