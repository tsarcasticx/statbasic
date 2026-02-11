#include "statbasic.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void diff(float *before, float *after, int len){
 for (int i = 0;i < len; i++) {
    printf("%f ",*(after + i) - *(before + i) );
 } printf("\n");
}
float sort(float data[]){
  // float sorted[] = {2, 4, 3, 6, 4, 5, 7, 8, 9, 10};
  float sorted[]; // this is still an error, please, don't use tha statbasic for a moment
  int len = sizeof(sorted)/sizeof(sorted[0]);

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < (len - 1); j++) {
      if (sorted[j] > sorted[j + 1]) {
        float temp = sorted[j];
        sorted[j] = sorted[j + 1];
        sorted[j + 1] = temp;
      }
    }
  }

  return 0;
};
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
