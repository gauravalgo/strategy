//
// Created by gaurav on 21/12/24.
//

#ifndef STRATEGY_PATTERN_STRATEGY_H
#define STRATEGY_PATTERN_STRATEGY_H

#include<vector>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class AlgorithmA;
class AlgorithmD;
class Strategy {
public:
    virtual ~Strategy(){}
    virtual void sort(std::vector<int> &v)=0;
};
class Context
{
private:
    Strategy *strategy;
public:
    Context():strategy(nullptr){}
    void set_strategy(Strategy *s)
    {
        strategy=s;
    }
    void execute_strategy(std::vector<int> &v)
    {
        if(strategy!= nullptr)
        strategy->sort(v);
    }
};
class AlgorithmA : public Strategy
{
public:
    void sort(std::vector<int> &v) override
    {
        std::sort(v.begin(),v.end());
    }
};

class AlgorithmD : public Strategy
{
public:
    void sort(std::vector<int> &v) override
    {
        std::sort(v.begin(),v.end(),greater<int>());
    }
};

#endif //STRATEGY_PATTERN_STRATEGY_H
