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
sigcpp_dep = dependency('sigc++-3.0')
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

objcopy = find_program('objcopy')
widgets_config_in = 'src/config/dawki_widgets_config.json'
widgets_config_out = 'src/config/dawki_widgets_config.o'

run_command('objcopy', 
            '--input-target',
            'binary', 
            '--output-target',
            'pe-x86-64',
            '--binary-architecture',
            'i386:x86-64',
            widgets_config_in, 
            widgets_config_out)


subdir('src')

asset_resources = gnome.compile_resources(
    'dawki-resourcess',
    'assets/gresources.xml',
    source_dir: ['assets'],
)


exe = executable(
  'dawki', 
  asset_resources,
  objects: [widgets_config_out],
  link_with: dawki_lib,
  dependencies: [gio],
  install : true
)

