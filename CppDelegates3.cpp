#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <unordered_map>
#include <map>
using namespace std;

namespace NS
{

#define AddKeyword(Key, Function) \
 keyword_dict.insert({ Key, [this](vector<string> params, string& res, int* idx) { return this->Function(params, res, idx); } });

  class Base;
  typedef bool (Base::* OperatorDelegate)(vector<string> parameters, string& result, int* i);

  class Base
  {
  public:
    unordered_map<string, function<bool(vector<string>, string&, int*)>> keyword_dict;

    virtual bool invokeOperator(const string& key, vector<string> parameters, string& result, int* i)
    {
      auto it = keyword_dict.find(key);
      if (it != keyword_dict.end())
      {
        return it->second(parameters, result, i);
      }
      return false;
    }

    virtual ~Base() {}
  };

  //================================================================
  typedef 
  class A : public Base
  {
  
  public:
    bool funcOne(vector<string> parameters, string& result, int* i)
    {
      cout << "A::funcOne" << endl;
      result = "Greetings";
      *i = 10;
      return true;
    }
    bool funcTwo(vector<string> parameters, string& result, int* i)
    {
      cout << "A::funcTwo" << endl;
      return true;
    }

    A()
    {
      //keyword_dict.insert({ "One", [this](vector<string> params, string& res, int* idx) { return this->funcOne(params, res, idx); } });
      //keyword_dict.insert({ "Two", [this](vector<string> params, string& res, int* idx) { return this->funcTwo(params, res, idx); } });
      //#define AddKeyword(key, func) \
      //  keyword_dict.insert({ key, [this](vector<string> params, string& res, int* idx) { return this->func(params, res, idx); } })
      AddKeyword("One", funcOne);
      AddKeyword("Two", funcTwo);
    }
  };

  class B : public Base
  {

  public:
    bool funcThree(vector<string> parameters, string& result, int* i)
    {
      cout << "B::funcThree" << endl;
      return true;
    }
    bool funcFour(vector<string> parameters, string& result, int* i)
    {
      cout << "B::funcFour" << endl;
      return true;
    }

    B()
    {
      //keyword_dict.insert({ "Three", [this](vector<string> params, string& res, int* idx) { return this->funcThree(params, res, idx); } });
      //keyword_dict.insert({ "Four", [this](vector<string> params, string& res, int* idx) { return this->funcFour(params, res, idx); } });
     //#define AddKeyword(key, func) \
     //   keyword_dict.insert({ key, [this](vector<string> params, string& res, int* idx) { return this->func(params, res, idx); } })
      AddKeyword("Three", funcThree);
      AddKeyword("Four", funcFour);
    }
  };
}

using namespace std;
using namespace NS;
int main()
{
  A* a = new A;
  B* b = new B;

  string result;
  int i = 0;
  vector<string> v = {"a","b", "c"};
  bool bresult = a->invokeOperator("One", v, result, &i);
     cout << bresult << " " << result << "  " << to_string(i) << endl;
  a->invokeOperator("Two", {}, result, &i);
  b->invokeOperator("Three", {}, result, &i);
  b->invokeOperator("Four", {}, result, &i);

  delete a;
  delete b;
  return 0;
}



