#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/* ***************************PART2:TODO define********************************** */
/* STEP_1(REQUIRED):Change config table. */
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP0 {\
0x42,0x00,0x05,0x20,0x03,0x0A,0x8D,0x00,\
0x01,0x0A,0x1E,0x0F,0x55,0x3C,0x03,0x05,\
0x00,0x00,0x0A,0x00,0x00,0x00,0x06,0x18,\
0x1A,0x1E,0x14,0x94,0x35,0xFF,0x28,0x2A,\
0xA6,0x0F,0x00,0x00,0x00,0x9A,0x03,0x2D,\
0x17,0x19,0x1C,0x80,0x83,0x03,0x50,0x3C,\
0x1E,0x54,0x00,0x20,0x37,0x94,0xC5,0x02,\
0x07,0x00,0x00,0x04,0x8B,0x21,0x00,0x84,\
0x25,0x00,0x7D,0x2A,0x00,0x79,0x2E,0x00,\
0x74,0x34,0x00,0x74,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x41,0x05,0x00,0x00,0x01,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x1D,0x1C,0x1B,0x1A,0x19,0x18,0x17,0x16,\
0x15,0x14,0x13,0x12,0x11,0x10,0x0F,0x0E,\
0x0D,0x0C,0x0B,0x0A,0x09,0x08,0x07,0x06,\
0x05,0x04,0x03,0x02,0x01,0x00,0x2A,0x29,\
0x28,0x27,0x26,0x25,0x24,0x23,0x22,0x21,\
0x20,0x1F,0x1E,0x1D,0x1C,0x1B,0x19,0x18,\
0x17,0x16,0x15,0x14,0x13,0x12,0x11,0x10,\
0x0F,0x0E,0x0D,0x0C,0x0B,0x0A,0x09,0x08,\
0x07,0x06,0x05,0x04,0x03,0x02,0x01,0xFF,\
0xEF,0x01\
}

#define GTP_CFG_GROUP0_CHARGER {\
}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP1 {\
}

/* TODO puts your group2 config info here,if need. */
#define GTP_CFG_GROUP1_CHARGER {\
}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP2 {\
}

/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP2_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP3 {\
}

/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP3_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP4 {\
}

/* TODO puts your group4 config info here,if need. */
#define GTP_CFG_GROUP4_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP5 {\
}

/* TODO puts your group5 config info here,if need. */
#define GTP_CFG_GROUP5_CHARGER {\
}


#endif /* _GT1X_CONFIG_H_ */
