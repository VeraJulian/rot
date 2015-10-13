/**
 * This program encrypts data
 * (c) Fall 2015 Julian Vera
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 
  // Check that there are only two arguments
  //  entered in command line; (./rot #)
  if(argc != 2){
    return 0;
  }

  // This variable will hold the new letters
  int x;

  // This variable will hold how many n steps forward to change each letter 
  int n;
  
  // The second element of char array is how many n steps forward to
  // advance each letter
  n = atoi(argv[1]);

  //If n is a negative number, reverse the function
  //Moving -n is equivalent to moving -n+26, until n is positive, forward
  if(n < 0)
    {
      while(n < 0)
      {
	n += 26;
      }
    }

  // This loop checks if there are any more letters to change
  while(EOF != (x=fgetc(stdin))){
    // Determine if character read is a letter
    if('a' <= x && x <= 'z'){
      // If character read is a letter, calculate the new letter
      x = ((x-'a')+n) % 26 + 'a';
    }
    if('A' <= x && x<='Z'){
      x = ((x-'A')+n) % 26 + 'A';
    }
    // Print new character (old character moved n steps forward)
    fputc(x,stdout);
  }
  return 0;
}
