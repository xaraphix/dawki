src_files = [
'box_widget/containers/docker_containers_box.cc',
'box_widget/root/app_content_box.cc',
'box_widget/root/app_navigation_box.cc',
'box_widget/root/app_root_window_box.cc',
'box_widget/root/app_window_actions_box.cc',
'common/css_initializer.cc',
'common/css_source_provider.cc',
'common/dawki_config_parser.cc',
'common/widgets/base_widget.cc',
'common/widgets/button.cc',
'logging/logging.cc',
'main.cc',
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
