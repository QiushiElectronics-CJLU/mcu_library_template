add_library(libABC STATIC)

target_sources(libABC PRIVATE
        src/libABC.c
        src/example_oop.c
)

target_include_directories(libABC PUBLIC inc)

target_link_libraries(libABC PRIVATE stm32cubemx)
