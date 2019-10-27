add_executable(bsstl-example main.cpp)
target_compile_options(bsstl-example PRIVATE -Werror)
target_compile_features(bsstl-example PRIVATE cxx_std_17)

target_link_libraries(bsstl-example PRIVATE bsstl)