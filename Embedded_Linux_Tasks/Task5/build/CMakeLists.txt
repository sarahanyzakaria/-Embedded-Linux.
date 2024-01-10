Cmake_minimum_required(VERSION 3.2...3.7)
project(calculator
	DESCRIPTION "calcultaor project")
add_library(operation STATIC addition.c subtraction.c multiplication.c division.c modulus.c)
target_include_directories(operation INTERFACE include)
add_executable(Calculator main.c)
