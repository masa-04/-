#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figure.h"
class Triangle : public Figure {
public:
    void Calc() {
        menseki = (teihen * takasa) / 2;
    }
};
#endif // TRIANGLE_H