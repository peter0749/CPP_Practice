#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

int main(void) {
    std::vector<std::string> c;
    std::ifstream filein("test.txt");
    std::ofstream fileout("out.txt");
    if(!filein||!fileout) throw std::runtime_error("IO error!");
    std::string s;
    while( filein>>s) {
        c.push_back(s);
    }
    filein.close(); filein.clear();
    for(std::vector<std::string>::iterator i=c.begin(); i!=c.end(); ++i) {
        fileout<<*i<<std::endl;
    }
    fileout.close(); fileout.clear();
    return 0;
}
