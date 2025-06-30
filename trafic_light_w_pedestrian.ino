int carRedPin = 9; // Car red LED
int carYellowPin = 4; // Car yellow LED
int carGreenPin = 7; // Car green LED
int pedRedPin = 5; // Pedestrian red LED
int pedGreenPin = 6; // Pedestrian green LED
int buttonPin = 2; // Tactile switch
int delay_but_press = 5000; //Delay after button press, 5 seconds before transition
int delay_car_Yellow = 5000; //Delay transition to car Yellow light
int delay_bf_pd_green = 5000; //Delay before pedestrians green light
int delay_pd_green = 20000; //Delay pedestrian green light
int delay_bf_car_yellow_after_gr_to_red_ped = 10000; // Delay car red stays red before car red off, so both
    // car red and pedestrian red stay on

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
    delay(delay_but_press); // Delay after button press
    
    // Transition to yellow for cars
    digitalWrite(carGreenPin, LOW);
    digitalWrite(carYellowPin, HIGH);
    delay(delay_car_Yellow); // Delay car Yellow
    digitalWrite(carYellowPin, LOW);
    
    // Car red, wait before pedestrian green
    digitalWrite(carRedPin, HIGH);
    delay(delay_bf_pd_green); // delay before pedestrian green
    
    // Pedestrian green
    digitalWrite(pedRedPin, LOW);
    digitalWrite(pedGreenPin, HIGH);
    delay(delay_pd_green); // Pedestrian green delay
    
    // Pedestrian red, car stays red
    digitalWrite(pedGreenPin, LOW);
    digitalWrite(pedRedPin, HIGH);
    delay(delay_bf_car_yellow_after_gr_to_red_ped); // Delay car red stays red before car red off, so both
    // car red and pedestrian red stay on
    
    // Transition to yellow for cars
    digitalWrite(carRedPin, LOW);
    digitalWrite(carYellowPin, HIGH);
    delay(delay_car_Yellow); // Delay car Yellow
    digitalWrite(carYellowPin, LOW);
    
    // Back to default: car green, pedestrian red
    digitalWrite(carGreenPin, HIGH);
  }
}