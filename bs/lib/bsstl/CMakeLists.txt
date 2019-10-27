add_library(bsstl include/bsstl/base.hpp include/bsstl/platform.hpp src/platform.cpp)

target_include_directories(bsstl
    PUBLIC 
        $<INSTALL_INTERFACE:include>    
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_options(bsstl PRIVATE -Werror)
target_compile_features(bsstl PRIVATE cxx_std_17)

