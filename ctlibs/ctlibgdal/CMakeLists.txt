project(ctlibgdal)

set(CTLIBGDAL_HEADERS
    tools/ct_gdaltools.h
)

add_library(ctlibgdal INTERFACE
    ${CTLIBGDAL_HEADERS}
)

target_include_directories(ctlibgdal INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
    $<INSTALL_INTERFACE:include/ctlibs/ctlibgdal>
)

target_compile_definitions(ctlibgdal INTERFACE CTLIBGDAL_LIBRARY)
target_link_libraries(ctlibgdal
    INTERFACE
        ctlibopencv
)
