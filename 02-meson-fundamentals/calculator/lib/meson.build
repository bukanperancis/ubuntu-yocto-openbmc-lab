inc = include_directories('.')

calculator_lib = shared_library(
    'calculator',
    'calculator.cpp',
    include_directories : inc,
)

calculator_dep = declare_dependency(
    link_with : calculator_lib,
    include_directories : inc,
)
