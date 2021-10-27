#include<iostream>
#include <ctime>
#include <iomanip>
using namespace std;

struct matrica
{
    int red, stupac;
    float** mat;
};

void input(matrica* mat1, int m, int n)
{
    mat1 -> red = m;
    mat1 -> stupac = n;
    mat1 -> mat = new float* [m];
    for (int e = 0; e < m; e++)
        mat1 -> mat[e] = new float[n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
            cin >> mat1 -> mat[i][j];
        }
    }
    cout << " " << endl;
}

void random(matrica* randMat, int m, int n)
{
    srand((unsigned)time(0));
    float broj, a, b;
    randMat -> red = m;
    randMat -> stupac = n;

    randMat -> mat = new float* [m];
    for (int e = 0; e < m; e++)
        randMat -> mat[e] = new float[n];

    cout << "Enter the number interval for elements of the second matrix:\n";
    cout << "a = ";
    cin >> a;
    cout << " " << endl;
    cout << "b = ";
    cin >> b;
    cout << " " << endl;
    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            broj = a + (rand() / (RAND_MAX / (b - a)));
            randMat -> mat[i][j] = broj;
        }
    }
}

void zbrajanje(matrica mat1, matrica randMat, matrica* zbr)
{
    int m = randMat.red;
    int n = randMat.stupac;

    zbr -> red = m;
    zbr -> stupac = n;
    zbr -> mat = new float* [m];
    for (int e = 0; e < m; e++)
        zbr->mat[e] = new float[n];
    for (int i = 0; i < mat1.red; i++)
    {
        for (int j = 0; j < mat1.stupac; j++)
            zbr -> mat[i][j] = mat1.mat[i][j] + randMat.mat[i][j];
    }
}

void razlika(matrica mat1, matrica randMat, matrica* raz)
{
    int m = randMat.red;
    int n = randMat.stupac;
    raz -> red = m;
    raz -> stupac = n;
    raz -> mat = new float* [m];
    for (int e = 0; e < m; e++)
        raz -> mat[e] = new float[n];
    for (int i = 0; i < mat1.red; i++)
    {
        for (int j = 0; j < mat1.stupac; j++)
            raz -> mat[i][j] = mat1.mat[i][j] - randMat.mat[i][j];
    }
}

void mnozenje(matrica mat1, matrica randMat, matrica* mno)
{
    mno -> red = mat1.red;
    mno -> stupac = randMat.stupac;
    mno -> mat = new float* [mat1.red];
    for (int e = 0; e < mat1.red; e++)
        mno -> mat[e] = new float[randMat.stupac];
    for (int i = 0; i < mat1.red; i++)
    {
        for (int j = 0; j < randMat.stupac; j++)
            mno -> mat[i][j] = 0;
    }
    for (int i = 0; i < mat1.red; i++)
    {
        for (int j = 0; j < randMat.stupac; j++)
        {
            for (int k = 0; k < randMat.red; k++)
            {
                mno -> mat[i][j] += mat1.mat[i][k] * randMat.mat[k][j];
            }
        }
    }
}

void transponiranje(matrica mat1, matrica* tran)
{
    int n = mat1.stupac;
    int m = mat1.red;

    tran -> red = n;
    tran -> stupac = m;

    tran -> mat = new float* [n];
    for (int e = 0; e < n; e++)
        tran -> mat[e] = new float[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tran -> mat[j][i] = mat1.mat[i][j];
        }
    }
}

void print(matrica printMat)
{
    for (int i = 0; i < printMat.red; i++)
    {
        for (int j = 0; j < printMat.stupac; j++)
        {
            cout << setprecision(4) << fixed << printMat.mat[i][j] << " ";
        }
        cout << " " << endl;
    }
}

void deleteMatrix(matrica* deleteMat)
{
    for (int i = 0; i < deleteMat -> red; i++)
        delete[]deleteMat -> mat[i];
    delete[]deleteMat -> mat;
}
