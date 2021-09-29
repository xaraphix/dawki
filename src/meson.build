src_files = [
'config/dawki_config_parser.cc',
'css/css_initializer.cc',
'css/css_source_provider.cc',
'logging/logging.cc',
'main.cc',
'widget/base/widget.cc',
'widget/box/app_root/app_root_window_box.cc',
]

dawki_lib = static_library(
  'dawki_gui',
  src_files,
  dependencies: dawki_deps,
  include_directories: [inc]
)
