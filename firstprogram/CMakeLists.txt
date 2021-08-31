cmake_minimum_required(VERSION 3.20)
project(firstprogram)

set(CMAKE_CXX_STANDARD 14)

# source weg anpassen zum bestimmte Datei laufen lassen
# firstprogram main.cpp ... änderung
add_executable(firstprogram src/random_number/random_number.cpp src/random_number/random_number.h)
