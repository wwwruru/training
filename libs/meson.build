qt5_dep = dependency('qt5', modules: ['Core'], method : 'qmake')

libFoo = shared_library('Foo', 'Foo.cpp', dependencies : [qt5_dep])
libBar = shared_library('Bar', 'Bar.cpp', dependencies : [qt5_dep])
libBaz = shared_library('Baz', 'Baz.cpp', dependencies : [qt5_dep])

libs_dep = declare_dependency(include_directories : ['.'], link_with : [libFoo, libBar, libBaz])