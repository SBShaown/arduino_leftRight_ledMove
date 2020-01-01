const int leftLED = 10;
// left leds 
const int rightLED = 11;
// right leds


// runs once
void setup(){
  pinMode(leftLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
}



// runs again and again
void loop(){
  toLeft();
  delay(250);
  goRight();
  delay(250);
  
}


void toLeft(){

analogWrite(rightLED, 255); // right one is high
analogWrite(leftLED, 0);  // left one is low

// slowly decrease right led's brightness
// and increase left led's brightness

// increasing i, decreasing j
int i, j;
for (i=0,j=255;i<256,j>=0;i++,j--){
// increase left led
analogWrite(leftLED, i);
analogWrite(rightLED, j);
delay(5);
  }

  
}


void goRight(){
 
analogWrite(leftLED, 255); // right one is high
analogWrite(rightLED, 0);  // left one is low

// slowly decrease left led's brightness
// and increase right led's brightness

// increasing j, decreasing i
int i, j;
for (i=0,j=255;i<256,j>=0;i++,j--){
// increase left led
analogWrite(rightLED, i);
analogWrite(leftLED, j);
delay(5);
  }

   
  
  }
