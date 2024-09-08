# `stdgraph` C++ module

## Introduction

I'm sorry that this is too big a name. No, this is not the official GitHub repo for standard graph library proposal nor its reference implementation. But it's...kind of.

This is my personal repack of graph-v2, the current reference implementation of C++'s standard graph library. The only difference is that the namespace is `std::graph` instead of `graph`, which they're currently using now, and it's packed into a C++ module named `stdgraph`.

And I try to keep things close to the latest proposal as possible - it's totally normal that the reference implementation be a little bit "out of sync" with the paper. But I made this to provide myself and some other fellows that might be interested in doing so (if there were) an "authentic" taste of what the paper would bring. So I'll make some modifications to keep `stdgraph` in this track, if I must do so.

## How to use?

I mean it's obvious. You see, it has another GitHub repo "graph-v2-raw" as a submodule, which, if you're bored enough to check out, should explain my attitude on packaging and build systems pretty clear. I'm lazy as fvck.

And this repo is pretty clear and self-explanatory, too. You don't even need a CMakeLists.txt or whatever. `git clone` it and add all the `*.cppm` files to your build system and make sure the settings are right (I mean, like which language and standard you're using for your project now). Compile it and you're all set.

But if you really need it (which doesn't happen), there's a `xmake.lua` which you can just `includes()` in your own `xmake.lua` and `add_deps("stdgraph")`. (Yes, as a `target`!) I don't have a personal package repo for xmake, and I don't think this is a good project to put into the official xmake repo. So I'll skip writing a package description file.

## disclaimer

I'm a lazy and stupid sod so if anything's wrong here, please let me know. If you have any advice, let me know. Really, if you have anything, let me know.