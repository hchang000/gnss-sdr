#ifndef GNSS_SDR_GLONASS_L1_CA_H_
#define GNSS_SDR_GLONASS_L1_CA_H_

#include <vector>
#include <utility> // std::pair
#include "MATH_CONSTANTS.h"

// Physical constants
const double GLONASS_C_m_s       = 299792458.0;      //!< The speed of light, [m/s]
const double GLONASS_C_m_ms      = 299792.4580;      //!< The speed of light, [m/ms]
const double GLONASS_PI          = 3.1415926535898;  //!< Pi as (NOT) defined in ICD-GLONASS-2008
const double GLONASS_TWO_PI      = 6.283185307179586;//!< 2Pi as (NOT) defined in ICD-GLONASS-2008
const double GLONASS_OMEGA_EARTH_DOT     = 7.292115e-5;  //!< Earth rotation rate, [rad/s]
const double GLONASS_GM          = 3.986004418e14;      //!< Universal gravitational constant times the mass of the Earth, [m^3/s^2]
// const double F               = -4.442807633e-10; //!< Constant, [s/(m)^(1/2)]

// Geodesic constants and parameters
const double fMa                = 0.35e9;           //!< The Gravitational constant of atmosphere, [m^3/s^2]
const double SEMI_MAJOR_AXIS    = 6378136;          //!< The Semi-major axis, [m]
const double FLATTENING         = 1/298.25784;      //!< The Orbital Flattening
const double EQUATORIAL_GRAVITY = 978032.84;        //!< The Equatorial acceleration of gravity, [mGal]
const double GRAVITY_CORRECTION = 0.87; //!< The Correction to acceleration of gravity at sea-level due to Atmosphere, [mGal]
const double SECOND_HARMONIC    = 1082625.75e-9;    //!< Second zonal harmonic of the geopotential (J_2^0)
const double FOURTH_HARMONIC    = -2370.89e-9;    //!< Fourth zonal harmonic of the geopotential (J_4^0)
const double SIXTH_HARMONIC     = 6.08e-9;    //!< Sixth zonal harmonic of the geopotential (J_6^0)
const double EIGHTH_HARMONIC    = 1.40e-11;     //!< Eighth zonal harmonic of the geopotential (J_8^0)
const double NORMAL_POTENCIAL   = 62636861.4;    //!< The Normal potential at surface of common terrestrial ellipsoid (U_0), [m^2/s^2]


// carrier and code frequencies
const double GLONASS_L1_FREQ_HZ              = 1.602e9; //!< L1 [Hz]
const double GLONASS_L1_CA_CODE_RATE_HZ      = 0.511e6;   //!< GLONASS L1 C/A code rate [chips/s]
const double GLONASS_L1_CA_CODE_LENGTH_CHIPS = 511.0;    //!< GLONASS L1 C/A code length [chips]
const double GLONASS_L1_CA_CODE_PERIOD       = 0.001;     //!< GLONASS L1 C/A code period [seconds]
const double GLONASS_L1_CA_CHIP_PERIOD       = 1.9569e-06;     //!< GLONASS L1 C/A chip period [seconds]

// GLONASS SV's orbital slots
const short int GLONASS_PRN[24] = { 1,   //Plane 1
                                    -4,  //Plane 1
                                    5,   //Plane 1
                                    6,   //Plane 1
                                    1,   //Plane 1
                                    -4,  //Plane 1
                                    5,   //Plane 1
                                    6,   //Plane 1
                                    -2,  //Plane 2
                                    -7,  //Plane 2
                                    0,   //Plane 2
                                    -1,  //Plane 2
                                    -2,  //Plane 2
                                    -7,  //Plane 2
                                    0,   //Plane 2
                                    -1,  //Plane 2
                                    4,   //Plane 3
                                    -3,  //Plane 3
                                    3,   //Plane 3
                                    2,   //Plane 3
                                    4,   //Plane 3
                                    -3,  //Plane 3
                                    3,   //Plane 3
                                    2};  //Plane 3

#endif /* GNSS_SDR_GLONASS_L1_CA_H_ */
