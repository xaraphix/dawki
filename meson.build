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
thread_dep = dependency('threads')
boost_dep = [
    cxx.find_library('boost_thread'),
    cxx.find_library('boost_log'),
]
gio = dependency('gio-2.0')
dawki_deps = [
  gio,
  gtk_dep,
  thread_dep,
  boost_dep
]


inc = include_directories('include')
gnome = import('gnome')

subdir('src')

gresources = gnome.compile_resources(
    'dawki-resourcess',
    'assets/gresources.xml',
    source_dir: ['assets'],
)

exe = executable(
  'dawki', 
  gresources,
  link_with: dawki_lib,
  dependencies: [gio],
  install : true
)

