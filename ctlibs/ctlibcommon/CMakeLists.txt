project(ctlibcommon)

add_library(ctlibcommon INTERFACE)
target_include_directories(ctlibcommon INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/ctlibs/ctlibcommon>
)
