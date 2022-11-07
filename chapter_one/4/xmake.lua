set_languages("c++20")

set_config("buildir", "buildir")
target("project")
    set_kind("binary")
    add_files("src/*.cpp", "src/*.ixx")