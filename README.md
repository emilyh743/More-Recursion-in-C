# More-Recursion-in-C

Computer Organization course assignment in C.

ex1.c

Program involves solving a maze, i.e., finding a path from start to finish without going through walls. This lab is an exercise in recursion as well as 2-D matrices whose maximum size is known.

The program implements a simple recursive method for solving a maze. Instead of calling the method generateMaze(), the C program reads in the maze from the standard input. Our main() function reads in the maze, initializes the three matrices maze, wasHere and correctPath, then calls recursiveSolve(), and finally prints the maze with the path identified.

Assume the width and height of the maze are provided at run time, but the size of the maze will not exceed 100x100, so storage for the 2-D maze is provided by a fixed-size 100x100 array. At runtime, however, only part of the array is actually used, for a total of height * width entries.

The maze itself will be read from standard input. First its width and height will be present in the input (in that order), followed by the maze, one row at a time. A '*' character represents a wall, and the space character ' ' represents open space through which one can move (i.e., a corridor). One point in the maze will have an 'S' to indicate "start", and one point will have an 'F' to indicate "finish".

Your task is to use the recursive algorithm to find the path, and indicate the path on the maze using the '.' character, and print the maze with the path on the standard output.


ex2.c

In this exercise, you are to write a recursive implementation of a function bedtimestory() that takes a sequence of words and spins them into a story, as follows. If the input to the function bedtimestory() is this sequence of strings—"child", "frog", "bear", "weasel"—then it prints the following output:

A child couldn't sleep, so her mother told a story about a little frog,
  who couldn't sleep, so the frog's mother told a story about a little bear,
    who couldn't sleep, so the bear's mother told a story about a little weasel,
      ... who fell asleep.
    ... and then the little bear fell asleep;
  ... and then the little frog fell asleep;
... and then the child fell asleep.    


(The number of strings that bedtimestory() will be called with will be determined at runtime, not to exceed 20.)
