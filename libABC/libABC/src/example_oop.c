#include "dev/seekit/libABC/example_oop.h"

#include "stdio.h"

int example_init(Example_t* ex, const char* info) {
    static uint8_t id=0;
    ex->id = id++;
    ex->info = info;
    return id;
}

int example_get_id(const Example_t* ex) {
    return ex->id;
}

const char* example_get_info(const Example_t* ex) {
    return ex->info;
}

void example_print(const Example_t* ex) {
    printf("%3d: %s\r\n", example_get_id(ex), ex->info);
    return;
}
