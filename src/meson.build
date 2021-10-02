src_files = [
'config/dawki_config_parser.cc',
'css/css_initializer.cc',
'css/css_source_provider.cc',
'logging/logging.cc',
'main.cc',
'widget/base/widget.cc',
'widget/box/app_root/app_content_box.cc',
'widget/box/app_root/app_content_header_box.cc',
'widget/box/app_root/app_navigation_box.cc',
'widget/box/app_root/app_navigation_header_box.cc',
'widget/box/app_root/app_navigation_items_box.cc',
'widget/box/app_root/app_root_box.cc',
'widget/box/app_root/app_root_window.cc',
'widget/box/app_root/app_window_actions_box.cc',
'widget/box/docker_containers/docker_containers_box.cc',
'widget/button/close.button.cc',
'widget/button/maximize.button.cc',
'widget/button/minimize.button.cc',
]

dawki_lib = static_library(
  'dawki_gui',
  src_files,
  dependencies: dawki_deps,
  include_directories: [inc]
)
