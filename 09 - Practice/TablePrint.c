#include <stdio.h>

void Pt(int n, int i) {
    
    if (i > 10) {
        return;
    }

   
    printf("%d x %d = %d\n", n, i, n * i);
    
   
    Pt(n, i + 1);
}

void main() {
   
    Pt(5, 1);
}
