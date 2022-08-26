#define trigPin A4
#define echoPin A5
#define trig A2
#define echo A3
#define tr 3
#define ec 2
#define teee 8
#define eee 8
int ledPin= 6; 
int led1= 7;
int le= 5;
int leee= 5;
int duration, distance; //to measure the distance and time taken 
int dur, dis;
int du, di;
int duu, dee;
void setup() {
        Serial.begin (9600); 
        //Define the output and input objects(devices)
        pinMode(trigPin, OUTPUT); 
        pinMode(echoPin, INPUT);
        pinMode(ledPin, OUTPUT);
         pinMode(trig, OUTPUT); 
        pinMode(echo, INPUT);
        pinMode(led1, OUTPUT);
         pinMode(tr, OUTPUT); 
        pinMode(ec, INPUT);
        pinMode(le, OUTPUT);
          pinMode(teee, OUTPUT); 
        pinMode(eee, INPUT);
        pinMode(leee, OUTPUT);
        
}

void loop()
{

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;
    //when distance is greater than or equal to 200 OR less than or equal to 0,the buzzer and LED are off
  if (distance >= 20 || distance <= 0) 
        {
        Serial.println("no object detected");
        digitalWrite(ledPin,LOW);
        }
  else {
        Serial.println("object detected \n");
        Serial.print("distance= ");              
        Serial.print(distance);
        digitalWrite(ledPin,HIGH);
  }
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    dur = pulseIn(echo, HIGH);
    dis = (dur/2) / 29.1;
    //when distance is greater than or equal to 200 OR less than or equal to 0,the buzzer and LED are off
  if (dis >= 20 || dis <= 0) 
        {
        Serial.println("no object detected");
        digitalWrite(led1,LOW);
        }
  else {
        Serial.println("object detected \n");
        Serial.print("dis= ");              
        Serial.print(dis);
        digitalWrite(led1,HIGH);
  }

  digitalWrite(tr, HIGH);
    delayMicroseconds(10);
    digitalWrite(tr, LOW);
    du = pulseIn(ec, HIGH);
    di = (du/2) / 29.1;
    //when distance is greater than or equal to 200 OR less than or equal to 0,the buzzer and LED are off
  if (di >= 20 || di <= 0) 
        {
        Serial.println("no object detected");
        digitalWrite(le,LOW);
        }
  else {
        Serial.println("object detected \n");
        Serial.print("di= ");              
        Serial.print(di);
        digitalWrite(le,HIGH);
  }

  digitalWrite(teee, HIGH);
    delayMicroseconds(10);
    digitalWrite(teee, LOW);
    duu = pulseIn(eee, HIGH);
    dee = (duu/2) / 29.1;
    //when distance is greater than or equal to 200 OR less than or equal to 0,the buzzer and LED are off
  if (dee >= 20 || dee <= 0) 
        {
        Serial.println("no object detected");
        digitalWrite(leee,LOW);
        }
  else {
        Serial.println("object detected \n");
        Serial.print("dee= ");              
        Serial.print(dee);
        digitalWrite(leee,HIGH);
  }
   
}
