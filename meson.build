project('tutorial', 'cpp', version : '0.0.1')

qt5_dep = dependency('qt5', modules: ['Core'], method : 'qmake')
subdir('./libs')
version = meson.project_version()

executable('demo', 'main.cpp', dependencies : [qt5_dep,libs_dep], cpp_args : '-DVersion="' + version + '"')