
//
// Count of strings that can be formed using a, b and c under given //   //constraints
//

#include <stdio.h>

int countNoOfStrings ( int n, int bCount, int cCount) {  

  //
  // Sequence of the first and second if condition matters, since the first
  // condition is mandatory 
  //
  if ( bCount < 0 || cCount < 0) {
    return 0;  
   }
  
  //
  // There can be a string which exists with b and c as 0
  //
  if ( bCount == 0 && cCount == 0) {
   return 1; 
  }
  
  //
  // For every single combination, we need to add 1 to result
  //
   if ( n == 0 ) {
    return 1;
   }
  

  int result;
  //
  // Three cases : Case a, Case b and Case c
  //
  result = countNoOfStrings ( n-1,bCount, cCount);
  result = result + countNoOfStrings ( n-1, bCount-1,cCount);
  result = result + countNoOfStrings ( n-1, bCount, cCount - 1);
  return result;

}


int main() {
  
  int length = 3;
  printf (" \n Number of strings = %d", countNoOfStrings(length,1,2));
  return 0; 
}

//
// Recursion Program : Complexity - exponential
//