project(
    'calculator',
    'cpp',
    version : '1.0.0',
    default_options : [
        'cpp_std=c++17',
        'warning_level=3'
    ]
)

inc = include_directories('lib')

calculator_lib = shared_library(
    'calculator',
    'lib/calculator.cpp',
    include_directories : inc,
)

calculator_dep = declare_dependency(
    link_with : calculator_lib,
    include_directories : inc,
)

executable(
    'calculator',
    'app/main.cpp',
    dependencies : calculator_dep,
)
