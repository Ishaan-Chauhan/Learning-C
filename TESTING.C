/*             
 * Author - Ishaan
 * Objective - Increment/Decrement operator evaluation
 */

#include <stdio.h>

int main(void) {
    int a, b, c, d, e;

    a = 2; 
    b = 5; 
    c = 7;

    // Note: This expression causes Undefined Behaviour in standard C
    d = ++a + ++a + ++a + a++ + a++ + ++b + ++b + b++ + ++c + c++ + a + b + c;
    printf("\nd is %d", d);

    // Note: This expression also causes Undefined Behaviour
    e = ++a + ++a + a++ + ++b + ++b + ++c + ++d;
    printf("\ne is %d", e);

    // Note: Multiple pre-increments inside a single printf is also undefined behavior
    printf("\n%d\n%d\n%d\n%d\n%d\n", ++a, ++b, ++c, ++d, ++a);

    return 0;
}
