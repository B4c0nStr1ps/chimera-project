cmake_minimum_required(VERSION 3.5)
project(chimera VERSION 1.0.0 LANGUAGES CXX)

#add bsstl library.
add_subdirectory(bs/lib/bsstl)

#add bsstl usage example project
add_subdirectory(bs/examples/bsstl-examples)

