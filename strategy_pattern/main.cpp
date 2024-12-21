/*#include<algorithm>
#include<vector>
#include<functional>
#include<iostream>
using namespace std;*/
/*class StrategyPattern
{
public:
    virtual ~StrategyPattern(){}
    virtual void sort(std::vector<int> &s)=0;
};
class concreteStrategyPatternA : public StrategyPattern
{
public:
    //concreteStrategyPatternA(): StrategyPattern(){}
    void sort(std::vector<int> &w) override
    {
        std::sort(w.begin(),w.end());
    }
};
class concreteStrategyPatternD : public StrategyPattern
{
public:
    //concreteStrategyPatternD(): StrategyPattern(){}
    void sort(std::vector<int> &w) override
    {
        std::sort(w.begin(),w.end(),std::greater<int>());
    }
};
class Context
{
private:
    StrategyPattern *s;
public:
    Context():s(nullptr){}
    void setstrategy(StrategyPattern *q)
    {
        s=q;
    }
    void executestrategy(std::vector<int> &v)
    {
        if(s!= nullptr)
        {
            s->sort(v);
        }
    }
};*/
#include "Strategy.h"
int main()
{
    vector<int > v{1,2,3,4,5,6,7,8};
    AlgorithmA s;
    AlgorithmD t;

    Context ctx;
    ctx.set_strategy(&s);
    ctx.execute_strategy(v);
    for(const auto& p : v)
    {
        std::cout<< p <<std::endl;
    }
    ctx.set_strategy(&t);
    ctx.execute_strategy(v);
    for(const auto& p : v)
    {
        std::cout<< p <<std::endl;
    }

}