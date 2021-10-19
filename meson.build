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

test_gtest_dep = dependency('gtest')
test_cucumber_dep = cxx.find_library('cucumber-cpp')
test_boost_dep = [
    cxx.find_library('boost_regex'),
    cxx.find_library('boost_filesystem'),
    cxx.find_library('boost_program_options'),
]

cucumber_deps = [test_gtest_dep, test_cucumber_dep, test_boost_dep]

dawki_deps = [
  gio,
  gtk_dep,
  thread_dep,
  boost_dep
]


inc = include_directories('include')
gnome = import('gnome')

objcopy = find_program('objcopy')
dawki_config_in = 'src/config/dawki_config.json'
dawki_config_out = 'src/config/dawki_config.o'
user_default_config_in = 'src/config/user_ui_default_config.json'
user_default_config_out = 'src/config/user_ui_default_config.json.o'

run_command('objcopy', 
            '--input-target',
            'binary', 
            '--output-target',
            'pe-x86-64',
            '--binary-architecture',
            'i386:x86-64',
            dawki_config_in, 
            dawki_config_out)

run_command('objcopy', 
            '--input-target',
            'binary', 
            '--output-target',
            'pe-x86-64',
            '--binary-architecture',
            'i386:x86-64',
            user_default_config_in, 
            user_default_config_out)


subdir('src')

asset_resources = gnome.compile_resources(
    'dawki-resourcess',
    'assets/gresources.xml',
    source_dir: ['assets'],
)


#exe = executable(
#  'dawki',
#  asset_resources,
#  objects: [dawki_config_out, user_default_config_out],
#  link_with: dawki_lib,
#  dependencies: [gio],
#  install : true
#)


dawki_dep = declare_dependency(
    include_directories : inc,
    link_with: dawki_lib,
    dependencies: [gio]
)


test_src_files = [
      'test/main.cc'
  ]

executable(
    'dawki-test',
    test_src_files,
    asset_resources,
    objects: [dawki_config_out, user_default_config_out],
    dependencies: cucumber_deps + [dawki_dep],
    install: true
)
