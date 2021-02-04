#include <stdio.h>

int main() {
    int v = 18, w = 21;
    const int *ptr = &v;
    //ptr apunta a la direccion de memoria de w
    ptr = &w;
   // *ptr = 16; // no se puede hacer un cambio d valor para ese apuntador
    
    w = 3;
    
    
    return 0;
}
  