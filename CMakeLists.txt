cmake_minimum_required(VERSION 3.26)

project(ctlibs VERSION 0.0.0 LANGUAGES CXX)
include(${CMAKE_CURRENT_SOURCE_DIR}/external/dependencies.cmake)
add_subdirectory(ctlibs)

include(GNUInstallDirs)

install(TARGETS
    ctlibaction
    ctlibactionaddon
    ctlibclouds
    ctlibcommon
    ctlibcore
    ctlibexporter
    ctlibfilters
    ctlibgdal
    ctlibio
    ctliblas
    ctliblaz
    ctliblog
    ctlibmath
    ctlibmetrics
    ctlibmodels
    ctlibmodelsextraviews
    ctlibopencv
    ctlibpcl
    ctlibplugin
    ctlibreader
    ctlibstdactions
    ctlibstep
    ctlibstepaddon
    ctlibstructure
    ctlibstructureaddon
    ctlibstructurewidget
    ctlibwidget
    nodes
    EXPORT ctlibsConfig
)
install(DIRECTORY
    ${CMAKE_CURRENT_SOURCE_DIR}/ctlibs/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

export(TARGETS
    ctlibaction
    ctlibactionaddon
    ctlibclouds
    ctlibcommon
    ctlibcore
    ctlibexporter
    ctlibfilters
    ctlibgdal
    ctlibio
    ctliblas
    ctliblaz
    ctliblog
    ctlibmath
    ctlibmetrics
    ctlibmodels
    ctlibmodelsextraviews
    ctlibopencv
    ctlibpcl
    ctlibplugin
    ctlibreader
    ctlibstdactions
    ctlibstep
    ctlibstepaddon
    ctlibstructure
    ctlibstructureaddon
    ctlibstructurewidget
    ctlibwidget
    nodes
    NAMESPACE ctlibs::
    FILE ctlibsConfig.cmake
)

install(EXPORT
    ctlibsConfig
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/ctlibs
    NAMESPACE ctlibs::
)
