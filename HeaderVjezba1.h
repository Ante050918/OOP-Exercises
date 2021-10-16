#pragma once
#ifndef HEADERVJEZBA1_H
#define HEADERVJEZBA1_H

//void modify();

//int iteracija(int arr[], int n, int* big, int* sml);

//int rekurzija(int br[], int n, int* big, int* sml);

struct matrica
{
    int red, stupac;
    float** mat;
};

void input(matrica* mat1, int m, int n);
void random(matrica* randMat, int m, int n);
void zbrajanje(matrica mat1, matrica randMat, matrica* zbr);
void razlika(matrica mat1, matrica randMat, matrica* raz);
void mnozenje(matrica mat1, matrica randMat, matrica* mno);
void transponiranje(matrica mat1, matrica* tran);
void print(matrica printMat);
void deleteMatrix(matrica* deleteMat);

#endif // !HEADERVJEZBA1_H

