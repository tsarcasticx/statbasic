#include "statbasic.h"
#include <math.h>
#include <stdio.h>
void diff(float *before, float *after, int len){
 for (int i = 0;i < len; i++) {
    printf("%f ",*(after + i) - *(before + i) );
 } printf("\n");
}
float sum (float *data, int len){
  float counter = 0;
  for (int i = 0; i < len; i++) {
    counter += *(data + i);
  }
  return counter;
}

float zScore(float data, float mean, float var) {
  return (data - mean)/sqrt(var);
};

float dataSquare(float *data, int len){
  float counter = 0;
  for (int i = 0; i < len; i++) {
    counter += pow(*(data + i), 2);
  }
  return counter;
}

float sumOfDegrees(float ySquare, float sum, int len){
  return (ySquare) - (pow(sum, 2)/len);
}

float tStat(float mean, float sd) {
  return (mean) /(sd/sqrt(10));
}
