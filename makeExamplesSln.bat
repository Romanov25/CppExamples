rd /s /q _BIN
rd /s /q _BUILD
md _BUILD
cd _BUILD
md MSVC19_64
cd MSVC19_64
cmake -G "Visual Studio 15 2017" -A x64 cd ../..
pause
CppExamples.sln