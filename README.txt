Here's the practical work on the Yoshi and Mario course.

You can juste use "make" in the command line or if you want to check memory leaks and you have valgrind installed on your computer use "valgrind ./tests" right after the "make" !

If you don't have valgrind installed, here's the result (the most important part is at the end): 

valgrind ./tests

==7752== Memcheck, a memory error detector
==7752== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7752== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7752== Command: ./tests
==7752== 
Running main() from /home/virgile/Bureau/INSA COURS/4BIM/PROG/Polymorphism/googletest-release-1.10.0/googletest/src/gtest_main.cc
[==========] Running 7 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 1 test from GTest
[ RUN      ] GTest.test1
[       OK ] GTest.test1 (13 ms)
[----------] 1 test from GTest (23 ms total)

[----------] 3 tests from Yoshi
[ RUN      ] Yoshi.constructor
[       OK ] Yoshi.constructor (3 ms)
[ RUN      ] Yoshi.WhatAmI
[       OK ] Yoshi.WhatAmI (9 ms)
[ RUN      ] Yoshi.Accelerate
[       OK ] Yoshi.Accelerate (4 ms)
[----------] 3 tests from Yoshi (16 ms total)

[----------] 2 tests from Mario
[ RUN      ] Mario.constructor
[       OK ] Mario.constructor (2 ms)
[ RUN      ] Mario.WhatAmI
[       OK ] Mario.WhatAmI (2 ms)
[----------] 2 tests from Mario (4 ms total)

[----------] 1 test from Race
[ RUN      ] Race.every_test
[       OK ] Race.every_test (9 ms)
[----------] 1 test from Race (9 ms total)

[----------] Global test environment tear-down
[==========] 7 tests from 4 test suites ran. (90 ms total)
[  PASSED  ] 7 tests.
==7752== 
==7752== HEAP SUMMARY:
==7752==     in use at exit: 0 bytes in 0 blocks
==7752==   total heap usage: 221 allocs, 221 frees, 118,749 bytes allocated		<------ Here we can see every allocated memory was freed
==7752== 
==7752== All heap blocks were freed -- no leaks are possible					<------ This lign confirms it
==7752== 
==7752== For counts of detected and suppressed errors, rerun with: -v
==7752== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)




