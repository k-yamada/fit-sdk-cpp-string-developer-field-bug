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


#if !defined(FIT_MAGNETOMETER_DATA_MESG_HPP)
#define FIT_MAGNETOMETER_DATA_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class MagnetometerDataMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 SampleTimeOffset = 1;
       static const FIT_UINT8 MagX = 2;
       static const FIT_UINT8 MagY = 3;
       static const FIT_UINT8 MagZ = 4;
       static const FIT_UINT8 CalibratedMagX = 5;
       static const FIT_UINT8 CalibratedMagY = 6;
       static const FIT_UINT8 CalibratedMagZ = 7;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    MagnetometerDataMesg(void) : Mesg(Profile::MESG_MAGNETOMETER_DATA)
    {
    }

    MagnetometerDataMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of sample_time_offset
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSampleTimeOffset(void) const
    {
        return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sample_time_offset field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSampleTimeOffsetValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the compass sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in cmps_x and cmps_y and cmps_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSampleTimeOffset(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the compass sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in cmps_x and cmps_y and cmps_z
    ///////////////////////////////////////////////////////////////////////
    void SetSampleTimeOffset(FIT_UINT8 index, FIT_UINT16 sampleTimeOffset)
    {
        SetFieldUINT16Value(1, sampleTimeOffset, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of mag_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumMagX(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of mag_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMagXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns mag_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetMagX(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set mag_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetMagX(FIT_UINT8 index, FIT_UINT16 magX)
    {
        SetFieldUINT16Value(2, magX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of mag_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumMagY(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of mag_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMagYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns mag_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetMagY(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set mag_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetMagY(FIT_UINT8 index, FIT_UINT16 magY)
    {
        SetFieldUINT16Value(3, magY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of mag_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumMagZ(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of mag_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMagZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns mag_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetMagZ(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set mag_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetMagZ(FIT_UINT8 index, FIT_UINT16 magZ)
    {
        SetFieldUINT16Value(4, magZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_mag_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedMagX(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_mag_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedMagXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_mag_x field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedMagX(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_mag_x field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedMagX(FIT_UINT8 index, FIT_FLOAT32 calibratedMagX)
    {
        SetFieldFLOAT32Value(5, calibratedMagX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_mag_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedMagY(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_mag_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedMagYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_mag_y field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedMagY(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_mag_y field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedMagY(FIT_UINT8 index, FIT_FLOAT32 calibratedMagY)
    {
        SetFieldFLOAT32Value(6, calibratedMagY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_mag_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedMagZ(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_mag_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedMagZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_mag_z field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedMagZ(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_mag_z field
    // Units: G
    // Comment: Calibrated Magnetometer reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedMagZ(FIT_UINT8 index, FIT_FLOAT32 calibratedMagZ)
    {
        SetFieldFLOAT32Value(7, calibratedMagZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_MAGNETOMETER_DATA_MESG_HPP)
