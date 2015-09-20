This is a simple example of a C++ class called Rando that has 4 functions.

A makefile is provided, but [https://github.com/google/googletest](GoogleTest) must first be installed on the development environment.

**Getting Started**

* Edit the Makefile and update this line to reflect where your googletest /include and /src directories are located:
 
`GTEST_DIR = /usr/local/include/gtest`

* Save your changes to the Makefile. Check to make sure it works with the following commands:

`make`

`./RandoTest`

The output should show that all tests have passed. *For this exercise, do not worry about warning messages unless they are __errors__*

* Once the initial tests are done, stage the changes you've made and commit them:

`git add Makefile`

`git commit -m "Describe your changes here"`

* Open **randoTest.cpp** and decide which of the functions you want to work on first, isDivisible(), isPrime(), or nearestToZero(). You can read documentation on what each function is supposed to do inside **rando.cpp**

* Think of a condition you need to test for the function you are working on. Write a new TEST in **randoTest.cpp** that tests that condition.

* Build and run the test fixture:

`make clean`

`make`

`./RandoTest`

* The test you just created should fail because the solution has not been implemented yet. Edit **rando.cpp** and fix the solution so it should pass the test (following the previous step again). If it still fails, you know right away that you need to fix that specific place in the code!

* Once your test passes, stage and commit your changes with git.

* Repeat the process until you are satisfied you have tested the function thoroughly and your solution passes all the tests. After you are done, make sure to commit your changes before you move on to the next function!
