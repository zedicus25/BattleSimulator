#include "c_Bow.h"

int c_Bow::attack()
{
    c_Arrow* arr = this->quiver->takeArrow();
    if (arr != nullptr && this->quiver->notEmpty()) {
        this->numbersOfUses--;
        int attack = arr->attack();
        delete[] arr;
        return this->damage + this->coef + attack;
    }
    return 1;
}
