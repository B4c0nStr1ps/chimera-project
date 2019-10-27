add_library(bsstl src/utilities.cpp  include/bsstl/assertion.hpp include/bsstl/dynamic_array.hpp include/bsstl/types.hpp)

target_include_directories(bsstl
    PUBLIC 
        $<INSTALL_INTERFACE:include>    
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_options(bsstl PRIVATE -Werror)
target_compile_features(bsstl PRIVATE cxx_std_17)

