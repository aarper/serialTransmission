#include "serialTransmission.h"

struct point3D{
  int x;
  int y;
  int z;
};

//Need be declared

point3D point;
int intergerNumber;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //We receive for example one struct
  st::receive(point); 
   
  //We receive for example one interger number
  st::receive(intergerNumber);
  
}
