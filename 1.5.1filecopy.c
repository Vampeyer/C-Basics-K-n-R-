#include <stdio.h>

int main()
{

int c; /*  We used int here for a very important reason ,
	    the type char , is specifically meant for storing or retrieving
			 this data.  ---
--		  != , means not equal to , and evaluates when the expression is true , or
                           in
			 such case as this , not true.

the problem is distinguishing the end of input . from valid data. the solution is
that getcher() , returns a distinctive value when there is no more input. a value
canot be distinguished from any real character. 

we must declare c to be a type , big enough to hold any value that getchar()
 returns.We can't use char since C mustt be big enough to hold any possible CHAR.
Therefore we use int.
  */

while (c != EOF )   /* the variable c contians the next character of input ,*
 			 /*usually from the keyboard*/
{
putchar(c);
c = getchar();
}


}


/*  Textbook notes   */


/* the model of input and output supported by the standard library is very simple.
test input or output , regardless of where it originates or where it goes to ,
is dealt with as STREAMS of characrters, a text stream is a sequence of
characters divided into lines. */

/*  The standard library provides several functions for reading or writing
one character at a time.    */



/* given getchar and putchar ,
  you can write a surprising amount of useful code without
 knowing anything more about input and output.

The simplest example is a program that copies its input to its output
 , one character at a time
   */

