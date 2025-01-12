
local bindir = "$(projectdir)/ffead-cpp-6.0-bin"

target("ffead-framework")
	set_languages("c++17")
	add_deps("ffead-modules")
	set_kind("shared")
	add_options(getOptions())
	on_load(setIncludes)
	add_files("$(projectdir)/src/framework/*.cpp")
	set_installdir(bindir)

