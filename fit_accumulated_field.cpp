////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2021 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.47Release
// Tag = production/akw/21.47.00-0-geec27411
////////////////////////////////////////////////////////////////////////////////


#include "fit_accumulated_field.hpp"

namespace fit
{

AccumulatedField::AccumulatedField()
    : lastValue(0), accumulatedValue(0)
{
}

AccumulatedField::AccumulatedField(const FIT_UINT16 newMesgNum, const FIT_UINT8 destFieldNum)
    : mesgNum(newMesgNum), destFieldNum(destFieldNum), lastValue(0), accumulatedValue(0)
{
}

FIT_UINT32 AccumulatedField::Accumulate(const FIT_UINT32 value, const FIT_UINT8 bits)
{
    FIT_UINT32 mask = ((FIT_UINT32) 1 << bits) - 1;

    accumulatedValue += (value - lastValue) & mask;
    lastValue = value;

    return accumulatedValue;
}

FIT_UINT32 AccumulatedField::Set(FIT_UINT32 value)
{
    accumulatedValue = value;
    this->lastValue = value;
    return accumulatedValue;
}

} // namespace fit
