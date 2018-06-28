#include "serialTransmission.h"

struct point3D{
  int x;
  int y;
  int z;
};

point3D point = {1,2,3};
int intergerNumber = 4;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //We send for example one struct
  st::send(point);  
  //We send for example one interger number
  st::send(intergerNumber);
  
}
