set(MODULE_NAME Example)
set(PUBLIC_HEADERS
    include/Example/ExampleClass.hpp
    )

set(SOURCE_FILES
    src/ExampleClass.cpp
    )

add_library(${MODULE_NAME} STATIC ${SOURCE_FILES} ${PUBLIC_HEADERS})
target_include_directories(${MODULE_NAME} PUBLIC include PRIVATE src)
