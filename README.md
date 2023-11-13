# sfml-vs2022

[![MSBuild](https://github.com/nathanrosspowell/sfml-vs2022/actions/workflows/msbuild.yml/badge.svg)](https://github.com/nathanrosspowell/sfml-vs2022/actions/workflows/msbuild.yml)

![image](https://github.com/nathanrosspowell/sfml-vs2022/assets/123867/1acb1f08-8e26-4444-ab2c-20fb203fc6ee)

[Visual Studio 2022][vs] project with SFML setup for all x86, x64, dynamic link and static link combinations, for Windows.

## SFML Version

> Version: [`2.6.1`][sfmlversion]

This template is setup to have no version number in the folder structure or solution files.
The intention is to allow a drop in replacement of the `bin`, `lib` and `include` folders without any other edits (of course limited to versions that are backwards compatible).
It's important to note that `x64` and `x86` folders in the path server 32 bit and 64 bit respectivly.

## Visual Studio Configurations

This template provides `8` potential ways to build:

| Configuration   | x86 | x64 | 
|-----------------|-----|-----|
| Debug-Dynamic   | 1   | 2   | 
| Release-Dynamic | 3   | 4   | 
| Debug-Static    | 5   | 6   | 
| Release-Static  | 7   | 8   | 

All of these will compile and run out of the box.

## Delete and Rename as Needed

This template is a starting point that offers comprehensive coverage of SFML and Visual Studio's advertised settings.
If you don't ever plan to support a linking or platform type, toy can remove it from you solution.

The UI options to rename configurations from inside of Visual Studio does not cover everything.
It's recommended to use a text editor and find and replace, for example, `Debug-Static` with the name of your choice.

## Extra Credits

* The setup is based on the instructions from the [SFTML Tutorial][tut] for Visual Studio.
* The [`.gitignore`][gitignore] is based on the default Visual Studio suggestions from GitHub.
* The [monogram][monogram] font which is CC9
 

[vs]: https://visualstudio.microsoft.com/downloads/ "Download Visual Studio"
[tut]: https://www.sfml-dev.org/tutorials/2.6/start-vc.php  "SFML with Visual Studio"
[gitignore]: https://github.com/github/gitignore/blob/main/VisualStudio.gitignore ".gitnignore for Visual Studio"
[sfmlversion]: https://github.com/SFML/SFML/releases/tag/2.6.1 "SFML 2.6.1"
[monogram]: https://datagoblin.itch.io/monogram "Monogram is a monospace bitmap font, free and CC0!"
[cc0]: https://creativecommons.org/publicdomain/zero/1.0/ "creativecommons zero"
