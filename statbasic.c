#include "statbasic.h"
#include <math.h>
#include <stdio.h>

void printa(float *data, int len){
  printf("{");
  for (int i = 0; i < len; i++) {
    printf("%f ", *(data + i));
  }
  printf("}\n");
}
void diff(float *before, float *after, int len){
 for (int i = 0;i < len; i++) {
    printf("%f ",*(after + i) - *(before + i) );
 } printf("\n");
}
void sort(int data[], int len){
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < (len - 1); j++) {
      if (data[j] > data[j + 1]) {
        int swap = data[j];
        data[j] = data[j + 1];
        data[j + 1] = swap;
      }
    }
  }
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
}
float sumOfSquares(float *data, int len){
  float dataSquare = 0;
  float sum = 0;
  for (int i = 0; i < len; i++) {
    dataSquare += pow(*(data + i), 2);
    sum += *(data + i);
  }
  return (dataSquare) - (pow(sum, 2)/len);
}
float sumOfCrossProduct(float dataX[], float dataY[], int len){
  float dataSquares, sumX, sumY;
  dataSquares = 0;
  sumX = 0;
  sumY = 0;
  for (int i = 0; i < len; i++) {
    dataSquares += (dataX[i] * dataY[i]);
    sumX += dataX[i];
    sumY += dataY[i];
  }
  return (dataSquares) - ((sumX * sumY)/len);
}
float tStat(float mean, float sd) {
  return (mean) /(sd/sqrt(10));
}
