#include "Box.h"
//using namespace std;

// Implement setters and getters
void Box::setLenght(int len){
   length = len;
 }
void Box::setWidth(int wid){
  width = wid;
}
void Box::setHeight(int hei){
  height = hei;
}
int Box::getLength(){
  return length;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int vol;
  vol = length * width * height;
  return vol;
}
