#pragma once
#ifndef HEADERVJEZBA1_H
#define HEADERVJEZBA_H

//void naj_najm(int arr[], int n, int& min, int& max);


//int element(int arr[], int n, int& e);

/*struct circle
{
	int xc, yc;
	int r;
};

struct rectangle
{
	int x1, x2;
	int y1, y2;
};

void intersect(rectangle* rect, circle* cir, int n, int& cnt);*/

struct myVector
{
    int* arr;
    size_t size, capacity;

    // member functions
    void vector_new(size_t sz = 0);
    void vector_delete();
    void vector_push_back(int n);/* adds a new element at the end of the vector */
    void vector_pop_back();/* removes the last element in the vector */
    int& vector_front();/* returns a reference to the first element in the vector*/
    int& vector_back(); /* returns a reference to the last element in the vector */
    size_t vector_size(); /* returns the number of the elements in the vector */

    void print_vector();
};

#endif // !HEADERVJEZBA1_H

