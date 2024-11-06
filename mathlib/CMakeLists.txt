add_library(mathlib STATIC)

target_sources(mathlib PRIVATE src/MathFunctions.cpp)

target_include_directories(mathlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(mathlib PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(mathlib PRIVATE /W4)
endif()
