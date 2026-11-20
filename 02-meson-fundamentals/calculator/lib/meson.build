inc = include_directories('.')

calculator_lib = shared_library(
    'calculator',
    'calculator.cpp',
    include_directories : inc,
    install : true,
)

calculator_dep = declare_dependency(
    link_with : calculator_lib,
    include_directories : inc,
)

install_headers(
    'calculator.hpp',
    subdir : 'calculator',
)
