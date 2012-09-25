//
//  harvest.h
//  harvest
//
//  Created by David R. Stites on 9/24/12.
//
//

#ifndef harvest_harvest_h
#define harvest_harvest_h

#include <sys/types.h>

#pragma pack(1)
typedef struct harvest {
  u_int8_t msg_type; /* 1 byte */
  unsigned long long msg_id; /* 4 bytes */
  unsigned long long timestamp; /* 4 bytes */
  u_int8_t src[6]; /* 1 bytes x 6 = 6 bytes */
  u_int8_t dst[6]; /* 1 bytes x 6 = 6 bytes */
  u_int8_t bssid[6]; /* 1 bytes x 6 = 6 bytes */
  int8_t rssi; /* 1 bytes */
  char ssid[32]; /* 32 bytes */
  u_int8_t stn_id; /* 1 byte */
} harvest;
#pragma pack(0)

#endif