# Minimum CMake requires version
CMAKE_MINIMUM_REQUIRED(VERSION 3.14...3.16 FATAL_ERROR)

INCLUDE(FeatureSummary)
INCLUDE(GenerateExportHeader)

IF (POLICY CMP0071)
    cmake_policy(SET CMP0071 NEW)
ENDIF()

FILE(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/VERSION" APP_VERSION)
MESSAGE(STATUS "Library version: ${APP_VERSION}")

PROJECT(QtHtml VERSION ${APP_VERSION} DESCRIPTION "Qt Html Writer Library" HOMEPAGE_URL "https://github.com/overlapped/QtHtml" LANGUAGES C CXX)

MESSAGE(STATUS "Platform detected: ${CMAKE_SYSTEM_PROCESSOR}")
MESSAGE(STATUS "OS detected: ${CMAKE_SYSTEM_NAME} ${CMAKE_SYSTEM_VERSION}")
MESSAGE(STATUS "CXX Compiler detected: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTORCC ON)
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_C_STANDARD 99)

SET(CMAKE_C_EXTENSIONS OFF)
SET(CMAKE_C_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

FIND_PACKAGE(QT NAMES Qt5 COMPONENTS Core REQUIRED)
FIND_PACKAGE(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

OPTION(BUILD_EXAMPLE "Enable build example" OFF)
OPTION(BUILD_TESTS "Enable build tests" OFF)
OPTION(BUILD_DOC "Enable build documentation" OFF)

IF(BUILD_DOC)
    FIND_PACKAGE(Doxygen REQUIRED)
    IF(DOXYGEN_FOUND)
        add_custom_target(doc ALL ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile
          WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc
          COMMENT "Generating API documentation with Doxygen"
          VERBATIM
        )
    ENDIF(DOXYGEN_FOUND)
ENDIF(BUILD_DOC)

SET(HEADERS
    QtHtml_global.hpp
    src/qhtmlabbreviation.hpp
    src/qhtmladdress.hpp
    src/qhtmlanchor.hpp
    src/qhtmlarea.hpp
    src/qhtmlarticle.hpp
    src/qhtmlaside.hpp
    src/qhtmlaudio.hpp
    src/qhtmlbase.hpp
    src/qhtmlblockquote.hpp
    src/qhtmlbody.hpp
    src/qhtmlboldface.hpp
    src/qhtmlbutton.hpp
    src/qhtmlcanvas.hpp
    src/qhtmlcaption.hpp
    src/qhtmldefines.hpp
    src/qhtmldiv.hpp
    src/qhtmldocument.hpp
    src/qhtmlelement.hpp
    src/qhtmlfooter.hpp
    src/qhtmlhead.hpp
    src/qhtmlheader.hpp
    src/qhtmlitalic.hpp
    src/qhtmllabel.hpp
    src/qhtmllink.hpp
    src/qhtmllinebreak.hpp
    src/qhtmllist.hpp
    src/qhtmlmain.hpp
    src/qhtmlmark.hpp
    src/qhtmlmeta.hpp
    src/qhtmlmeter.hpp
    src/qhtmlnav.hpp
    src/qhtmlparagraph.hpp
    src/qhtmlpre.hpp
    src/qhtmlprogress.hpp
    src/qhtmlscript.hpp
    src/qhtmlsection.hpp
    src/qhtmlform.hpp
    src/qhtmlsmall.hpp
    src/qhtmlspan.hpp
    src/qhtmlstrong.hpp
    src/qhtmlstyle.hpp
    src/qhtmlsummary.hpp
    src/qhtmltable.hpp
    src/qhtmltextarea.hpp
    src/qhtmltime.hpp
    src/qhtmltitle.hpp
    src/qhtmlutils.hpp)

SET(SOURCES
    src/qhtmlabbreviation.cpp
    src/qhtmladdress.cpp
    src/qhtmlanchor.cpp
    src/qhtmlarea.cpp
    src/qhtmlarticle.cpp
    src/qhtmlaside.cpp
    src/qhtmlbase.cpp
    src/qhtmlbody.cpp
    src/qhtmlboldface.cpp
    src/qhtmlbutton.cpp
    src/qhtmlcaption.cpp
    src/qhtmldiv.cpp
    src/qhtmldocument.cpp
    src/qhtmlelement.cpp
    src/qhtmlfooter.cpp
    src/qhtmlhead.cpp
    src/qhtmlheader.cpp
    src/qhtmlitalic.cpp
    src/qhtmllabel.cpp
    src/qhtmllink.cpp
    src/qhtmllinebreak.cpp
    src/qhtmllist.cpp
    src/qhtmlmain.cpp
    src/qhtmlmark.cpp
    src/qhtmlmeta.cpp
    src/qhtmlmeter.cpp
    src/qhtmlnav.cpp
    src/qhtmlparagraph.cpp
    src/qhtmlpre.cpp
    src/qhtmlprogress.cpp
    src/qhtmlscript.cpp
    src/qhtmlsection.cpp
    src/qhtmlform.cpp
    src/qhtmlsmall.cpp
    src/qhtmlspan.cpp
    src/qhtmlstrong.cpp
    src/qhtmlstyle.cpp
    src/qhtmlsummary.cpp
    src/qhtmltable.cpp
    src/qhtmltextarea.cpp
    src/qhtmltime.cpp
    src/qhtmltitle.cpp
    src/qhtmlutils.cpp
    )

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})
generate_export_header(${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS NO)
set_source_files_properties(${SOURCES} PROPERTIES LANGUAGE CXX)

target_include_directories(${PROJECT_NAME} PUBLIC ./src)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_compile_definitions(${PROJECT_NAME} PRIVATE QTHTML_LIBRARY)
target_compile_options(${PROJECT_NAME} PRIVATE -fstack-protector-all)

if (BUILD_EXAMPLE)
add_executable(example example/main.cpp)
target_link_libraries(example PRIVATE ${PROJECT_NAME} Qt${QT_VERSION_MAJOR}::Core)
target_include_directories(example PUBLIC ./src)
target_compile_definitions(example PRIVATE QTHTML_LIBRARY)
endif()

if (BUILD_TESTS)
enable_testing()
add_subdirectory(tests)
endif()

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
