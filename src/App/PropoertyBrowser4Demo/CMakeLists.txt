set(PROJECT_NAME PropertyBrowser4Demo)

project(${PROJECT_NAME})

set(SOURCES
    main.cpp
    MainWindow.h
    MainWindow.cpp
    MainWindow.ui
    TestObjects.h
    TestObjects.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt5::Widgets
        PropertyBrowser4
        CustomStylePlugin
)

install(TARGETS ${PROJECT_NAME} DESTINATION ".")
