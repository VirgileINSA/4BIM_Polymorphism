Here's the practical work on the Yoshi and Mario course.

You can juste use "make" in the command line and then run the script with "./main" or if you want to check memory leaks and you have valgrind installed on your computer use "valgrind ./main" !

If you don't have valgrind installed, here's the result : 

valgrind ./main

==6154== Memcheck, a memory error detector
==6154== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6154== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6154== Command: ./main
==6154== 

I am 3 crested Yoshi
And I am Mario
Yoshi and Mario are starting at speed 0
Mario is now at speed 4
Yoshi is now at speed 7

What type of course do you want to run ? (type either it or rb) : it

Both Yoshis have the same speed as expected !
Yoshi is faster than Mario as we predicted it !

==6154== 
==6154== HEAP SUMMARY:
==6154==     in use at exit: 0 bytes in 0 blocks
==6154==   total heap usage: 9 allocs, 9 frees, 74,872 bytes allocated
==6154== 
==6154== All heap blocks were freed -- no leaks are possible
==6154== 
==6154== For counts of detected and suppressed errors, rerun with: -v
==6154== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
