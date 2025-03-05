cmake_minimum_required(VERSION 3.27)
project(atm_sd)

set(CMAKE_CXX_STANDARD 17)

add_executable(atm_sd main.cpp
        vectordinamic.h
        vectordinamic.cpp
        colectie.h
        colectie.cpp
        pereche.h
        pereche.cpp
        atm.h
        atm.cpp
        tranzactie.h
        tranzactie.cpp
        UI.h
        UI.cpp)
