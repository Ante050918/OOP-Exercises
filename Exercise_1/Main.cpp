#include "HeaderVjezba1.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// 1.zadatak----modify();

	// 2. zadatak
    matrica mat1, randMat, raz, tran, zbr, mno;
    int m1, n1, m2, n2;
    cout << "Enter number of rows and columns of matrix: " << endl;
    cin >> m1 >> n1;
    cout << " " << endl;
    input(&mat1, m1, n1);
    cout << "Entered matrix: " << endl;
    print(mat1);
    cout << "\nEnter number of rows and columns of the second matrix: " << endl;
    cin >> m2 >> n2;
    cout << " " << endl;
    random(&randMat, m2, n2);
    cout << "Random generated matrix: " << endl;
    print(randMat);
    if ((m1 == m2) && (n1 == n2))
    {
        cout << "\nSum of matrixes: " << endl;
        zbrajanje(mat1, randMat, &zbr);
        print(zbr);
        cout << " " << endl;
        cout << "Difference of matrixes: " << endl;
        razlika(mat1, randMat, &raz);
        print(raz);
        cout << " " << endl;
    }
    else
    {
        cout << "\nMatrixes can not be added and subtracted! " << endl;
    }
    if (n1 == m2)
    {
        mnozenje(mat1, randMat, &mno);
        cout << "Result of multiplication of matrixes: " << endl;
        print(mno);
        cout << " " << endl;
    }
    else
        cout << "Matrixes can not be multiplied! " << endl;
    transponiranje(mat1, &tran);
    cout << "Transposed entered matrix: " << endl;
    print(tran);
    deleteMatrix(&mat1);
    deleteMatrix(&randMat);
    deleteMatrix(&raz);
    deleteMatrix(&zbr);
    deleteMatrix(&mno);
    deleteMatrix(&tran);

	// 3.zadatak

	/*int arr[] = {1, 8, 7, 2, 9, 15, 88, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int big = arr[0];
	int sml = arr[0];

	iteracija(arr, n - 1, &big, &sml);

	cout << "Najveci broj u nizu je: " << big << endl;
	cout << "Najmanji broj u nizu je: " << sml << endl;
	*/
	

	/* 4.zadatak
	int a[] = { 5, 1, 2, 8, 9 };
	int n = sizeof(a) / sizeof(a[0]);
	int big = a[0];
	int sml = a[0];
	rekurzija(a, n - 1, &big, &sml);

	cout << "Najveci broj u nizu je: " << big << endl;

	cout << "Najmanji broj u nizu je: " << sml << endl;
	*/


	

}	
