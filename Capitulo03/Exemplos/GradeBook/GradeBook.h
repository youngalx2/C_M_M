#include <string>
using std::string;

class GradeBook
{
public:
    GradeBook( string );
    void setGradeBook( string );
    string getGradeBook();
    void displayMessage();
private:
    string nomeDoCurso;
};
