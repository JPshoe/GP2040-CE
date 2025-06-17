#ifndef _Spam_B1_H_
#define _Spam_B1_H_
// Module Name
#define SpamB1Name "Spam B1"

#include "gpaddon.h"

class SpamB1 : public GPAddon
{
public:
    virtual bool available();
    virtual void setup(); // Reverse Button Setup
    virtual void preprocess() {}
    virtual void process(); // Reverse process
    virtual void postprocess(bool sent) {}
    virtual void reinit() {}
    virtual std::string name() { return SpamB1Name; }
};

#endif // _Spam_B1_H_