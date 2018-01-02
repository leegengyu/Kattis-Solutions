#include <stdio.h>

int main(void) {
    int initial, extra, rate, total, drank = 0;
    
    scanf("%d %d %d", &initial, &extra, &rate);
    
    total = initial + extra;
    
    while(total >= rate) {
        total -= rate;
        drank++, total++;
    }
    
    printf("%d\n", drank);
    
    return 0;
}