set(MODULE_NAME AnotherExample)
set(PUBLIC_HEADERS
    include/AnotherExample/AnotherExampleClass.hpp
    )

set(SOURCE_FILES
    src/AnotherExampleClass.cpp
    )

add_library(${MODULE_NAME} STATIC ${SOURCE_FILES} ${PUBLIC_HEADERS})
target_include_directories(${MODULE_NAME} PUBLIC include PRIVATE src)