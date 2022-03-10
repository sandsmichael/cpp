C++ in Visual Studio


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



***DEBUG



***Compile
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



*** MISC.
https://github.com/open-source-parsers/jsoncpp

python amalgamate.py

https://subscription.packtpub.com/book/application_development/9781785286902/1/ch01lvl1sec12/reading-and-writing-json-in-c






g++ hw.cpp
./a.out
g++ is the C++ compiler frontend to GCC.
gcc is the C compiler frontend to GCC.

clang bubble_sort.cpp

clang program.c -o program
clang bubble_sort.cpp -o bubble_sort
