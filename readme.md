C++ in Visual Studio


***SFML
https://www.sfml-dev.org/tutorials/2.5/start-vc.php
In the project's properties, add:

The path to the SFML headers (<sfml-install-path>/include) to C/C++ » General » Additional Include Directories
The path to the SFML libraries (<sfml-install-path>/lib) to Linker » General » Additional Library Directories


Linker » Input » Additional Dependencies. Add all the SFML libraries that you need, for example "sfml-graphics.lib", "sfml-window.lib" and "sfml-system.lib".



Now compile the project, and if you linked to the dynamic version of SFML, don't forget to copy the SFML DLLs (they are in <sfml-install-path/bin>) to the directory where your compiled executable is. Run it, and if everything works you should see this:

(Copy all dlls from SFML bin to directory of .exe)






















***INSTALL g++ (the GNU C++ compiler) for Windows
http://www.sefidian.com/2020/05/09/installing-g-c-compiler-on-windows/


***OPEN FOLDER PROJ in VS
https://docs.microsoft.com/en-us/cpp/build/open-folder-projects-cpp?view=msvc-170
right click .cpp > configure tasks with tasks.vs.json; add:
      "command": "g++",
      "args": [
        "-g",
        "-o",
        "hello",
        "hello.cpp"
      ]
right click .cpp file > run task-main


***ADD ITEMS to VS Proj

In solution Explorer highlight/Select "Show all files" button
Press control key (to multi select) and select files with mouse click to be included in solution.
Right click on any one of highlighted file, and select "Include in project"

If you are using Visual Studio and you have the need to view or edit your CSPROJ file, while in Visual Studio, you can do so by following these simple steps:

Right-click on your project in solution explorer and select Unload Project
Right-click on the project (tagged as unavailable in solution explorer) and click "Edit yourproj.csproj". This will open up your CSPROJ file for editing.
After making the changes you want, save, and close the file. Right-click again on the node and choose Reload Project when done.


***VS SOLUTION

Container to store project files
switch views b/w solution and project veiw

In solution view, double click solution, right click root project directory > Properties

Click main project from solutions > show all files

Create src/ with in

Right Click project > Build

Add new files to Source files in solution view as well as physical location on file explorer when importing external cpp files


Install g++ compiler v 11
https://techdecodetutorials.com/c/how-to-install-mingw-c-c-compiler-in-windows-11/
MingGw G++ compiler


https://stackoverflow.com/questions/9865319/how-to-update-gcc-in-mingw-on-windows

C:\MinGW\libexec\mingw-get\guimain.exe
<or>
mingw-get update





***DEBUG


***Json

https://github.com/nlohmann/json#supported-compilers
must use g++ compiler version > 4

***Compile

g++ --version

gpp x.cpp ./a.out clang x.cpp

//compile w cpp 11 g++ -std=c++11 your_file.cpp -o your_program

g++ -std=c++11 readJson.cpp -o a.out

gpp x.cpp
./a.out
clang x.cpp

//compile w cpp 11
g++ -std=c++11 your_file.cpp -o your_program

g++ -std=c++11 readJson.cpp -o a.out

Windows VS F5 to build and run proj

https://stackoverflow.com/questions/61217385/visual-studio-code-how-to-add-arguments-for-g-compiler

g++ hw.cpp
./a.out
g++ is the C++ compiler frontend to GCC.
gcc is the C compiler frontend to GCC.

clang bubble_sort.cpp

clang program.c -o program
clang bubble_sort.cpp -o bubble_sort




*** MISC.
https://github.com/open-source-parsers/jsoncpp

python amalgamate.py

https://subscription.packtpub.com/book/application_development/9781785286902/1/ch01lvl1sec12/reading-and-writing-json-in-c





