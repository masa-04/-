#ifndef SQUARE_H
#define SQUARE_H
#include "Figure.h"
class Square : public Figure {
public:
    void Calc() {
        menseki = teihen * takasa;
    }
};
#endif // SQUARE_H