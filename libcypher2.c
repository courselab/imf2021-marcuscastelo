#include <stdio.h>

int unlock() {
    printf("Custom unlock\n");
    return 1;
}

// int cypher(int fdin, int fdout, int arg10, int arg14) {
//     printf("Custom cypher\n");

//     int var14 = 0;
//     int eax, edx;

//     // 116d:
//     int var10 = strlen(arg10);
//     int varch = fgetc(fdin);

//     if (varch == EOF) return EOF;
    
//     edx = var14;
//     eax = arg10;
//     eax += edx;
//     //TODO: movzx and movsx

//     int var18 = eax;
//     eax = var14 + 1;
//     //TODO: cdq

//     //TODO: idiv var_10h
//     var14 = edx;
//     if (var14 != 0) 
//         var14 = -var14;

//     eax = change(fdout, var18);

//     varch = eax;
//     fputc(varch, fdout);

//     return 1;
// }