#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Calculate{
    private:
        vector<string> Name;
        vector<string> Grade;
        vector<double> score;
        double GPAresult;
        int sum1 = 0;
        int sum2 = 0;

    public:
        void InputData(){
            string tmpName, tmpGrade;
            double tmpScore;

            for(int i = 0; i < 20; ++i){
                cin >> tmpName >> tmpScore >> tmpGrade;
                Name.push_back(tmpName);
                score.push_back(tmpScore);
                Grade.push_back(tmpGrade);
            }
        }

        double GradeToNumeric(string Grade){
            if(Grade == "A+"){
                return 4.5;
            }
            if(Grade == "A0"){
                return 4.0;
            }
            if(Grade == "B+"){
                return 3.5;
            }
            if(Grade == "B0"){
                return 3.0;
            }
            if(Grade == "C+"){
                return 2.5;
            }
            if(Grade == "C0"){
                return 2.0;
            }
            if(Grade == "D+"){
                return 1.5;
            }
            if(Grade == "D0"){
                return 1.0;
            }
            if(Grade == "F"){
                return 0.0;
            }
        }

        void CalculateResult(){
            for(int i = 0; i < 20; ++i){
                if(Grade[i] == "P"){
                    continue;
                }
                else{
                    double GradeValue = GradeToNumeric(Grade[i]);
                    sum1 += score[i]*GradeValue;
                    sum2 += GradeValue;
                }
            }
            GPAresult = sum1 / sum2;
        }


         void PrintResult() const{
            cout << fixed;
            cout.precision(6);
            cout << GPAresult << endl;
            }
};



int main(){
    Calculate calc;
    calc.InputData();
    calc.CalculateResult();
    calc.PrintResult();
}
