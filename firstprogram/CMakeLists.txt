cmake_minimum_required(VERSION 3.20)
project(firstprogram)

set(CMAKE_CXX_STANDARD 14)

# source weg anpassen zum bestimmte Datei laufen lassen
# firstprogram main.cpp ... änderung
# add_executable(firstprogram src/random_number/random_number.cpp src/random_number/random_number.h)
# add_executable(firstprogram src/simple_output/simple_output.cpp src/simple_output/simple_output.h)
# add_executable(firstprogram src/variables/simple_math.cpp src/variables/simple_math.h s)
# add_executable(firstprogram src/variables/scopeofvars.cpp src/variables/scopeofvars.h)
# add_executable(firstprogram src/strings/strings.cpp src/strings/strings.h )
# add_executable(firstprogram src/constants/literals.cpp src/constants/literals.h )
# add_executable(firstprogram src/operators/assigmentoperator.cpp )
# add_executable(firstprogram src/largestnumber/largest_number.cpp src/largestnumber/largest_number.h )
# add_executable(firstprogram src/method/method.cpp src/method/method.h )
# add_executable(firstprogram src/petrol_consumption/petrol_consumption.cpp src/petrol_consumption/petrol_consumption.h )
# add_executable(firstprogram src/carfactory/carfactory.cpp src/carfactory/carfactory.h )
add_executable(firstprogram src/OOP/myClassone.cpp src/OOP/myClassone.h src/OOP/MyClasstwo.cpp src/OOP/MyClasstwo.h)