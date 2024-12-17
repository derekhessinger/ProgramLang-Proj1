/**
 * Extension: floating point add 1 stays the same
 *
 * Derek Hessinger
 * 9/18/24
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main() {
	// Begin with the float at 1
    float f = 1.0f;

    // Loop through the max float value adding one each time
    for (f = 1.0f; f < FLT_MAX; f += 1.0f) {
    
    	// If the float plus itself equals one, print out the number and break
        if (f + 1.0f == f) {
            printf("Number which returns itself after adding 1: %e\n", f);
            break;
        }
    }

    return 0;
}
