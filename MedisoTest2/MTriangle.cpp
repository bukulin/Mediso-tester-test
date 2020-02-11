#include "MTriangle.h"

MTriangle::MTriangle(float l1, float l2, float l3)
    : mLenghth1(l1)
    , mLenghth2(l2)
    , mLenghth3(l3)
{}

bool MTriangle::setLengths(float al1, float al2, float al3)
{
    if (al1 + al2 >= al3 && al2 + al3 >= al1 && al1 * al2 * al3 != 0)
    {
        mLenghth1 = al1;
        mLenghth1 = al2;
        mLenghth1 = al3;
        return true; //data members are set
    }
    else
    {
        return false; //data members remain untouched
    }
}

bool MTriangle::isValid() const noexcept
{
    return mLenghth1 + mLenghth2 >= mLenghth3 &&
           mLenghth2 + mLenghth3 >= mLenghth1 &&
           mLenghth1 * mLenghth2 * mLenghth3 != 0;
}

float MTriangle::lenghth1()  const noexcept
{
    return mLenghth1;
}
float MTriangle::lenghth2() const noexcept
{
    return mLenghth1;
}
float MTriangle::lenghth3() const noexcept
{
    return mLenghth1;
}
