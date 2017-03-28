#ifndef STUDENT_H
#define STUDENT_H


class Student
{   private:
        string name[];
        double assessment1;
        double assessment2;
        double assessment3;
        double averageAssessment;
    public:
        void set_name(string setName){
            name = setName;
        }

        string get_name(){
            return name;
        }

        void assessment_tests (double a, double b, double c){
            assessment1 = a;
            assessment2 = b;
            assessment3 = c;
        }

        double average_assessment(){
            return (assessment1+assessment2+assessment3)/3;
        }


        Student();
        virtual ~Student();


};

#endif // STUDENT_H
