#ifndef NTP_REFIDSMEAR_H
#define NTP_REFIDSMEAR_H

#include "ntp_fp.h"

extern l_fp convertRefIDToLFP(uint32_t r);
extern uint32_t convertLFPToRefID(l_fp num);

#endif /* NTP_REFIDSMEAR_H */
