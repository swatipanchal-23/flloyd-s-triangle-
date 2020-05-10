#include <stdio.h>
Int main(){
    Int rows, i, j, number = 1;
    Printf("enter the number of rows: ");
    Scanf("%d", &rows);
    For(i=1; i<= rows; i++) {
       For (j=1; j<= i; ++j){
             Printf("%d ", number);
             ++number;
           }
            Printf("\n");
          }
          Return 0;
}
