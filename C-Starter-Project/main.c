//
//  main.c
//  Project Name
//
//  Created by Cody Zazulak.
//  All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[] = {33, 74, 98, 21, 19};
    int storedValue = 0;
    
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        int currentValue = array[i];
        if (currentValue > storedValue) {
            storedValue = currentValue;
        }
    }
    printf("%d\n", storedValue);
    return 0;
}
