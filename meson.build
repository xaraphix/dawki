project(
  'Dawki', 
  'cpp',
  version : '0.1',
  default_options : [
    'warning_level=3',
   	'cpp_std=c++2a', 
    'build.cpp_std=c++2a',
    'prefix=/tmp/dawki/',
    ]
  )


cxx = meson.get_compiler('cpp')


gtk_dep = dependency('gtkmm-4.0')

dawki_deps = [
  gtk_dep
]


inc = include_directories('include')

subdir('src')


exe = executable(
  'dawki',
  link_with: dawki_lib,
  install : true)
