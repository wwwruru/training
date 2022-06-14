project('tutorial', 'cpp', version : '0.0.1')

qt5_dep = dependency('qt5', modules: ['Core'], method : 'qmake')

libFoo = library('Foo', 'Foo.cpp', dependencies : [qt5_dep])
libBar = library('Bar', 'Bar.cpp', dependencies : [qt5_dep])
libBaz = library('Baz', 'Baz.cpp', dependencies : [qt5_dep])

libs_dep = declare_dependency(include_directories : ['.'], link_with : [libFoo, libBar, libBaz])

executable('demo', 'main.cpp', dependencies : [qt5_dep,libs_dep])
