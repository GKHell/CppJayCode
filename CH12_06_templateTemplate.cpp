#include <iostream>
#include <typeinfo>

using namespace std;

template<class T, class U> class Marvel {
public:
   int tony;
};

template<class U> class Marvel<float, U> {
public:
   short tony;
};

template<template<class T, class U> class V> class B {
 public:
   V<int, char> i;
   V<float, char> j;
};

B<Marvel> c;

int main() {
   cout << " i : "<<typeid(c.i.tony).name() << endl;
   cout << " j : "<<typeid(c.j.tony).name() << endl;
}