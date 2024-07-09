#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
class Figure {
protected:
    float teihen, takasa, menseki;
public:
    void SetTeihen(float f) {
        teihen = f;
    }
    void SetTakasa(float f) {
        takasa = f;
    }
    void Disp() {
        std::cout << "–ÊÏ: " << menseki << std::endl;
    }
};
#endif // FIGURE_H