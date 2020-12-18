#include <stdio.h>
#include <stdlib.h>

int x[100];
int Place(int k, int i){
    for(int j = 1; j < k - 1; j++){
        if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
            return 0;
    }
    return 1;
    
}