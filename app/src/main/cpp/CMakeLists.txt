
cmake_minimum_required(VERSION 3.10.2)

project("ndkcrash")

aux_source_directory(. SOURCE_MAIN)

add_library(
        native-lib
        SHARED
        ${SOURCE_MAIN}
#        native-lib.cpp
)

find_library(
        log-lib
        log)


target_link_libraries(
        native-lib
        android
#        libstlport
        ${log-lib})