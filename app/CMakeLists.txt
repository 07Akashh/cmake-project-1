add_executable(App main.cpp)

target_link_libraries(App PRIVATE mathlib)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(App PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(App PRIVATE /W4)
endif()
