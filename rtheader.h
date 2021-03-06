/*/
 * Project: Wireless Proximity Analyzer
 *
 * Repository: https://github.com/ForensicTools/WirelessProximityMonitor_474-2135_Pittner-Sirianni-Swerling
 *
 * Authors:
 *		Joe Sirianni
 *		Cal Pittner
 *		Ross Swerling
 * 
 * License: Apache v2
/*/


#ifndef RTHEADER_H
#define RTHEADER_H

#include <stdint.h>

struct ieee80211_radiotap_header {
	uint8_t		it_version;		//Always 0
	uint8_t		it_pad;			//Unused padding
	uint16_t	it_len;			//Entire length of RadioTap header including data
	uint32_t	it_present;		//Fields used
} __attribute__((__packed__));


#endif //RTHEADER_H