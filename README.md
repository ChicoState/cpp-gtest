[![Build Status](https://travis-ci.org/ChicoState/cpp-gtest.svg?branch=master)](https://travis-ci.org/ChicoState/cpp-gtest) [![Coverage Status](https://coveralls.io/repos/github/ChicoState/cpp-gtest/baadge.svg?branch=master)](https://coveralls.io/github/ChicoState/cpp-gtest?branch=master)

This is a simple example of a C++ class called Rando that has practice functions.

A makefile is provided, but [https://github.com/google/googletest](GoogleTest) must first be installed on the development environment.

**Configuring GoogleTest on Your Machine**

* Create an environment variable `GTEST_DIR` that is set to the location of the `googletest` sub-directory, within the locally cloned repo. For example:
 
`export GTEST_DIR = /usr/local/src/googletest/googletest`

* Save your changes to the Makefile. Check to make sure it works with the following commands:

`make`

`./RandoTest`
