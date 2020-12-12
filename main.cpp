#include "DatabaseManager.hpp"
#include <fstream>
int main(int argc, char const *argv[])
{

    DatabaseManager run;
    if (argc == 3) {
         ifstream facultyInFile;
        ifstream studentInFile;
   

        studentInFile.open(argv[1]);
        facultyInFile.open(argv[2]);
        run.setUpStudentTree(argv[1]);
        run.setUpFacultyTree(argv[2]);
    } else if (argc == 2) {
        cout << "file couldnt be read" << endl;
    }
    
    run.runSimulation();
    return 0;
}
