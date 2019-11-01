#include <iostream>
using namespace std;
string AppVersion = "1.0.0";
int main(int argc,char **argv);
void ArgSolve(const string& gg);
void ShowVersion();
void ExecuteApp(const string& filename);
int main(int argc,char **argv) {
    ios::sync_with_stdio(false);
    for (int i = 1; i < argc; ++i) {
        ArgSolve(string(argv[i]));
    }
    return 0;
}
#define AutoLength(length,tolength) (length) < (tolength) ? (length) : (tolength)
void ArgSolve(const string& gg){
    if(gg == "-v" || "--version"){
        ShowVersion();
    }
    auto length = gg.length();
    if(gg.substr(0, AutoLength(length,2)) == "-e" || gg.substr(0, AutoLength(length,9)) == "--execute"){
        ExecuteApp((gg.substr(0, 9) == "--execute") ? gg.substr(9) : gg.substr(2));
    }
}
void ShowVersion(){
    cout << "Fast VM(Fvm) Runtime \"" << AppVersion << "\"" << endl;
    cout << "Compiled in " << __DATE__ << " " << __TIME__ << endl;
    cout << "Github: github.com/lwingteam/FVM" << endl;
}
void ExecuteApp(const string& filename){

}