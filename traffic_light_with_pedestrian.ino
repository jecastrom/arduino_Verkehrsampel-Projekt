int carRedPin = 9; // Car red LED
int carYellowPin = 4; // Car yellow LED
int carGreenPin = 7; // Car green LED
int pedRedPin = 5; // Pedestrian red LED
int pedGreenPin = 6; // Pedestrian green LED
int buttonPin = 2; // Tactile switch

void setup() {
  pinMode(carRedPin, OUTPUT);
  pinMode(carYellowPin, OUTPUT);
  pinMode(carGreenPin, OUTPUT);
  pinMode(pedRedPin, OUTPUT);
  pinMode(pedGreenPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  // Set default state: car green on, pedestrian red on
  digitalWrite(carGreenPin, HIGH);
  digitalWrite(pedRedPin, HIGH);
}

void loop() {
  // Check for pedestrian button press
  if (digitalRead(buttonPin) == HIGH) {
    // Delay after button press
    delay(5000); // 5 seconds before transition
    
    // Transition to yellow for cars
    digitalWrite(carGreenPin, LOW);
    digitalWrite(carYellowPin, HIGH);
    delay(3000); // Yellow for 3 seconds
    digitalWrite(carYellowPin, LOW);
    
    // Car red, wait before pedestrian green
    digitalWrite(carRedPin, HIGH);
    delay(5000); // 5 seconds before pedestrian green
    
    // Pedestrian green
    digitalWrite(pedRedPin, LOW);
    digitalWrite(pedGreenPin, HIGH);
    delay(15000); // Pedestrian green for 15 seconds
    
    // Pedestrian red, car stays red
    digitalWrite(pedGreenPin, LOW);
    digitalWrite(pedRedPin, HIGH);
    delay(10000); // Extra 10 seconds for car red
    
    // Transition to yellow for cars
    digitalWrite(carRedPin, LOW);
    digitalWrite(carYellowPin, HIGH);
    delay(3000); // Yellow for 3 seconds
    digitalWrite(carYellowPin, LOW);
    
    // Back to default: car green, pedestrian red
    digitalWrite(carGreenPin, HIGH);
  }
}