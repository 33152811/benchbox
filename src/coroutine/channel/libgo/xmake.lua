-- add requires
add_requires("libgo", {optional = true})

-- add target
target("coroutine_channel_libgo")

    -- set kind
    set_kind("binary")

    -- add files
    add_files("*.cpp")

    -- add package
    add_packages("libgo", "tbox", "base")

    -- enable to build this target?
    before_build(function (target)
        target:set("enabled", has_config("libgo") and true or false)
    end)
