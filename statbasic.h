#ifndef STATBASIC_H
#define STATBASIC_H

void diff(float *before, float *after, int len);
void sort(int data[], int len);
float sum(float *data, int len);
float dataSquare(float *data, int len);
float sumOfDegrees(float ySquare, float sum, int len);
float tStat(float mean, float sd);
float zScore(float data, float mean, float var);

#endif
