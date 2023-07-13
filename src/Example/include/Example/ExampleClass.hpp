#include <string>

class ExampleClass
{
    private:
        std::string stringParam;
        int intParam;
    
    public:
        void setStringParam(const std::string);
        void setIntParam(const int);

        std::string getStringParam() const;
        int getIntParam() const;

        ExampleClass() : stringParam("No param given"), intParam(-1){};
        ExampleClass(const std::string stringParam, const int intParam) : stringParam(stringParam), intParam(intParam){};
};