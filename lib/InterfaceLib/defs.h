#include <stdint.h>

#pragma pack(push, 1)
typedef struct {
    uint16_t environsVersion;
    uint16_t machineType;
    uint16_t systemVersion;
    uint16_t processor;
    uint8_t hasFPU;
    uint8_t hasColorQD;
    uint16_t keyBoardType;
    uint16_t atDrvrVersNum;
    uint16_t sysVRefNum;
} SysEnvRec;

typedef struct {
    uint16_t v;
    uint16_t h;
} Point;

typedef struct {
    uint16_t top;
    uint16_t left;
    uint16_t bottom;
    uint16_t right;
} Rect;

typedef struct {
    uint16_t rgnSize;
    Rect rgnBBox;
    /* ... */
} Region;

typedef struct {
    uint32_t baseAddr;
    uint16_t rowBytes;
    Rect bounds;
} BitMap;

typedef struct {
    uint16_t data;
    uint16_t mask;
    Point hotSpot;
} Cursor;

typedef struct {
    uint8_t pat[8];
} Pattern;

typedef struct {
    /* how much we can store custom data here? */
    uint32_t randSeed;
    BitMap screenBits;
    Cursor arrow;
    Pattern dkGray;
    Pattern ltGray;
    Pattern gray;
    Pattern black;
    Pattern white;
    uint32_t thePort;
} QDGlobals;

#pragma pack(pop)
