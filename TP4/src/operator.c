#include "operator.h"

int calculer(int num1, int num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return (num2 != 0) ? num1 / num2 : 0;
        case '%': return (num2 != 0) ? num1 % num2 : 0;
        case '&': return num1 & num2;
        case '|': return num1 | num2;
        case '~': return ~num1;
        default:  return 0;
    }
}
