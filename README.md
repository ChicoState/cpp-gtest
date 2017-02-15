This is a simple example of a C++ class called Rando that has practice functions.

A makefile is provided, but [https://github.com/google/googletest](GoogleTest) must first be installed on the development environment.

**Installing GoogleTest on Your Machine**

* Edit the Makefile and update this line to reflect where your googletest /include and /src directories are located:
 
`GTEST_DIR = /usr/local/include/gtest`

* Save your changes to the Makefile. Check to make sure it works with the following commands:

`make`

`./RandoTest`