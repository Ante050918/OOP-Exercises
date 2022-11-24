#pragma once
#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>

using namespace std;

template<typename TP>
void sort_arr(TP a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

template<>
void sort_arr<char>(char a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tolower(a[i]) < tolower(a[j])) {
                swap(a[i], a[j]);
            }
        }
    }
}
#endif HEADER_HPP
