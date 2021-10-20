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
gio_dep = dependency('gio-2.0')

test_gtest_dep = dependency('gtest')
test_cucumber_dep = cxx.find_library('cucumber-cpp')
test_boost_dep = [
    cxx.find_library('boost_regex'),
    cxx.find_library('boost_filesystem'),
    cxx.find_library('boost_program_options'),
]

test_cucumber_deps = [test_gtest_dep, test_cucumber_dep, test_boost_dep]

dawki_deps = [
  gio_dep,
  gtk_dep,
  thread_dep,
  boost_dep
]


inc = include_directories('include')
gnome = import('gnome')
objcopy = find_program('objcopy')
dawki_layout_config_in = 'src/gui/config/app_layout_config.json'
dawki_layout_config_out = 'src/gui/config/app_layout_config.o'
dawki_appearance_config_in = 'src/gui/config/app_appearance_config.json'
dawki_appearance_config_out = 'src/gui/config/app_appearance_config.json.o'

run_command('objcopy', 
            '--input-target',
            'binary', 
            '--output-target',
            'pe-x86-64',
            '--binary-architecture',
            'i386:x86-64',
            dawki_layout_config_in,
            dawki_layout_config_out)

run_command('objcopy', 
            '--input-target',
            'binary', 
            '--output-target',
            'pe-x86-64',
            '--binary-architecture',
            'i386:x86-64',
            dawki_appearance_config_in,
            dawki_appearance_config_out)

asset_resources = gnome.compile_resources(
    'dawki-resourcess',
    'assets/gresources.xml',
    source_dir: ['assets'],
)

# Inside the subdirs dawki_core_lib, dawki_test_bundle are instantiated
subdir('src')
subdir('features')

dawki_exe = executable(
  'dawki',
  asset_resources,
  objects: [dawki_layout_config_out, dawki_appearance_config_out],
  link_with: [dawki_core_lib, dawki_gui],
  dependencies: [gio_dep],
  install : true
)

dawki_test_exe = executable(
    'dawki-test-bundle',
    'features/dawki.cc',
    test_src_files,
    asset_resources,
    objects: [dawki_layout_config_out, dawki_appearance_config_out],
    link_with: [dawki_core_lib],
    dependencies: [test_cucumber_deps] + [gio_dep],
    install: true
)
