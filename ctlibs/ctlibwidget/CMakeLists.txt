project(ctlibwidget)

set(CTLIBWIDGET_HEADERS
    ct_view/ct_abstractconfigurablewidget.h
    ct_view/ct_asciifilechoicebutton.h
    ct_view/ct_buttongroup.h
    ct_view/ct_checkbox.h
    ct_view/ct_combobox.h
    ct_view/ct_doublespinbox.h
    ct_view/ct_filechoicebutton.h
    ct_view/ct_genericconfigurablewidget.h
    ct_view/ct_groupbox.h
    ct_view/ct_lineedit.h
    ct_view/ct_multilineedit.h
    ct_view/ct_radiobutton.h
    ct_view/ct_spinbox.h
    ct_view/ct_widgetwithvaluereferenceinterface.h
    ctlibwidget_global.h
    ct_view/tools/ct_configurablewidgettodialog.h
    ct_view/tools/ct_textfileconfigurationdialog.h
    ct_view/tools/fileformat.h
    ct_view/elements/ctg_configurableelementsselector.h
    ct_element/abstract/ct_abstractconfigurableelement.h
)

set(CTLIBWIDGET_SOURCES
    ct_view/ct_asciifilechoicebutton.cpp
    ct_view/ct_buttongroup.cpp
    ct_view/ct_checkbox.cpp
    ct_view/ct_combobox.cpp
    ct_view/ct_doublespinbox.cpp
    ct_view/ct_filechoicebutton.cpp
    ct_view/ct_genericconfigurablewidget.cpp
    ct_view/ct_groupbox.cpp
    ct_view/ct_lineedit.cpp
    ct_view/ct_multilineedit.cpp
    ct_view/ct_radiobutton.cpp
    ct_view/ct_spinbox.cpp
    ct_view/tools/ct_configurablewidgettodialog.cpp
    ct_view/tools/ct_textfileconfigurationdialog.cpp
    ct_view/tools/fileformat.cpp
    ct_view/elements/ctg_configurableelementsselector.cpp
    ct_element/abstract/ct_abstractconfigurableelement.cpp
)

set(CTLIBWIDGET_FORMS
    ct_view/tools/ct_textfileconfigurationdialog.ui
    ct_view/elements/ctg_configurableelementsselector.ui
)

set(CTLIBWIDGET_TRANSLATIONS
    languages/ctlibwidget_fr.ts
    languages/ctlibwidget_en.ts
)

add_library(ctlibwidget SHARED
    ${CTLIBWIDGET_HEADERS}
    ${CTLIBWIDGET_SOURCES}
    ${CTLIBWIDGET_FORMS}
    ${CTLIBWIDGET_TRANSLATIONS}
)

target_include_directories(ctlibwidget PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
    $<INSTALL_INTERFACE:include/ctlibs/ctlibwidget>
)

target_compile_definitions(ctlibwidget PRIVATE CTLIBWIDGET_LIBRARY)
target_link_libraries(ctlibwidget
	ctlibcommon
	Qt5::Core
	Qt5::Widgets
)
