add_languages("c++latest")
add_rules("mode.debug", "mode.release")

target("stdgraph")
    set_kind("moduleonly")
    add_files("*.cppm")