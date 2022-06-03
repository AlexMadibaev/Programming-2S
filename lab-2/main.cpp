#include "StringAnalyzer.h"
int main() {
    StringAnalyzer analyz("Hello World");
    analyz.addSeparator('l');
    while (analyz.printCur()){}
    analyz.resetCur();
    analyz.addSeparator('o');
    while (analyz.printCur()){}
    analyz.clearSeparators();

    StringAnalyzer analyz1("abbcabccababbaacbacb");
    analyz1.addSeparator('c');
    while(analyz1.printCur()){}
    analyz1.resetCur();

    return 0;
}