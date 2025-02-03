project(ctlibopencv)

set(CTLIBOPENCV_HEADERS
    ctlibopencv_global.h
)

add_library(ctlibopencv INTERFACE
    ${CTLIBOPENCV_HEADERS}
)
add_library(ctlibs::opencv ALIAS ctlibopencv)

target_include_directories(ctlibopencv INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_compile_definitions(ctlibopencv INTERFACE CTLIBOPENCV_LIBRARY)
