project(ctliblas)

set(CTLIBLAS_HEADERS
    ctliblas_global.h
    readers/ct_reader_lasv2.h
    readers/headers/ct_lasheader.h
    itemdrawable/las/ct_stdlaspointsattributescontainer.h
    itemdrawable/las/ct_stdlaspointsattributescontainershortcut.h
    tools/las/abstract/ct_abstractlaspointformat.h
    tools/las/ct_lascolorpacket.h
    tools/las/ct_lasdata.h
    tools/las/ct_lasdefine.h
    tools/las/ct_lasgpspacket.h
    tools/las/ct_lasnirpacket.h
    tools/las/ct_laspointformat0.h
    tools/las/ct_laspointformat1.h
    tools/las/ct_laspointformat2.h
    tools/las/ct_laspointformat3.h
    tools/las/ct_laspointformat4.h
    tools/las/ct_laspointformat5.h
    tools/las/ct_laspointformat6.h
    tools/las/ct_laspointformat7.h
    tools/las/ct_laspointformat8.h
    tools/las/ct_laspointformat9.h
    tools/las/ct_laspointformat10.h
    tools/las/ct_laspointinfo.h
    tools/las/ct_laswavepacket.h
    exporters/ct_exporter_las.h
    filters/abstract/ct_abstractfilter_las.h
    metrics/abstract/ct_abstractmetric_las.h
    mergers/ct_sameheadermerger_las.h
    mergers/ct_sameheaderformatmerger_las.h
    exporters/private/ct_laspiecebypieceprivateexporter.h
)

set(CTLIBLAS_SOURCES
    readers/ct_reader_lasv2.cpp
    readers/headers/ct_lasheader.cpp
    itemdrawable/las/ct_stdlaspointsattributescontainer.cpp
    itemdrawable/las/ct_stdlaspointsattributescontainershortcut.cpp
    tools/las/abstract/ct_abstractlaspointformat.cpp
    tools/las/ct_lascolorpacket.cpp
    tools/las/ct_lasdata.cpp
    tools/las/ct_lasgpspacket.cpp
    tools/las/ct_lasnirpacket.cpp
    tools/las/ct_laspointformat0.cpp
    tools/las/ct_laspointformat1.cpp
    tools/las/ct_laspointformat2.cpp
    tools/las/ct_laspointformat3.cpp
    tools/las/ct_laspointformat4.cpp
    tools/las/ct_laspointformat5.cpp
    tools/las/ct_laspointformat6.cpp
    tools/las/ct_laspointformat7.cpp
    tools/las/ct_laspointformat8.cpp
    tools/las/ct_laspointformat9.cpp
    tools/las/ct_laspointformat10.cpp
    tools/las/ct_laspointinfo.cpp
    tools/las/ct_laswavepacket.cpp
    exporters/ct_exporter_las.cpp
    filters/abstract/ct_abstractfilter_las.cpp
    metrics/abstract/ct_abstractmetric_las.cpp
    mergers/ct_sameheadermerger_las.cpp
    mergers/ct_sameheaderformatmerger_las.cpp
    exporters/private/ct_laspiecebypieceprivateexporter.cpp
)

set(CTLIBLAS_TRANSLATIONS
    languages/ctliblas_fr.ts
    languages/ctliblas_en.ts
)

add_library(ctliblas SHARED
    ${CTLIBLAS_HEADERS}
    ${CTLIBLAS_SOURCES}
    ${CTLIBLAS_TRANSLATIONS}
)

target_include_directories(ctliblas PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
    $<INSTALL_INTERFACE:include/ctlibs/ctliblas>
)

target_compile_definitions(ctliblas PRIVATE CTLIBLAS_LIBRARY)
target_link_libraries(ctliblas
    ctlibcommon
    ctlibreader
    ctlibexporter
    ctlibstructureaddon
    ctlibfilters
    ctlibmetrics
    LASzip
    Qt5::Core
    Qt5::Widgets
)
