#include "program.h"

_Thread_local double ra_x87_stack[8] RA_ALIGNED(16);
_Thread_local uint64_t ra_x87_top = 0ull;
_Thread_local uint16_t ra_x87_cw = 639ull;
_Thread_local uint16_t ra_x87_sw = 0ull;
_Thread_local uint64_t ra_pops = 0ull;
_Thread_local uint32_t ra_mxcsr = 8064ull;
const uint8_t sec_headers[1024] RA_ALIGNED(16) = {
    "MZ\220\0\3\0\0\0\4\0\0\0\377\377\0\0\270\0\0\0\0\0\0\0@\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\20\1\0\0\16\37\272\16\0\264\t\315!\270\1L\315!This program cannot b"
    "e run in DOS mode.\r\r\n$\0\0\0\0\0\0\0t\351\354\3750\210\202\2560\210\202\2560\210\202\2569\360"
    "\21\256\"\210\202\256\271\3\203\2572\210\202\256\271\3\177\2564\210\202\256\271\3\201\2572\210\202"
    "\256\271\3\206\257<\210\202\256\271\3\207\257$\210\202\256\254\5\203\2578\210\202\2560\210\203\256"
    "\362\210\202\256I\t\203\257;\210\202\256\254\5\206\257A\210\202\256\254\5}\2561\210\202\256\254\5"
    "\200\2571\210\202\256Rich0\210\202\256\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0PE\0\0L\1\5"
    "\0\252\357\373j\0\0\0\0\0\0\0\0\340\0\2\1\13\1\0163\0\322\4\0\0\230\r\0\0\0\0\0@)\4\0\0\20\0\0\0"
    "\360\4\0\0\0@\0\0\20\0\0\0\2\0\0\6\0\0\0\0\0\0\0\6\0\0\0\0\0\0\0\0\260\22\0\0\4\0\0\0\0\0\0\2\0@"
    "\201\0\0\20\0\0\20\0\0\0\0\20\0\0\20\0\0\0\0\0\0\20\0\0\0\0\0\0\0\0\0\0\0\24\377\6\0\220\1\0\0\0"
    "\240\20\0P\210\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0000\22\0\200r\0\0\10\372\6\0T\0\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0H\371\6\0@\0\0\0\0\0\0\0\0\0\0\0\0\360\4\0T\3\0\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0.text\0\0\0\221\320\4\0\0\20\0\0\0\322\4\0\0\4\0\0\0\0\0\0"
    "\0\0\0\0\0\0\0\0 \0\0`.rdata\0\0\322#\2\0\0\360\4\0\0$\2\0\0\326\4\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0"
    "@.data\0\0\0Pu\t\0\0 \7\0\0R\0\0\0\372\6\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\300.rsrc\0\0\0P\210\1\0\0"
    "\240\20\0\0\212\1\0\0L\7\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0@.reloc\0\0\200r\0\0\0000\22\0\0t\0\0\0\326"
    "\10\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0B"
};
union sec_rdata_u sec_rdata_storage RA_ALIGNED(16) = { .bytes = {
#embed "sec_rdata.bin"
} };
union sec_data_u sec_data_storage RA_ALIGNED(16) = { .bytes = {
#embed "sec_data.bin"
} };
const uint8_t sec_cases_402bf8[68] RA_ALIGNED(16) = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 9, 9, 9, 9, 2, 9, 9, 9, 3, 4, 5, 9,
    6, 9, 7, 8
};
const uint8_t sec_cases_4093cc[194] RA_ALIGNED(16) = {
    0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    0, 1
};
const uint8_t sec_cases_409540[180] RA_ALIGNED(16) = {
    "\0\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"
    "\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"
    "\3\3\3\3\3\1\2\2\1\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"
    "\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"
};
const uint8_t sec_cases_409abc[194] RA_ALIGNED(16) = {
    0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 3, 4, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    0, 1
};
const uint8_t sec_cases_40a054[194] RA_ALIGNED(16) = {
    0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    0, 1
};
const uint8_t sec_cases_40a294[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const uint8_t sec_cases_40a4f8[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const struct sec_cases_40affc_t sec_cases_40affc RA_ALIGNED(16) = { {
    0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 2, 3, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    0, 1
} };
const uint8_t sec_cases_40b280[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const uint8_t sec_cases_40b9d4[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const uint8_t sec_cases_40be6c[194] RA_ALIGNED(16) = {
    0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    0, 1
};
const uint8_t sec_cases_40bf44[13] RA_ALIGNED(16) = {
    0, 1, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3
};
const uint8_t sec_cases_40c1e0[180] RA_ALIGNED(16) = {
    "\0\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2"
    "\2\2\2\0\2\2\2\2\2\2\2\2\2\2\1\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\0\2\2\2\2\2\2\2\2\2\2\1\2"
    "\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2"
    "\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\1"
};
const uint8_t sec_cases_40c3f0[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const uint8_t sec_cases_40cd3c[194] RA_ALIGNED(16) = {
    0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    0, 1
};
const uint8_t sec_cases_40d0b8[194] RA_ALIGNED(16) = {
    0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 4, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    0, 1
};
const uint8_t sec_cases_40d6a8[194] RA_ALIGNED(16) = {
    0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    0, 1
};
const uint8_t sec_cases_40d918[194] RA_ALIGNED(16) = {
    0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    0, 1
};
const struct sec_cases_416384_t sec_cases_416384 RA_ALIGNED(16) = { {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 14,
    15, 16, 17, 17, 18, 19, 20, 21, 22, 23, 22, 22, 22, 22, 24, 25,
    26, 25, 25, 25, 25, 27, 28, 27, 27, 27, 27, 0, 29, 30, 31, 32,
    33, 34, 35, 36, 36, 36, 36, 36, 36, 36, 36, 36, 37, 38, 39, 40,
    41, 42
} };
const uint8_t sec_cases_42c6d4[11] RA_ALIGNED(16) = {
    0, 5, 5, 1, 5, 2, 3, 5, 4, 5, 3
};
const uint8_t sec_cases_43913c[119] RA_ALIGNED(16) = {
    0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 5, 6, 7
};
const uint8_t sec_cases_43a998[50] RA_ALIGNED(16) = {
    0, 1, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3
};
const uint8_t sec_cases_43aa10[41] RA_ALIGNED(16) = {
    0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 1, 2, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    3, 4, 5, 6, 7, 8, 9, 10, 11
};
const struct ra_tls_t ra_tls RA_ALIGNED(16) = { 0ull, 0ull, 0ull, 0ull, 0ull };
const struct ra_function_entry ra_functions[322] = {
    { 4202400ull, (void *)&U_00401fa0 },
    { 4203776ull, (void *)&U_00402500 },
    { 4203824ull, (void *)&U_00402530 },
    { 4203952ull, (void *)&U_004025b0 },
    { 4204272ull, (void *)&U_004026f0 },
    { 4204368ull, (void *)&U_00402750 },
    { 4204416ull, (void *)&U_00402780 },
    { 4204528ull, (void *)&U_004027f0 },
    { 4205632ull, (void *)&U_00402c40 },
    { 4206304ull, (void *)&U_00402ee0 },
    { 4206784ull, (void *)&U_004030c0 },
    { 4206896ull, (void *)&U_00403130 },
    { 4208032ull, (void *)&U_004035a0 },
    { 4208352ull, (void *)&U_004036e0 },
    { 4208688ull, (void *)&U_00403830 },
    { 4208832ull, (void *)&U_004038c0 },
    { 4208944ull, (void *)&U_00403930 },
    { 4209104ull, (void *)&U_004039d0 },
    { 4209312ull, (void *)&U_00403aa0 },
    { 4209440ull, (void *)&U_00403b20 },
    { 4209488ull, (void *)&U_00403b50 },
    { 4209504ull, (void *)&U_00403b60 },
    { 4209760ull, (void *)&U_00403c60 },
    { 4210928ull, (void *)&U_004040f0 },
    { 4210944ull, (void *)&U_00404100 },
    { 4210960ull, (void *)&U_00404110 },
    { 4212128ull, (void *)&U_004045a0 },
    { 4212336ull, (void *)&U_00404670 },
    { 4212752ull, (void *)&U_00404810 },
    { 4212784ull, (void *)&U_00404830 },
    { 4213104ull, (void *)&U_00404970 },
    { 4213152ull, (void *)&U_004049a0 },
    { 4213232ull, (void *)&U_004049f0 },
    { 4213328ull, (void *)&U_00404a50 },
    { 4213424ull, (void *)&U_00404ab0 },
    { 4213920ull, (void *)&U_00404ca0 },
    { 4216960ull, (void *)&U_00405880 },
    { 4217056ull, (void *)&U_004058e0 },
    { 4224640ull, (void *)&U_00407680 },
    { 4236832ull, (void *)&U_0040a620 },
    { 4236880ull, (void *)&U_0040a650 },
    { 4237056ull, (void *)&U_0040a700 },
    { 4237104ull, (void *)&U_0040a730 },
    { 4237232ull, (void *)&U_0040a7b0 },
    { 4237344ull, (void *)&U_0040a820 },
    { 4237408ull, (void *)&U_0040a860 },
    { 4237488ull, (void *)&U_0040a8b0 },
    { 4237920ull, (void *)&U_0040aa60 },
    { 4238032ull, (void *)&U_0040aad0 },
    { 4238064ull, (void *)&U_0040aaf0 },
    { 4250080ull, (void *)&U_0040d9e0 },
    { 4259936ull, (void *)&U_00410060 },
    { 4260320ull, (void *)&U_004101e0 },
    { 4262048ull, (void *)&U_004108a0 },
    { 4262208ull, (void *)&U_00410940 },
    { 4264576ull, (void *)&U_00411280 },
    { 4264752ull, (void *)&U_00411330 },
    { 4265488ull, (void *)&U_00411610 },
    { 4265616ull, (void *)&U_00411690 },
    { 4265712ull, (void *)&U_004116f0 },
    { 4265824ull, (void *)&U_00411760 },
    { 4265840ull, (void *)&U_00411770 },
    { 4265856ull, (void *)&U_00411780 },
    { 4266016ull, (void *)&U_00411820 },
    { 4266240ull, (void *)&U_00411900 },
    { 4266256ull, (void *)&U_00411910 },
    { 4266352ull, (void *)&U_00411970 },
    { 4266368ull, (void *)&U_00411980 },
    { 4266784ull, (void *)&U_00411b20 },
    { 4267248ull, (void *)&U_00411cf0 },
    { 4267280ull, (void *)&U_00411d10 },
    { 4267296ull, (void *)&U_00411d20 },
    { 4267424ull, (void *)&U_00411da0 },
    { 4267456ull, (void *)&U_00411dc0 },
    { 4267664ull, (void *)&U_00411e90 },
    { 4268416ull, (void *)&U_00412180 },
    { 4268512ull, (void *)&U_004121e0 },
    { 4268544ull, (void *)&U_00412200 },
    { 4268592ull, (void *)&U_00412230 },
    { 4268784ull, (void *)&U_004122f0 },
    { 4268912ull, (void *)&U_00412370 },
    { 4271632ull, (void *)&U_00412e10 },
    { 4272592ull, (void *)&U_004131d0 },
    { 4272944ull, (void *)&U_00413330 },
    { 4273360ull, (void *)&U_004134d0 },
    { 4273392ull, (void *)&U_004134f0 },
    { 4273408ull, (void *)&U_00413500 },
    { 4273520ull, (void *)&U_00413570 },
    { 4273600ull, (void *)&U_004135c0 },
    { 4273856ull, (void *)&U_004136c0 },
    { 4274016ull, (void *)&U_00413760 },
    { 4274032ull, (void *)&U_00413770 },
    { 4274048ull, (void *)&U_00413780 },
    { 4274192ull, (void *)&U_00413810 },
    { 4274368ull, (void *)&U_004138c0 },
    { 4274512ull, (void *)&U_00413950 },
    { 4276336ull, (void *)&U_00414070 },
    { 4279120ull, (void *)&U_00414b50 },
    { 4279168ull, (void *)&U_00414b80 },
    { 4285904ull, (void *)&U_004165d0 },
    { 4286304ull, (void *)&U_00416760 },
    { 4286384ull, (void *)&U_004167b0 },
    { 4286464ull, (void *)&U_00416800 },
    { 4286512ull, (void *)&U_00416830 },
    { 4286576ull, (void *)&U_00416870 },
    { 4286624ull, (void *)&U_004168a0 },
    { 4286816ull, (void *)&U_00416960 },
    { 4286848ull, (void *)&U_00416980 },
    { 4286960ull, (void *)&U_004169f0 },
    { 4287072ull, (void *)&U_00416a60 },
    { 4287280ull, (void *)&U_00416b30 },
    { 4287392ull, (void *)&U_00416ba0 },
    { 4287552ull, (void *)&U_00416c40 },
    { 4287920ull, (void *)&U_00416db0 },
    { 4287968ull, (void *)&U_00416de0 },
    { 4288016ull, (void *)&U_00416e10 },
    { 4288288ull, (void *)&U_00416f20 },
    { 4288496ull, (void *)&U_00416ff0 },
    { 4288528ull, (void *)&U_00417010 },
    { 4288880ull, (void *)&U_00417170 },
    { 4289232ull, (void *)&U_004172d0 },
    { 4289360ull, (void *)&U_00417350 },
    { 4289392ull, (void *)&U_00417370 },
    { 4289440ull, (void *)&U_004173a0 },
    { 4289488ull, (void *)&U_004173d0 },
    { 4289888ull, (void *)&U_00417560 },
    { 4289920ull, (void *)&U_00417580 },
    { 4290032ull, (void *)&U_004175f0 },
    { 4290064ull, (void *)&U_00417610 },
    { 4290160ull, (void *)&U_00417670 },
    { 4290192ull, (void *)&U_00417690 },
    { 4290224ull, (void *)&U_004176b0 },
    { 4290416ull, (void *)&U_00417770 },
    { 4290432ull, (void *)&U_00417780 },
    { 4290560ull, (void *)&U_00417800 },
    { 4290704ull, (void *)&U_00417890 },
    { 4290720ull, (void *)&U_004178a0 },
    { 4290736ull, (void *)&U_004178b0 },
    { 4290752ull, (void *)&U_004178c0 },
    { 4290784ull, (void *)&U_004178e0 },
    { 4291056ull, (void *)&U_004179f0 },
    { 4291360ull, (void *)&U_00417b20 },
    { 4291504ull, (void *)&U_00417bb0 },
    { 4291584ull, (void *)&U_00417c00 },
    { 4291648ull, (void *)&U_00417c40 },
    { 4291712ull, (void *)&U_00417c80 },
    { 4291760ull, (void *)&U_00417cb0 },
    { 4291808ull, (void *)&U_00417ce0 },
    { 4291904ull, (void *)&U_00417d40 },
    { 4293040ull, (void *)&U_004181b0 },
    { 4293232ull, (void *)&U_00418270 },
    { 4293264ull, (void *)&U_00418290 },
    { 4293296ull, (void *)&U_004182b0 },
    { 4293328ull, (void *)&U_004182d0 },
    { 4293360ull, (void *)&U_004182f0 },
    { 4293392ull, (void *)&U_00418310 },
    { 4293424ull, (void *)&U_00418330 },
    { 4293456ull, (void *)&U_00418350 },
    { 4293504ull, (void *)&U_00418380 },
    { 4293712ull, (void *)&U_00418450 },
    { 4293952ull, (void *)&U_00418540 },
    { 4294016ull, (void *)&U_00418580 },
    { 4307440ull, (void *)&U_0041b9f0 },
    { 4319712ull, (void *)&U_0041e9e0 },
    { 4326976ull, (void *)&U_00420640 },
    { 4327104ull, (void *)&U_004206c0 },
    { 4337728ull, (void *)&U_00423040 },
    { 4342416ull, (void *)&U_00424290 },
    { 4342848ull, (void *)&U_00424440 },
    { 4343296ull, (void *)&U_00424600 },
    { 4343632ull, (void *)&U_00424750 },
    { 4356896ull, (void *)&U_00427b20 },
    { 4357104ull, (void *)&U_00427bf0 },
    { 4357312ull, (void *)&U_00427cc0 },
    { 4357520ull, (void *)&U_00427d90 },
    { 4357728ull, (void *)&U_00427e60 },
    { 4362752ull, (void *)&U_00429200 },
    { 4363424ull, (void *)&U_004294a0 },
    { 4363472ull, (void *)&U_004294d0 },
    { 4391104ull, (void *)&U_004300c0 },
    { 4395232ull, (void *)&U_004310e0 },
    { 4398224ull, (void *)&U_00431c90 },
    { 4398448ull, (void *)&U_00431d70 },
    { 4399664ull, (void *)&U_00432230 },
    { 4399856ull, (void *)&U_004322f0 },
    { 4400768ull, (void *)&U_00432680 },
    { 4407024ull, (void *)&U_00433ef0 },
    { 4408960ull, (void *)&U_00434680 },
    { 4408976ull, (void *)&U_00434690 },
    { 4408992ull, (void *)&U_004346a0 },
    { 4409184ull, (void *)&U_00434760 },
    { 4409232ull, (void *)&U_00434790 },
    { 4409280ull, (void *)&U_004347c0 },
    { 4411056ull, (void *)&U_00434eb0 },
    { 4411072ull, (void *)&U_00434ec0 },
    { 4411104ull, (void *)&U_00434ee0 },
    { 4411120ull, (void *)&U_00434ef0 },
    { 4411136ull, (void *)&U_00434f00 },
    { 4411424ull, (void *)&U_00435020 },
    { 4411536ull, (void *)&U_00435090 },
    { 4411584ull, (void *)&U_004350c0 },
    { 4411616ull, (void *)&U_004350e0 },
    { 4411632ull, (void *)&U_004350f0 },
    { 4411648ull, (void *)&U_00435100 },
    { 4412016ull, (void *)&U_00435270 },
    { 4412160ull, (void *)&U_00435300 },
    { 4412192ull, (void *)&U_00435320 },
    { 4412240ull, (void *)&U_00435350 },
    { 4412272ull, (void *)&U_00435370 },
    { 4412368ull, (void *)&U_004353d0 },
    { 4412400ull, (void *)&U_004353f0 },
    { 4412464ull, (void *)&U_00435430 },
    { 4412544ull, (void *)&U_00435480 },
    { 4412576ull, (void *)&U_004354a0 },
    { 4412624ull, (void *)&U_004354d0 },
    { 4412976ull, (void *)&U_00435630 },
    { 4413072ull, (void *)&U_00435690 },
    { 4413200ull, (void *)&U_00435710 },
    { 4413232ull, (void *)&U_00435730 },
    { 4413264ull, (void *)&U_00435750 },
    { 4413280ull, (void *)&U_00435760 },
    { 4417232ull, (void *)&U_004366d0 },
    { 4423600ull, (void *)&U_00437fb0 },
    { 4425392ull, (void *)&U_004386b0 },
    { 4428576ull, (void *)&U_00439320 },
    { 4428608ull, (void *)&U_00439340 },
    { 4428672ull, (void *)&U_00439380 },
    { 4428720ull, (void *)&U_004393b0 },
    { 4428784ull, (void *)&U_004393f0 },
    { 4428976ull, (void *)&U_004394b0 },
    { 4428992ull, (void *)&U_004394c0 },
    { 4429488ull, (void *)&U_004396b0 },
    { 4429792ull, (void *)&U_004397e0 },
    { 4431380ull, (void *)&U_00439e14 },
    { 4431386ull, (void *)&U_00439e1a },
    { 4431392ull, (void *)&U_00439e20 },
    { 4431398ull, (void *)&U_00439e26 },
    { 4431404ull, (void *)&U_00439e2c },
    { 4431410ull, (void *)&U_00439e32 },
    { 4431416ull, (void *)&U_00439e38 },
    { 4442448ull, (void *)&U_0043c950 },
    { 4445168ull, (void *)&U_0043d3f0 },
    { 4449040ull, (void *)&U_0043e310 },
    { 4450240ull, (void *)&U_0043e7c0 },
    { 4464416ull, (void *)&U_00441f20 },
    { 4467024ull, (void *)&U_00442950 },
    { 4472436ull, (void *)&U_00443e74 },
    { 4472442ull, (void *)&U_00443e7a },
    { 4472448ull, (void *)&U_00443e80 },
    { 4472454ull, (void *)&U_00443e86 },
    { 4472460ull, (void *)&U_00443e8c },
    { 4472466ull, (void *)&U_00443e92 },
    { 4472484ull, (void *)&U_00443ea4 },
    { 4472490ull, (void *)&U_00443eaa },
    { 4472496ull, (void *)&U_00443eb0 },
    { 4472592ull, (void *)&U_00443f10 },
    { 4473872ull, (void *)&U_00444410 },
    { 4478224ull, (void *)&U_00445510 },
    { 4479056ull, (void *)&U_00445850 },
    { 4480464ull, (void *)&U_00445dd0 },
    { 4481392ull, (void *)&U_00446170 },
    { 4484576ull, (void *)&U_00446de0 },
    { 4484896ull, (void *)&U_00446f20 },
    { 4485456ull, (void *)&U_00447150 },
    { 4485568ull, (void *)&U_004471c0 },
    { 4487808ull, (void *)&U_00447a80 },
    { 4487824ull, (void *)&U_00447a90 },
    { 4487840ull, (void *)&U_00447aa0 },
    { 4487856ull, (void *)&U_00447ab0 },
    { 4487872ull, (void *)&U_00447ac0 },
    { 4487888ull, (void *)&U_00447ad0 },
    { 4487904ull, (void *)&U_00447ae0 },
    { 4487920ull, (void *)&U_00447af0 },
    { 4487936ull, (void *)&U_00447b00 },
    { 4487968ull, (void *)&U_00447b20 },
    { 4487984ull, (void *)&U_00447b30 },
    { 4488000ull, (void *)&U_00447b40 },
    { 4488016ull, (void *)&U_00447b50 },
    { 4488032ull, (void *)&U_00447b60 },
    { 4488048ull, (void *)&U_00447b70 },
    { 4488064ull, (void *)&U_00447b80 },
    { 4488080ull, (void *)&U_00447b90 },
    { 4488096ull, (void *)&U_00447ba0 },
    { 4488112ull, (void *)&U_00447bb0 },
    { 4488128ull, (void *)&U_00447bc0 },
    { 4488144ull, (void *)&U_00447bd0 },
    { 4488192ull, (void *)&U_00447c00 },
    { 4488208ull, (void *)&U_00447c10 },
    { 4488224ull, (void *)&U_00447c20 },
    { 4488240ull, (void *)&U_00447c30 },
    { 4488256ull, (void *)&U_00447c40 },
    { 4488272ull, (void *)&U_00447c50 },
    { 4488288ull, (void *)&U_00447c60 },
    { 4488304ull, (void *)&U_00447c70 },
    { 4488320ull, (void *)&U_00447c80 },
    { 4488336ull, (void *)&U_00447c90 },
    { 4488352ull, (void *)&U_00447ca0 },
    { 4488368ull, (void *)&U_00447cb0 },
    { 4488384ull, (void *)&U_00447cc0 },
    { 4488400ull, (void *)&U_00447cd0 },
    { 4496640ull, (void *)&U_00449d00 },
    { 4497248ull, (void *)&U_00449f60 },
    { 4497312ull, (void *)&U_00449fa0 },
    { 4497664ull, (void *)&U_0044a100 },
    { 4497936ull, (void *)&U_0044a210 },
    { 4498512ull, (void *)&U_0044a450 },
    { 4501344ull, (void *)&U_0044af60 },
    { 4506016ull, (void *)&U_0044c1a0 },
    { 4506032ull, (void *)&U_0044c1b0 },
    { 4506080ull, (void *)&U_0044c1e0 },
    { 4506096ull, (void *)&U_0044c1f0 },
    { 4506160ull, (void *)&U_0044c230 },
    { 4506176ull, (void *)&U_0044c240 },
    { 4506448ull, (void *)&U_0044c350 },
    { 4506736ull, (void *)&U_0044c470 },
    { 4507936ull, (void *)&U_0044c920 },
    { 4509408ull, (void *)&U_0044cee0 },
    { 4509440ull, (void *)&U_0044cf00 },
    { 4509984ull, (void *)&U_0044d120 },
    { 4510352ull, (void *)&U_0044d290 },
    { 4513024ull, (void *)&U_0044dd00 },
    { 4513523ull, (void *)&U_0044def3 },
};
const uint64_t ra_function_count = 322ull;
const struct ra_import_pops_t ra_import_pops RA_ALIGNED(16) = { (uint64_t)((uint8_t *)&FLAC__stream_decoder_delete + 0), (uint64_t)((uint8_t *)&ra_import_names + 0), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_finish + 0), (uint64_t)((uint8_t *)&ra_import_names + 37), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_get_state + 0), (uint64_t)((uint8_t *)&ra_import_names + 74), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_init_stream + 0), (uint64_t)((uint8_t *)&ra_import_names + 114), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_new + 0), (uint64_t)((uint8_t *)&ra_import_names + 156), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_process_single + 0), (uint64_t)((uint8_t *)&ra_import_names + 190), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_process_until_end_of_metadata + 0), (uint64_t)((uint8_t *)&ra_import_names + 235), 0ull, (uint64_t)((uint8_t *)&FLAC__stream_decoder_seek_absolute + 0), (uint64_t)((uint8_t *)&ra_import_names + 295), 0ull, (uint64_t)((uint8_t *)&GetCommandLineW + 0), (uint64_t)((uint8_t *)&ra_import_names + 339), 0ull, (uint64_t)((uint8_t *)&GetCurrentProcessId + 0), (uint64_t)((uint8_t *)&ra_import_names + 368), 0ull, (uint64_t)((uint8_t *)&GetCurrentThreadId + 0), (uint64_t)((uint8_t *)&ra_import_names + 401), 0ull, (uint64_t)((uint8_t *)&GetDC + 0), (uint64_t)((uint8_t *)&ra_import_names + 433), 4ull, (uint64_t)((uint8_t *)&GetDeviceCaps + 0), (uint64_t)((uint8_t *)&ra_import_names + 450), 8ull, (uint64_t)((uint8_t *)&GetProcessHeap + 0), (uint64_t)((uint8_t *)&ra_import_names + 474), 0ull, (uint64_t)((uint8_t *)&GetStartupInfoW + 0), (uint64_t)((uint8_t *)&ra_import_names + 502), 4ull, (uint64_t)((uint8_t *)&GetSystemTimeAsFileTime + 0), (uint64_t)((uint8_t *)&ra_import_names + 531), 4ull, (uint64_t)((uint8_t *)&HeapAlloc + 0), (uint64_t)((uint8_t *)&ra_import_names + 568), 12ull, (uint64_t)((uint8_t *)&HeapFree + 0), (uint64_t)((uint8_t *)&ra_import_names + 591), 12ull, (uint64_t)((uint8_t *)&IsProcessorFeaturePresent + 0), (uint64_t)((uint8_t *)&ra_import_names + 613), 4ull, (uint64_t)((uint8_t *)&LocalFree + 0), (uint64_t)((uint8_t *)&ra_import_names + 652), 4ull, (uint64_t)((uint8_t *)&QueryPerformanceCounter + 0), (uint64_t)((uint8_t *)&ra_import_names + 675), 4ull, (uint64_t)((uint8_t *)&ReleaseDC + 0), (uint64_t)((uint8_t *)&ra_import_names + 712), 8ull, (uint64_t)((uint8_t *)&SDLNet_GetError + 0), (uint64_t)((uint8_t *)&ra_import_names + 733), 0ull, (uint64_t)((uint8_t *)&SDLNet_GetLocalAddresses + 0), (uint64_t)((uint8_t *)&ra_import_names + 762), 0ull, (uint64_t)((uint8_t *)&SDLNet_Init + 0), (uint64_t)((uint8_t *)&ra_import_names + 800), 0ull, (uint64_t)((uint8_t *)&SDLNet_ResolveHost + 0), (uint64_t)((uint8_t *)&ra_import_names + 825), 0ull, (uint64_t)((uint8_t *)&SDLNet_ResolveIP + 0), (uint64_t)((uint8_t *)&ra_import_names + 857), 0ull, (uint64_t)((uint8_t *)&SDLNet_UDP_Close + 0), (uint64_t)((uint8_t *)&ra_import_names + 887), 0ull, (uint64_t)((uint8_t *)&SDLNet_UDP_GetPeerAddress + 0), (uint64_t)((uint8_t *)&ra_import_names + 917), 0ull, (uint64_t)((uint8_t *)&SDLNet_UDP_Open + 0), (uint64_t)((uint8_t *)&ra_import_names + 956), 0ull, (uint64_t)((uint8_t *)&SDLNet_UDP_Recv + 0), (uint64_t)((uint8_t *)&ra_import_names + 985), 0ull, (uint64_t)((uint8_t *)&SDLNet_UDP_Send + 0), (uint64_t)((uint8_t *)&ra_import_names + 1014), 0ull, (uint64_t)((uint8_t *)&SDL_CloseAudio + 0), (uint64_t)((uint8_t *)&ra_import_names + 1043), 0ull, (uint64_t)((uint8_t *)&SDL_CreateRGBSurface + 0), (uint64_t)((uint8_t *)&ra_import_names + 1067), 0ull, (uint64_t)((uint8_t *)&SDL_CreateRGBSurfaceWithFormatFrom + 0), (uint64_t)((uint8_t *)&ra_import_names + 1097), 0ull, (uint64_t)((uint8_t *)&SDL_CreateRenderer + 0), (uint64_t)((uint8_t *)&ra_import_names + 1141), 0ull, (uint64_t)((uint8_t *)&SDL_CreateTexture + 0), (uint64_t)((uint8_t *)&ra_import_names + 1169), 0ull, (uint64_t)((uint8_t *)&SDL_CreateWindow + 0), (uint64_t)((uint8_t *)&ra_import_names + 1196), 0ull, (uint64_t)((uint8_t *)&SDL_Delay + 0), (uint64_t)((uint8_t *)&ra_import_names + 1222), 0ull, (uint64_t)((uint8_t *)&SDL_DestroyRenderer + 0), (uint64_t)((uint8_t *)&ra_import_names + 1241), 0ull, (uint64_t)((uint8_t *)&SDL_DestroyTexture + 0), (uint64_t)((uint8_t *)&ra_import_names + 1270), 0ull, (uint64_t)((uint8_t *)&SDL_DestroyWindow + 0), (uint64_t)((uint8_t *)&ra_import_names + 1298), 0ull, (uint64_t)((uint8_t *)&SDL_FillRect + 0), (uint64_t)((uint8_t *)&ra_import_names + 1325), 0ull, (uint64_t)((uint8_t *)&SDL_FreeSurface + 0), (uint64_t)((uint8_t *)&ra_import_names + 1347), 0ull, (uint64_t)((uint8_t *)&SDL_GameControllerClose + 0), (uint64_t)((uint8_t *)&ra_import_names + 1372), 0ull, (uint64_t)((uint8_t *)&SDL_GameControllerEventState + 0), (uint64_t)((uint8_t *)&ra_import_names + 1405), 0ull, (uint64_t)((uint8_t *)&SDL_GameControllerGetJoystick + 0), (uint64_t)((uint8_t *)&ra_import_names + 1443), 0ull, (uint64_t)((uint8_t *)&SDL_GameControllerOpen + 0), (uint64_t)((uint8_t *)&ra_import_names + 1482), 0ull, (uint64_t)((uint8_t *)&SDL_GetAudioDeviceName + 0), (uint64_t)((uint8_t *)&ra_import_names + 1514), 0ull, (uint64_t)((uint8_t *)&SDL_GetCurrentAudioDriver + 0), (uint64_t)((uint8_t *)&ra_import_names + 1546), 0ull, (uint64_t)((uint8_t *)&SDL_GetCurrentDisplayMode + 0), (uint64_t)((uint8_t *)&ra_import_names + 1581), 0ull, (uint64_t)((uint8_t *)&SDL_GetError + 0), (uint64_t)((uint8_t *)&ra_import_names + 1616), 0ull, (uint64_t)((uint8_t *)&SDL_GetPerformanceCounter + 0), (uint64_t)((uint8_t *)&ra_import_names + 1638), 0ull, (uint64_t)((uint8_t *)&SDL_GetPerformanceFrequency + 0), (uint64_t)((uint8_t *)&ra_import_names + 1673), 0ull, (uint64_t)((uint8_t *)&SDL_GetRelativeMouseState + 0), (uint64_t)((uint8_t *)&ra_import_names + 1710), 0ull, (uint64_t)((uint8_t *)&SDL_GetTicks + 0), (uint64_t)((uint8_t *)&ra_import_names + 1745), 0ull, (uint64_t)((uint8_t *)&SDL_Init + 0), (uint64_t)((uint8_t *)&ra_import_names + 1767), 0ull, (uint64_t)((uint8_t *)&SDL_InitSubSystem + 0), (uint64_t)((uint8_t *)&ra_import_names + 1785), 0ull, (uint64_t)((uint8_t *)&SDL_JoystickInstanceID + 0), (uint64_t)((uint8_t *)&ra_import_names + 1812), 0ull, (uint64_t)((uint8_t *)&SDL_LockAudio + 0), (uint64_t)((uint8_t *)&ra_import_names + 1844), 0ull, (uint64_t)((uint8_t *)&SDL_LockSurface + 0), (uint64_t)((uint8_t *)&ra_import_names + 1867), 0ull, (uint64_t)((uint8_t *)&SDL_LockTexture + 0), (uint64_t)((uint8_t *)&ra_import_names + 1892), 0ull, (uint64_t)((uint8_t *)&SDL_LowerBlit + 0), (uint64_t)((uint8_t *)&ra_import_names + 1917), 0ull, (uint64_t)((uint8_t *)&SDL_MinimizeWindow + 0), (uint64_t)((uint8_t *)&ra_import_names + 1940), 0ull, (uint64_t)((uint8_t *)&SDL_OpenAudio + 0), (uint64_t)((uint8_t *)&ra_import_names + 1968), 0ull, (uint64_t)((uint8_t *)&SDL_PauseAudio + 0), (uint64_t)((uint8_t *)&ra_import_names + 1991), 0ull, (uint64_t)((uint8_t *)&SDL_PollEvent + 0), (uint64_t)((uint8_t *)&ra_import_names + 2015), 0ull, (uint64_t)((uint8_t *)&SDL_Quit + 0), (uint64_t)((uint8_t *)&ra_import_names + 2038), 0ull, (uint64_t)((uint8_t *)&SDL_QuitSubSystem + 0), (uint64_t)((uint8_t *)&ra_import_names + 2056), 0ull, (uint64_t)((uint8_t *)&SDL_RenderClear + 0), (uint64_t)((uint8_t *)&ra_import_names + 2083), 0ull, (uint64_t)((uint8_t *)&SDL_RenderCopy + 0), (uint64_t)((uint8_t *)&ra_import_names + 2108), 0ull, (uint64_t)((uint8_t *)&SDL_RenderPresent + 0), (uint64_t)((uint8_t *)&ra_import_names + 2132), 0ull, (uint64_t)((uint8_t *)&SDL_RenderSetLogicalSize + 0), (uint64_t)((uint8_t *)&ra_import_names + 2159), 0ull, (uint64_t)((uint8_t *)&SDL_SetHint + 0), (uint64_t)((uint8_t *)&ra_import_names + 2193), 0ull, (uint64_t)((uint8_t *)&SDL_SetMainReady + 0), (uint64_t)((uint8_t *)&ra_import_names + 2214), 0ull, (uint64_t)((uint8_t *)&SDL_SetPaletteColors + 0), (uint64_t)((uint8_t *)&ra_import_names + 2240), 0ull, (uint64_t)((uint8_t *)&SDL_SetRelativeMouseMode + 0), (uint64_t)((uint8_t *)&ra_import_names + 2270), 0ull, (uint64_t)((uint8_t *)&SDL_SetRenderDrawColor + 0), (uint64_t)((uint8_t *)&ra_import_names + 2304), 0ull, (uint64_t)((uint8_t *)&SDL_SetWindowFullscreen + 0), (uint64_t)((uint8_t *)&ra_import_names + 2336), 0ull, (uint64_t)((uint8_t *)&SDL_SetWindowMinimumSize + 0), (uint64_t)((uint8_t *)&ra_import_names + 2369), 0ull, (uint64_t)((uint8_t *)&SDL_SetWindowPosition + 0), (uint64_t)((uint8_t *)&ra_import_names + 2403), 0ull, (uint64_t)((uint8_t *)&SDL_SetWindowSize + 0), (uint64_t)((uint8_t *)&ra_import_names + 2434), 0ull, (uint64_t)((uint8_t *)&SDL_ShowCursor + 0), (uint64_t)((uint8_t *)&ra_import_names + 2461), 0ull, (uint64_t)((uint8_t *)&SDL_ShowSimpleMessageBox + 0), (uint64_t)((uint8_t *)&ra_import_names + 2485), 0ull, (uint64_t)((uint8_t *)&SDL_UnlockAudio + 0), (uint64_t)((uint8_t *)&ra_import_names + 2519), 0ull, (uint64_t)((uint8_t *)&SDL_UnlockSurface + 0), (uint64_t)((uint8_t *)&ra_import_names + 2544), 0ull, (uint64_t)((uint8_t *)&SDL_UnlockTexture + 0), (uint64_t)((uint8_t *)&ra_import_names + 2571), 0ull, (uint64_t)((uint8_t *)&SDL_WaitEvent + 0), (uint64_t)((uint8_t *)&ra_import_names + 2598), 0ull, (uint64_t)((uint8_t *)&SDL_WarpMouseInWindow + 0), (uint64_t)((uint8_t *)&ra_import_names + 2621), 0ull, (uint64_t)((uint8_t *)&SDL_calloc + 0), (uint64_t)((uint8_t *)&ra_import_names + 2652), 0ull, (uint64_t)((uint8_t *)&SDL_free + 0), (uint64_t)((uint8_t *)&ra_import_names + 2672), 0ull, (uint64_t)((uint8_t *)&SDL_getenv + 0), (uint64_t)((uint8_t *)&ra_import_names + 2690), 0ull, (uint64_t)((uint8_t *)&SDL_iconv_string + 0), (uint64_t)((uint8_t *)&ra_import_names + 2710), 0ull, (uint64_t)((uint8_t *)&SDL_malloc + 0), (uint64_t)((uint8_t *)&ra_import_names + 2736), 0ull, (uint64_t)((uint8_t *)&SDL_memcmp + 0), (uint64_t)((uint8_t *)&ra_import_names + 2756), 0ull, (uint64_t)((uint8_t *)&SDL_memcpy + 0), (uint64_t)((uint8_t *)&ra_import_names + 2776), 0ull, (uint64_t)((uint8_t *)&SDL_memmove + 0), (uint64_t)((uint8_t *)&ra_import_names + 2796), 0ull, (uint64_t)((uint8_t *)&SDL_memset + 0), (uint64_t)((uint8_t *)&ra_import_names + 2817), 0ull, (uint64_t)((uint8_t *)&SDL_snprintf + 0), (uint64_t)((uint8_t *)&ra_import_names + 2837), 0ull, (uint64_t)((uint8_t *)&SDL_strchr + 0), (uint64_t)((uint8_t *)&ra_import_names + 2859), 0ull, (uint64_t)((uint8_t *)&SDL_strcmp + 0), (uint64_t)((uint8_t *)&ra_import_names + 2879), 0ull, (uint64_t)((uint8_t *)&SDL_strlen + 0), (uint64_t)((uint8_t *)&ra_import_names + 2899), 0ull, (uint64_t)((uint8_t *)&SDL_strncasecmp + 0), (uint64_t)((uint8_t *)&ra_import_names + 2919), 0ull, (uint64_t)((uint8_t *)&SDL_strncmp + 0), (uint64_t)((uint8_t *)&ra_import_names + 2944), 0ull, (uint64_t)((uint8_t *)&SDL_strrchr + 0), (uint64_t)((uint8_t *)&ra_import_names + 2965), 0ull, (uint64_t)((uint8_t *)&SDL_strstr + 0), (uint64_t)((uint8_t *)&ra_import_names + 2986), 0ull, (uint64_t)((uint8_t *)&SDL_strtol + 0), (uint64_t)((uint8_t *)&ra_import_names + 3006), 0ull, (uint64_t)((uint8_t *)&SDL_wcslen + 0), (uint64_t)((uint8_t *)&ra_import_names + 3026), 0ull, (uint64_t)((uint8_t *)&SetUnhandledExceptionFilter + 0), (uint64_t)((uint8_t *)&ra_import_names + 3046), 4ull, (uint64_t)((uint8_t *)&__acrt_iob_func + 0), (uint64_t)((uint8_t *)&ra_import_names + 3087), 0ull, (uint64_t)((uint8_t *)&__current_exception + 0), (uint64_t)((uint8_t *)&ra_import_names + 3135), 0ull, (uint64_t)((uint8_t *)&__current_exception_context + 0), (uint64_t)((uint8_t *)&ra_import_names + 3172), 0ull, (uint64_t)((uint8_t *)&__setusermatherr + 0), (uint64_t)((uint8_t *)&ra_import_names + 3217), 0ull, (uint64_t)((uint8_t *)&__std_type_info_destroy_list + 0), (uint64_t)((uint8_t *)&ra_import_names + 3265), 0ull, (uint64_t)((uint8_t *)&_c_exit + 0), (uint64_t)((uint8_t *)&ra_import_names + 3311), 0ull, (uint64_t)((uint8_t *)&_cexit + 0), (uint64_t)((uint8_t *)&ra_import_names + 3353), 0ull, (uint64_t)((uint8_t *)&_close + 0), (uint64_t)((uint8_t *)&ra_import_names + 3394), 0ull, (uint64_t)((uint8_t *)&_configthreadlocale + 0), (uint64_t)((uint8_t *)&ra_import_names + 3433), 0ull, (uint64_t)((uint8_t *)&_configure_narrow_argv + 0), (uint64_t)((uint8_t *)&ra_import_names + 3486), 0ull, (uint64_t)((uint8_t *)&_crt_at_quick_exit + 0), (uint64_t)((uint8_t *)&ra_import_names + 3543), 0ull, (uint64_t)((uint8_t *)&_crt_atexit + 0), (uint64_t)((uint8_t *)&ra_import_names + 3596), 0ull, (uint64_t)((uint8_t *)&_except1 + 0), (uint64_t)((uint8_t *)&ra_import_names + 3642), 0ull, (uint64_t)((uint8_t *)&_except_handler4_common + 0), (uint64_t)((uint8_t *)&ra_import_names + 3682), 0ull, (uint64_t)((uint8_t *)&_exit + 0), (uint64_t)((uint8_t *)&ra_import_names + 3723), 0ull, (uint64_t)((uint8_t *)&_get_narrow_winmain_command_line + 0), (uint64_t)((uint8_t *)&ra_import_names + 3763), 0ull, (uint64_t)((uint8_t *)&_initialize_narrow_environment + 0), (uint64_t)((uint8_t *)&ra_import_names + 3830), 0ull, (uint64_t)((uint8_t *)&_open + 0), (uint64_t)((uint8_t *)&ra_import_names + 3895), 0ull, (uint64_t)((uint8_t *)&_register_thread_local_exe_atexit_callback + 0), (uint64_t)((uint8_t *)&ra_import_names + 3933), 0ull, (uint64_t)((uint8_t *)&_seh_filter_dll + 0), (uint64_t)((uint8_t *)&ra_import_names + 4010), 0ull, (uint64_t)((uint8_t *)&_seh_filter_exe + 0), (uint64_t)((uint8_t *)&ra_import_names + 4060), 0ull, (uint64_t)((uint8_t *)&_set_app_type + 0), (uint64_t)((uint8_t *)&ra_import_names + 4110), 0ull, (uint64_t)((uint8_t *)&_set_fmode + 0), (uint64_t)((uint8_t *)&ra_import_names + 4158), 0ull, (uint64_t)((uint8_t *)&_set_new_mode + 0), (uint64_t)((uint8_t *)&ra_import_names + 4201), 0ull, (uint64_t)((uint8_t *)&_unlink + 0), (uint64_t)((uint8_t *)&ra_import_names + 4246), 0ull, (uint64_t)((uint8_t *)&_write + 0), (uint64_t)((uint8_t *)&ra_import_names + 4291), 0ull, (uint64_t)((uint8_t *)&atof + 0), (uint64_t)((uint8_t *)&ra_import_names + 4330), 0ull, (uint64_t)((uint8_t *)&atoi + 0), (uint64_t)((uint8_t *)&ra_import_names + 4369), 0ull, (uint64_t)((uint8_t *)&calloc + 0), (uint64_t)((uint8_t *)&ra_import_names + 4408), 0ull, (uint64_t)((uint8_t *)&ceil + 0), (uint64_t)((uint8_t *)&ra_import_names + 4446), 0ull, (uint64_t)((uint8_t *)&clearerr + 0), (uint64_t)((uint8_t *)&ra_import_names + 4482), 0ull, (uint64_t)((uint8_t *)&exit + 0), (uint64_t)((uint8_t *)&ra_import_names + 4523), 0ull, (uint64_t)((uint8_t *)&fclose + 0), (uint64_t)((uint8_t *)&ra_import_names + 4562), 0ull, (uint64_t)((uint8_t *)&feof + 0), (uint64_t)((uint8_t *)&ra_import_names + 4601), 0ull, (uint64_t)((uint8_t *)&ferror + 0), (uint64_t)((uint8_t *)&ra_import_names + 4638), 0ull, (uint64_t)((uint8_t *)&fflush + 0), (uint64_t)((uint8_t *)&ra_import_names + 4677), 0ull, (uint64_t)((uint8_t *)&fgetc + 0), (uint64_t)((uint8_t *)&ra_import_names + 4716), 0ull, (uint64_t)((uint8_t *)&floor + 0), (uint64_t)((uint8_t *)&ra_import_names + 4754), 0ull, (uint64_t)((uint8_t *)&fopen + 0), (uint64_t)((uint8_t *)&ra_import_names + 4791), 0ull, (uint64_t)((uint8_t *)&fread + 0), (uint64_t)((uint8_t *)&ra_import_names + 4829), 0ull, (uint64_t)((uint8_t *)&free + 0), (uint64_t)((uint8_t *)&ra_import_names + 4867), 0ull, (uint64_t)((uint8_t *)&fseek + 0), (uint64_t)((uint8_t *)&ra_import_names + 4903), 0ull, (uint64_t)((uint8_t *)&ftell + 0), (uint64_t)((uint8_t *)&ra_import_names + 4941), 0ull, (uint64_t)((uint8_t *)&fwrite + 0), (uint64_t)((uint8_t *)&ra_import_names + 4979), 0ull, (uint64_t)((uint8_t *)&getc + 0), (uint64_t)((uint8_t *)&ra_import_names + 5018), 0ull, (uint64_t)((uint8_t *)&gethostname + 0), (uint64_t)((uint8_t *)&ra_import_names + 5055), 8ull, (uint64_t)((uint8_t *)&malloc + 0), (uint64_t)((uint8_t *)&ra_import_names + 5078), 0ull, (uint64_t)((uint8_t *)&memcpy + 0), (uint64_t)((uint8_t *)&ra_import_names + 5116), 0ull, (uint64_t)((uint8_t *)&memmove + 0), (uint64_t)((uint8_t *)&ra_import_names + 5140), 0ull, (uint64_t)((uint8_t *)&memset + 0), (uint64_t)((uint8_t *)&ra_import_names + 5165), 0ull, (uint64_t)((uint8_t *)&ov_clear + 0), (uint64_t)((uint8_t *)&ra_import_names + 5189), 0ull, (uint64_t)((uint8_t *)&ov_info + 0), (uint64_t)((uint8_t *)&ra_import_names + 5213), 0ull, (uint64_t)((uint8_t *)&ov_open_callbacks + 0), (uint64_t)((uint8_t *)&ra_import_names + 5236), 0ull, (uint64_t)((uint8_t *)&ov_read + 0), (uint64_t)((uint8_t *)&ra_import_names + 5269), 0ull, (uint64_t)((uint8_t *)&ov_seekable + 0), (uint64_t)((uint8_t *)&ra_import_names + 5292), 0ull, (uint64_t)((uint8_t *)&ov_streams + 0), (uint64_t)((uint8_t *)&ra_import_names + 5319), 0ull, (uint64_t)((uint8_t *)&ov_time_seek + 0), (uint64_t)((uint8_t *)&ra_import_names + 5345), 0ull, (uint64_t)((uint8_t *)&ra_x86_atan_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_ci_atan2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_command_line_to_argv_w + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_controlfp_s + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_cos_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_errno + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_execute_onexit_table + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_get_module_handle_w + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_initialize_onexit_table + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_initialize_slist_head + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_initterm + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_initterm_e + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_longjmp + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_p_commode + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_pow_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_register_onexit_function + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_report_gsfailure + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_report_rangecheckfailure + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_setjmp3 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_sin_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_sqrt_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_tan_sse2 + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_vfprintf + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_vfscanf + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&ra_x86_vsprintf + 0), 0ull, 0ull, (uint64_t)((uint8_t *)&rand + 0), (uint64_t)((uint8_t *)&ra_import_names + 5373), 0ull, (uint64_t)((uint8_t *)&signal + 0), (uint64_t)((uint8_t *)&ra_import_names + 5412), 0ull, (uint64_t)((uint8_t *)&strerror + 0), (uint64_t)((uint8_t *)&ra_import_names + 5453), 0ull, (uint64_t)((uint8_t *)&strncpy + 0), (uint64_t)((uint8_t *)&ra_import_names + 5496), 0ull, (uint64_t)((uint8_t *)&terminate + 0), (uint64_t)((uint8_t *)&ra_import_names + 5537), 0ull, 0ull, 0ull, 0ull };
const uint8_t ra_import_names[5581] RA_ALIGNED(16) = {
    "FLAC.dll\0FLAC__stream_decoder_delete\0FLAC.dll\0FLAC__stream_decoder_finish\0FLAC.dll\0FLAC__st"
    "ream_decoder_get_state\0FLAC.dll\0FLAC__stream_decoder_init_stream\0FLAC.dll\0FLAC__stream_decod"
    "er_new\0FLAC.dll\0FLAC__stream_decoder_process_single\0FLAC.dll\0FLAC__stream_decoder_process_un"
    "til_end_of_metadata\0FLAC.dll\0FLAC__stream_decoder_seek_absolute\0KERNEL32.dll\0GetCommandLineW"
    "\0KERNEL32.dll\0GetCurrentProcessId\0KERNEL32.dll\0GetCurrentThreadId\0USER32.dll\0GetDC\0GDI32."
    "dll\0GetDeviceCaps\0KERNEL32.dll\0GetProcessHeap\0KERNEL32.dll\0GetStartupInfoW\0KERNEL32.dll\0G"
    "etSystemTimeAsFileTime\0KERNEL32.dll\0HeapAlloc\0KERNEL32.dll\0HeapFree\0KERNEL32.dll\0IsProcess"
    "orFeaturePresent\0KERNEL32.dll\0LocalFree\0KERNEL32.dll\0QueryPerformanceCounter\0USER32.dll\0Re"
    "leaseDC\0SDL2_net.dll\0SDLNet_GetError\0SDL2_net.dll\0SDLNet_GetLocalAddresses\0SDL2_net.dll\0SD"
    "LNet_Init\0SDL2_net.dll\0SDLNet_ResolveHost\0SDL2_net.dll\0SDLNet_ResolveIP\0SDL2_net.dll\0SDLNe"
    "t_UDP_Close\0SDL2_net.dll\0SDLNet_UDP_GetPeerAddress\0SDL2_net.dll\0SDLNet_UDP_Open\0SDL2_net.dl"
    "l\0SDLNet_UDP_Recv\0SDL2_net.dll\0SDLNet_UDP_Send\0SDL2.dll\0SDL_CloseAudio\0SDL2.dll\0SDL_Creat"
    "eRGBSurface\0SDL2.dll\0SDL_CreateRGBSurfaceWithFormatFrom\0SDL2.dll\0SDL_CreateRenderer\0SDL2.dl"
    "l\0SDL_CreateTexture\0SDL2.dll\0SDL_CreateWindow\0SDL2.dll\0SDL_Delay\0SDL2.dll\0SDL_DestroyRend"
    "erer\0SDL2.dll\0SDL_DestroyTexture\0SDL2.dll\0SDL_DestroyWindow\0SDL2.dll\0SDL_FillRect\0SDL2.dl"
    "l\0SDL_FreeSurface\0SDL2.dll\0SDL_GameControllerClose\0SDL2.dll\0SDL_GameControllerEventState\0S"
    "DL2.dll\0SDL_GameControllerGetJoystick\0SDL2.dll\0SDL_GameControllerOpen\0SDL2.dll\0SDL_GetAudio"
    "DeviceName\0SDL2.dll\0SDL_GetCurrentAudioDriver\0SDL2.dll\0SDL_GetCurrentDisplayMode\0SDL2.dll\0"
    "SDL_GetError\0SDL2.dll\0SDL_GetPerformanceCounter\0SDL2.dll\0SDL_GetPerformanceFrequency\0SDL2.d"
    "ll\0SDL_GetRelativeMouseState\0SDL2.dll\0SDL_GetTicks\0SDL2.dll\0SDL_Init\0SDL2.dll\0SDL_InitSub"
    "System\0SDL2.dll\0SDL_JoystickInstanceID\0SDL2.dll\0SDL_LockAudio\0SDL2.dll\0SDL_LockSurface\0SD"
    "L2.dll\0SDL_LockTexture\0SDL2.dll\0SDL_LowerBlit\0SDL2.dll\0SDL_MinimizeWindow\0SDL2.dll\0SDL_Op"
    "enAudio\0SDL2.dll\0SDL_PauseAudio\0SDL2.dll\0SDL_PollEvent\0SDL2.dll\0SDL_Quit\0SDL2.dll\0SDL_Qu"
    "itSubSystem\0SDL2.dll\0SDL_RenderClear\0SDL2.dll\0SDL_RenderCopy\0SDL2.dll\0SDL_RenderPresent\0S"
    "DL2.dll\0SDL_RenderSetLogicalSize\0SDL2.dll\0SDL_SetHint\0SDL2.dll\0SDL_SetMainReady\0SDL2.dll\0"
    "SDL_SetPaletteColors\0SDL2.dll\0SDL_SetRelativeMouseMode\0SDL2.dll\0SDL_SetRenderDrawColor\0SDL2"
    ".dll\0SDL_SetWindowFullscreen\0SDL2.dll\0SDL_SetWindowMinimumSize\0SDL2.dll\0SDL_SetWindowPositi"
    "on\0SDL2.dll\0SDL_SetWindowSize\0SDL2.dll\0SDL_ShowCursor\0SDL2.dll\0SDL_ShowSimpleMessageBox\0S"
    "DL2.dll\0SDL_UnlockAudio\0SDL2.dll\0SDL_UnlockSurface\0SDL2.dll\0SDL_UnlockTexture\0SDL2.dll\0SD"
    "L_WaitEvent\0SDL2.dll\0SDL_WarpMouseInWindow\0SDL2.dll\0SDL_calloc\0SDL2.dll\0SDL_free\0SDL2.dll"
    "\0SDL_getenv\0SDL2.dll\0SDL_iconv_string\0SDL2.dll\0SDL_malloc\0SDL2.dll\0SDL_memcmp\0SDL2.dll\0"
    "SDL_memcpy\0SDL2.dll\0SDL_memmove\0SDL2.dll\0SDL_memset\0SDL2.dll\0SDL_snprintf\0SDL2.dll\0SDL_s"
    "trchr\0SDL2.dll\0SDL_strcmp\0SDL2.dll\0SDL_strlen\0SDL2.dll\0SDL_strncasecmp\0SDL2.dll\0SDL_strn"
    "cmp\0SDL2.dll\0SDL_strrchr\0SDL2.dll\0SDL_strstr\0SDL2.dll\0SDL_strtol\0SDL2.dll\0SDL_wcslen\0KE"
    "RNEL32.dll\0SetUnhandledExceptionFilter\0api-ms-win-crt-stdio-l1-1-0.dll\0__acrt_iob_func\0VCRUN"
    "TIME140.dll\0__current_exception\0VCRUNTIME140.dll\0__current_exception_context\0api-ms-win-crt-"
    "math-l1-1-0.dll\0__setusermatherr\0VCRUNTIME140.dll\0__std_type_info_destroy_list\0api-ms-win-cr"
    "t-runtime-l1-1-0.dll\0_c_exit\0api-ms-win-crt-runtime-l1-1-0.dll\0_cexit\0api-ms-win-crt-stdio-l"
    "1-1-0.dll\0_close\0api-ms-win-crt-locale-l1-1-0.dll\0_configthreadlocale\0api-ms-win-crt-runtime"
    "-l1-1-0.dll\0_configure_narrow_argv\0api-ms-win-crt-runtime-l1-1-0.dll\0_crt_at_quick_exit\0api-"
    "ms-win-crt-runtime-l1-1-0.dll\0_crt_atexit\0api-ms-win-crt-math-l1-1-0.dll\0_except1\0VCRUNTIME1"
    "40.dll\0_except_handler4_common\0api-ms-win-crt-runtime-l1-1-0.dll\0_exit\0api-ms-win-crt-runtim"
    "e-l1-1-0.dll\0_get_narrow_winmain_command_line\0api-ms-win-crt-runtime-l1-1-0.dll\0_initialize_n"
    "arrow_environment\0api-ms-win-crt-stdio-l1-1-0.dll\0_open\0api-ms-win-crt-runtime-l1-1-0.dll\0_r"
    "egister_thread_local_exe_atexit_callback\0api-ms-win-crt-runtime-l1-1-0.dll\0_seh_filter_dll\0ap"
    "i-ms-win-crt-runtime-l1-1-0.dll\0_seh_filter_exe\0api-ms-win-crt-runtime-l1-1-0.dll\0_set_app_ty"
    "pe\0api-ms-win-crt-stdio-l1-1-0.dll\0_set_fmode\0api-ms-win-crt-heap-l1-1-0.dll\0_set_new_mode\0"
    "api-ms-win-crt-filesystem-l1-1-0.dll\0_unlink\0api-ms-win-crt-stdio-l1-1-0.dll\0_write\0api-ms-w"
    "in-crt-convert-l1-1-0.dll\0atof\0api-ms-win-crt-convert-l1-1-0.dll\0atoi\0api-ms-win-crt-heap-l1"
    "-1-0.dll\0calloc\0api-ms-win-crt-math-l1-1-0.dll\0ceil\0api-ms-win-crt-stdio-l1-1-0.dll\0clearer"
    "r\0api-ms-win-crt-runtime-l1-1-0.dll\0exit\0api-ms-win-crt-stdio-l1-1-0.dll\0fclose\0api-ms-win-"
    "crt-stdio-l1-1-0.dll\0feof\0api-ms-win-crt-stdio-l1-1-0.dll\0ferror\0api-ms-win-crt-stdio-l1-1-0"
    ".dll\0fflush\0api-ms-win-crt-stdio-l1-1-0.dll\0fgetc\0api-ms-win-crt-math-l1-1-0.dll\0floor\0api"
    "-ms-win-crt-stdio-l1-1-0.dll\0fopen\0api-ms-win-crt-stdio-l1-1-0.dll\0fread\0api-ms-win-crt-heap"
    "-l1-1-0.dll\0free\0api-ms-win-crt-stdio-l1-1-0.dll\0fseek\0api-ms-win-crt-stdio-l1-1-0.dll\0ftel"
    "l\0api-ms-win-crt-stdio-l1-1-0.dll\0fwrite\0api-ms-win-crt-stdio-l1-1-0.dll\0getc\0WS2_32.dll\0g"
    "ethostname\0api-ms-win-crt-heap-l1-1-0.dll\0malloc\0VCRUNTIME140.dll\0memcpy\0VCRUNTIME140.dll\0"
    "memmove\0VCRUNTIME140.dll\0memset\0vorbisfile.dll\0ov_clear\0vorbisfile.dll\0ov_info\0vorbisfile"
    ".dll\0ov_open_callbacks\0vorbisfile.dll\0ov_read\0vorbisfile.dll\0ov_seekable\0vorbisfile.dll\0o"
    "v_streams\0vorbisfile.dll\0ov_time_seek\0api-ms-win-crt-utility-l1-1-0.dll\0rand\0api-ms-win-crt"
    "-runtime-l1-1-0.dll\0signal\0api-ms-win-crt-runtime-l1-1-0.dll\0strerror\0api-ms-win-crt-string-"
    "l1-1-0.dll\0strncpy\0api-ms-win-crt-runtime-l1-1-0.dll\0terminate"
};
const uint8_t ra_proc_pops[1] RA_ALIGNED(16) = {0};
_Thread_local uint8_t ra_args[16] RA_ALIGNED(16);
RA_CONSTRUCTOR(ra_init_data) {
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 0) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_init_stream + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 4) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_delete + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 8) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_new + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 12) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_finish + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 16) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_process_single + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 20) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_process_until_end_of_metadata + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 24) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_seek_absolute + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 28) = (uint32_t)(uintptr_t)((uint8_t *)&FLAC__stream_decoder_get_state + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 36) = (uint32_t)(uintptr_t)((uint8_t *)&GetDeviceCaps + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 44) = (uint32_t)(uintptr_t)((uint8_t *)&GetProcessHeap + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 48) = (uint32_t)(uintptr_t)((uint8_t *)&IsProcessorFeaturePresent + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 52) = (uint32_t)(uintptr_t)((uint8_t *)&QueryPerformanceCounter + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 56) = (uint32_t)(uintptr_t)((uint8_t *)&GetCurrentProcessId + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 60) = (uint32_t)(uintptr_t)((uint8_t *)&GetCurrentThreadId + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 64) = (uint32_t)(uintptr_t)((uint8_t *)&HeapFree + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 68) = (uint32_t)(uintptr_t)((uint8_t *)&HeapAlloc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 72) = (uint32_t)(uintptr_t)((uint8_t *)&GetCommandLineW + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 76) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_get_module_handle_w + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 80) = (uint32_t)(uintptr_t)((uint8_t *)&LocalFree + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 84) = (uint32_t)(uintptr_t)((uint8_t *)&GetStartupInfoW + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 88) = (uint32_t)(uintptr_t)((uint8_t *)&SetUnhandledExceptionFilter + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 92) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_initialize_slist_head + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 96) = (uint32_t)(uintptr_t)((uint8_t *)&GetSystemTimeAsFileTime + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 104) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_Delay + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 108) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetTicks + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 112) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_WaitEvent + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 116) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetCurrentDisplayMode + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 120) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetError + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 124) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_Init + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 128) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_QuitSubSystem + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 132) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_Quit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 136) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetRelativeMouseState + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 140) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetRelativeMouseMode + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 144) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_ShowCursor + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 148) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetHint + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 152) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_JoystickInstanceID + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 156) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GameControllerOpen + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 160) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GameControllerGetJoystick + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 164) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GameControllerEventState + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 168) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GameControllerClose + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 172) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_InitSubSystem + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 176) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetCurrentAudioDriver + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 180) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_OpenAudio + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 184) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetAudioDeviceName + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 188) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_PauseAudio + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 192) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_LockAudio + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 196) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_UnlockAudio + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 200) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_getenv + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 204) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_PollEvent + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 208) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetPerformanceCounter + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 212) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_GetPerformanceFrequency + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 216) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetPaletteColors + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 220) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CreateRGBSurface + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 224) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CreateRGBSurfaceWithFormatFrom + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 228) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_FreeSurface + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 232) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_LockSurface + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 236) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_UnlockSurface + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 240) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_FillRect + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 244) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_LowerBlit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 248) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_LockTexture + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 252) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_UnlockTexture + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 256) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CreateWindow + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 260) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetWindowPosition + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 264) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetWindowSize + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 268) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetWindowMinimumSize + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 272) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_snprintf + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 276) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetWindowFullscreen + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 280) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_DestroyWindow + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 284) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_WarpMouseInWindow + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 288) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CreateRenderer + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 292) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CreateTexture + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 296) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_RenderSetLogicalSize + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 300) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetRenderDrawColor + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 304) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_RenderClear + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 308) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_RenderCopy + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 312) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_RenderPresent + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 316) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_DestroyTexture + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 320) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_DestroyRenderer + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 324) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_wcslen + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 328) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_free + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 332) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_iconv_string + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 336) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_SetMainReady + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 340) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_ShowSimpleMessageBox + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 344) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_calloc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 348) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strncasecmp + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 352) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strncmp + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 356) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strcmp + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 360) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_malloc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 364) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strstr + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 368) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strrchr + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 372) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strchr + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 376) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strlen + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 380) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_memcmp + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 384) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_memmove + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 388) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_memcpy + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 392) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_memset + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 396) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_CloseAudio + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 400) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_MinimizeWindow + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 404) = (uint32_t)(uintptr_t)((uint8_t *)&SDL_strtol + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 412) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_Init + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 416) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_ResolveHost + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 420) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_ResolveIP + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 424) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_UDP_Close + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 428) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_UDP_Open + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 432) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_UDP_GetPeerAddress + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 436) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_UDP_Send + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 440) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_UDP_Recv + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 444) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_GetLocalAddresses + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 448) = (uint32_t)(uintptr_t)((uint8_t *)&SDLNet_GetError + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 456) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_command_line_to_argv_w + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 464) = (uint32_t)(uintptr_t)((uint8_t *)&ReleaseDC + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 468) = (uint32_t)(uintptr_t)((uint8_t *)&GetDC + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 476) = (uint32_t)(uintptr_t)((uint8_t *)&memmove + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 480) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_longjmp + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 484) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_setjmp3 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 488) = (uint32_t)(uintptr_t)((uint8_t *)&memset + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 492) = (uint32_t)(uintptr_t)((uint8_t *)&memcpy + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 496) = (uint32_t)(uintptr_t)((uint8_t *)&_except_handler4_common + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 500) = (uint32_t)(uintptr_t)((uint8_t *)&__std_type_info_destroy_list + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 504) = (uint32_t)(uintptr_t)((uint8_t *)&__current_exception + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 508) = (uint32_t)(uintptr_t)((uint8_t *)&__current_exception_context + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 516) = (uint32_t)(uintptr_t)((uint8_t *)&gethostname + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 524) = (uint32_t)(uintptr_t)((uint8_t *)&atoi + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 528) = (uint32_t)(uintptr_t)((uint8_t *)&atof + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 536) = (uint32_t)(uintptr_t)((uint8_t *)&_unlink + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 544) = (uint32_t)(uintptr_t)((uint8_t *)&malloc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 548) = (uint32_t)(uintptr_t)((uint8_t *)&_set_new_mode + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 552) = (uint32_t)(uintptr_t)((uint8_t *)&free + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 556) = (uint32_t)(uintptr_t)((uint8_t *)&calloc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 564) = (uint32_t)(uintptr_t)((uint8_t *)&_configthreadlocale + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 572) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_pow_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 576) = (uint32_t)(uintptr_t)((uint8_t *)&_except1 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 580) = (uint32_t)(uintptr_t)((uint8_t *)&__setusermatherr + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 584) = (uint32_t)(uintptr_t)((uint8_t *)&ceil + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 588) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_ci_atan2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 592) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_tan_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 596) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_sqrt_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 600) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_cos_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 604) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_sin_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 608) = (uint32_t)(uintptr_t)((uint8_t *)&floor + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 612) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_atan_sse2 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 620) = (uint32_t)(uintptr_t)((uint8_t *)&terminate + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 624) = (uint32_t)(uintptr_t)((uint8_t *)&_cexit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 628) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_controlfp_s + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 632) = (uint32_t)(uintptr_t)((uint8_t *)&_exit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 636) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_initterm_e + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 640) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_initterm + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 644) = (uint32_t)(uintptr_t)((uint8_t *)&_get_narrow_winmain_command_line + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 648) = (uint32_t)(uintptr_t)((uint8_t *)&_initialize_narrow_environment + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 652) = (uint32_t)(uintptr_t)((uint8_t *)&_configure_narrow_argv + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 656) = (uint32_t)(uintptr_t)((uint8_t *)&_crt_at_quick_exit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 660) = (uint32_t)(uintptr_t)((uint8_t *)&_c_exit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 664) = (uint32_t)(uintptr_t)((uint8_t *)&_seh_filter_exe + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 668) = (uint32_t)(uintptr_t)((uint8_t *)&_crt_atexit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 672) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_execute_onexit_table + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 676) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_register_onexit_function + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 680) = (uint32_t)(uintptr_t)((uint8_t *)&signal + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 684) = (uint32_t)(uintptr_t)((uint8_t *)&strerror + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 688) = (uint32_t)(uintptr_t)((uint8_t *)&exit + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 692) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_errno + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 696) = (uint32_t)(uintptr_t)((uint8_t *)&_register_thread_local_exe_atexit_callback + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 700) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_initialize_onexit_table + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 704) = (uint32_t)(uintptr_t)((uint8_t *)&_seh_filter_dll + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 708) = (uint32_t)(uintptr_t)((uint8_t *)&_set_app_type + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 716) = (uint32_t)(uintptr_t)((uint8_t *)&fwrite + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 720) = (uint32_t)(uintptr_t)((uint8_t *)&_set_fmode + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 724) = (uint32_t)(uintptr_t)((uint8_t *)&fread + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 728) = (uint32_t)(uintptr_t)((uint8_t *)&ftell + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 732) = (uint32_t)(uintptr_t)((uint8_t *)&_write + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 736) = (uint32_t)(uintptr_t)((uint8_t *)&_open + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 740) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_p_commode + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 744) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_vfscanf + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 748) = (uint32_t)(uintptr_t)((uint8_t *)&fgetc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 752) = (uint32_t)(uintptr_t)((uint8_t *)&fflush + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 756) = (uint32_t)(uintptr_t)((uint8_t *)&feof + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 760) = (uint32_t)(uintptr_t)((uint8_t *)&_close + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 764) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_vsprintf + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 768) = (uint32_t)(uintptr_t)((uint8_t *)&fopen + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 772) = (uint32_t)(uintptr_t)((uint8_t *)&fclose + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 776) = (uint32_t)(uintptr_t)((uint8_t *)&ra_x86_vfprintf + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 780) = (uint32_t)(uintptr_t)((uint8_t *)&__acrt_iob_func + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 784) = (uint32_t)(uintptr_t)((uint8_t *)&ferror + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 788) = (uint32_t)(uintptr_t)((uint8_t *)&clearerr + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 792) = (uint32_t)(uintptr_t)((uint8_t *)&getc + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 796) = (uint32_t)(uintptr_t)((uint8_t *)&fseek + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 804) = (uint32_t)(uintptr_t)((uint8_t *)&strncpy + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 812) = (uint32_t)(uintptr_t)((uint8_t *)&rand + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 820) = (uint32_t)(uintptr_t)((uint8_t *)&ov_time_seek + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 824) = (uint32_t)(uintptr_t)((uint8_t *)&ov_clear + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 828) = (uint32_t)(uintptr_t)((uint8_t *)&ov_streams + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 832) = (uint32_t)(uintptr_t)((uint8_t *)&ov_seekable + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 836) = (uint32_t)(uintptr_t)((uint8_t *)&ov_open_callbacks + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 840) = (uint32_t)(uintptr_t)((uint8_t *)&ov_info + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 844) = (uint32_t)(uintptr_t)((uint8_t *)&ov_read + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 30312) = (uint32_t)(uintptr_t)((uint8_t *)&U_0043e310 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 30316) = (uint32_t)(uintptr_t)((uint8_t *)&U_0043e7c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 30320) = (uint32_t)(uintptr_t)((uint8_t *)&U_00441f20 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34648) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 33952);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34652) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34024);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34656) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34144);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34660) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 33976);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34664) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34064);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34668) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34672) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34000);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34676) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34104);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34680) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34684) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34692) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34432);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34696) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34700) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34352);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34704) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34468);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34708) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34712) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34392);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34716) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34720) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34724) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34392);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34728) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34732) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34392);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34740) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34744) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34540);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34748) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 34752) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 34604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101136) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101400);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101140) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101456);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101152) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101492);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101160) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101540);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101184) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101624);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101200) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101680);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101208) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101216) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 101944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101224) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 102056);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101232) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 102264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101240) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 102472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101248) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 102664);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 103464);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101272) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101280) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101296) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101320) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101328) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 104224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101344) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101352) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 101392) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 128024) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 111640);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 132136) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 128040);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133176) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 132152);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133508) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 17920);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133512) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 133888);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133520) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 852);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133608) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 133892);
    *(ra_ua_uint32 *)((uint8_t *)&sec_rdata + 133632) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 0) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1016);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 24) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1060);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 28) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 48) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1072);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 52) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 72) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1084);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 76) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 96) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 992);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1004);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 924);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 976);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 216) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1028);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 220) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 240) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1040);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 244) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1092);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 268) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1104);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 292) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 956);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 316) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 968);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1048);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 340) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4160);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4172);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4180);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 392) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4188);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 400) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4200);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4208);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 416) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4220);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4232);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 440) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4248);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 464) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 472) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4272);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 480) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4276);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 488) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 496) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4284);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 512) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4292);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 520) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4296);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 528) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4300);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 536) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4304);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 544) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4308);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 552) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 560) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4316);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 568) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4320);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 576) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4328);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 584) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4336);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 592) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 600) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4348);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 608) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4356);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 616) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4364);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 624) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4372);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 632) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4380);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 640) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4388);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 648) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 656) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4404);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 664) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4412);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 672) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4420);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 680) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4428);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4436);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 696) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 704) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4460);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 712) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 720) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4484);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 728) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4492);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 744) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 752) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4516);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 760) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4524);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 768) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4532);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 776) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4540);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4548);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 792) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4556);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 800) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 808) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 816) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4580);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 824) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4588);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4596);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 840) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 848) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4612);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 856) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4620);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 864) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4628);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 872) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4636);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 880) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4644);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 888) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4652);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 896) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4660);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 904) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4668);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 912) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4676);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 920) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4684);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 928) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4692);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 936) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4700);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 944) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4712);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 952) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 4724);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 976) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5336);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5360);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1552) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1556) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1576) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5252);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1580) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1600) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5272);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1604) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5300);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1624) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5308);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1628) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5300);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1648) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5364);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1652) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5384);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1672) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5388);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1676) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5412);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1696) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5416);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1700) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1720) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5428);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1724) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1744) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1748) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1768) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5468);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1772) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1792) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1796) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1828) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1336);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1836) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1844) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1848) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1852) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1892) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 992);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1896) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1908) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 992);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1912) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 1528);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1952) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7284);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1960) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1964) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1968) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1972) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7284);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1976) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7340);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1984) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7368);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1988) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1992) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 1996) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7424);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2000) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7452);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2004) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2008) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2012) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2016) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2020) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2024) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7580);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7592);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2032) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7608);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2036) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7616);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2040) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7632);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2044) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7644);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2048) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7660);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7668);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2056) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7680);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2060) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7688);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2064) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7700);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2068) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7708);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2072) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7720);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7728);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2080) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7732);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2084) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7744);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2088) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7756);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2092) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7768);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2096) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7780);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7788);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2104) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7800);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2108) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2112) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7816);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2116) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7828);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7852);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2128) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7864);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2132) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7872);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2136) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7884);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2140) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7892);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7908);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7916);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2152) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7924);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2156) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7936);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2248) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7948);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2252) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7956);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2256) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7968);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2260) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7976);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7996);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2268) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8004);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2272) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8028);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2276) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8036);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2280) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8052);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2284) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8060);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8080);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2292) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8088);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2296) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8100);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2300) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8108);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8128);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8136);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8156);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2316) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2320) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2324) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8192);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2328) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8212);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8220);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8236);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2340) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2344) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8260);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2348) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2352) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2356) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8296);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8316);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2364) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8324);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8348);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2372) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8356);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8368);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2380) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8376);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2388) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8404);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2392) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8424);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2396) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8432);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2400) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8452);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2404) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8460);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8484);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2412) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8492);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2416) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2420) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8516);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2428) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8544);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2436) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2440) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8592);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2444) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8600);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8624);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2452) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8632);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8656);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2460) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8664);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2464) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8684);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2468) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8692);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2472) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8708);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2476) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8716);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2480) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8732);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2484) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8740);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2488) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8752);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2492) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8760);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2496) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8780);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2500) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8784);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2508) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8812);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2512) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8832);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2516) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8836);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2520) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8856);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2524) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2528) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8880);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2532) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8884);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2536) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2540) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8904);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2544) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8916);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2548) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8920);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2552) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7948);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2556) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8936);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2560) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8948);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2564) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8956);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2568) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8976);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2572) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 8984);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2576) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9004);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2580) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9012);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2584) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9028);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2588) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9036);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2592) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9056);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2596) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9064);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2600) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9084);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2604) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9092);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2608) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9108);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2612) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9116);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2616) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9136);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2620) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9144);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2624) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9160);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2628) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9168);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2632) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9180);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2636) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9188);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2640) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9204);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2644) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9212);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2648) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9236);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2652) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2656) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2660) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2664) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9276);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2668) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9284);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2672) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9292);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2676) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9300);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2680) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9316);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2684) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9324);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9340);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2692) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9348);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2696) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 7948);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2700) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9372);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2704) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9388);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2708) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2712) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9416);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2716) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9424);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2720) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9440);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2724) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2728) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9464);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2732) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2740) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9496);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2744) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9512);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2748) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9520);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2752) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2756) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9544);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2760) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9568);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2764) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9576);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2768) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9592);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2772) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9600);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2776) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9620);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2780) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9628);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9648);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2788) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9656);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2792) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9672);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2796) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9680);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2800) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9696);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2804) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9704);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2808) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9720);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2812) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9728);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2816) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9744);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2820) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9752);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2824) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9768);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2828) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9776);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9796);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2844) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9816);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2856) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9836);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2868) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2880) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9872);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2892) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9888);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2904) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2920) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9920);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2932) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2944) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9964);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9988);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2968) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9888);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 2992) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10000);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3004) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10016);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3016) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10032);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 9900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3112) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 2112);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3116) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3136) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14456);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3140) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14476);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3160) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14484);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3164) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3184) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3188) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14524);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3208) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14532);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3212) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3232) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14552);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3236) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14576);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3256) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14580);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3260) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14600);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3280) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3284) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1327);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14624);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14648);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 15056);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 15076);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3384) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411280 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3408) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411330 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 15592);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3432) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413760 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3436) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413770 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3440) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413780 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3444) = (uint32_t)(uintptr_t)((uint8_t *)&U_004135c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3448) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413500 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3452) = (uint32_t)(uintptr_t)((uint8_t *)&U_004136c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3456) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413810 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3460) = (uint32_t)(uintptr_t)((uint8_t *)&U_004138c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3464) = (uint32_t)(uintptr_t)((uint8_t *)&U_004134d0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3468) = (uint32_t)(uintptr_t)((uint8_t *)&U_004134f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3472) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413570 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3476) = (uint32_t)(uintptr_t)((uint8_t *)&U_00413950 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3484) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 15604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3492) = (uint32_t)(uintptr_t)((uint8_t *)&U_00412180 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3496) = (uint32_t)(uintptr_t)((uint8_t *)&U_004121e0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3500) = (uint32_t)(uintptr_t)((uint8_t *)&U_00412200 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3504) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411dc0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3508) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411d20 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3512) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411e90 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3516) = (uint32_t)(uintptr_t)((uint8_t *)&U_00412230 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3520) = (uint32_t)(uintptr_t)((uint8_t *)&U_004122f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3524) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411cf0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3528) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411d10 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3532) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411da0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3536) = (uint32_t)(uintptr_t)((uint8_t *)&U_00412370 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3920) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411980 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3944) = (uint32_t)(uintptr_t)((uint8_t *)&U_00411b20 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3952) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16816);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3976) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16828);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 3980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4000) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16836);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4004) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4024) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16848);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4048) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4072) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16872);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4096) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16884);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16908);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16916);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16924);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4248) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18096);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4252) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18104);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4256) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18112);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4260) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18120);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18128);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4268) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18136);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4272) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18140);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4276) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18148);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4280) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18156);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4284) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18172);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4292) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18180);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4296) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18188);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4300) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18196);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18204);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18212);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18220);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4316) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18228);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4320) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18236);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4324) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18244);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4328) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18252);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18256);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18260);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4340) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18264);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4344) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4348) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4352) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4356) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4364) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4372) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18296);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4380) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18304);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4388) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18324);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4392) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18336);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4396) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18348);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4400) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18360);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4404) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18372);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18384);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4412) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4416) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18408);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4420) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18420);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18428);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4428) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18436);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4436) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18452);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4440) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18460);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4444) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18468);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4452) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4460) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18496);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4464) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4468) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18512);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4472) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18520);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4476) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18528);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4480) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4484) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18544);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4488) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18552);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4492) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18560);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4496) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18568);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4500) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18576);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4508) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18584);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4512) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18952);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4516) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 18960);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4536) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4540) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416800 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4544) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416830 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4548) = (uint32_t)(uintptr_t)((uint8_t *)&U_004168a0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4552) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416870 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4556) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4560) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416ff0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4564) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416db0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4568) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416f20 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4572) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416a60 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4576) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416760 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4580) = (uint32_t)(uintptr_t)((uint8_t *)&U_004167b0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4584) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416b30 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4588) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416ba0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4592) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417670 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4596) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417690 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4600) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417010 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4604) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417170 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4608) = (uint32_t)(uintptr_t)((uint8_t *)&U_004176b0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4612) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417780 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4616) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417800 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4620) = (uint32_t)(uintptr_t)((uint8_t *)&U_004172d0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4624) = (uint32_t)(uintptr_t)((uint8_t *)&U_004173d0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4628) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416960 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4632) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416980 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4636) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417560 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4640) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4644) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417610 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4648) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417890 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4652) = (uint32_t)(uintptr_t)((uint8_t *)&U_004178a0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4656) = (uint32_t)(uintptr_t)((uint8_t *)&U_004178b0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4660) = (uint32_t)(uintptr_t)((uint8_t *)&U_004178c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4664) = (uint32_t)(uintptr_t)((uint8_t *)&U_004178e0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4668) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4672) = (uint32_t)(uintptr_t)((uint8_t *)&U_004179f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4676) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417b20 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4680) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417bb0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4684) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417c00 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4688) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417c40 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4692) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4696) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417c80 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4700) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417cb0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4704) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4708) = (uint32_t)(uintptr_t)((uint8_t *)&U_004175f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4712) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417d40 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4716) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417370 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4720) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417350 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4724) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417ce0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4728) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416de0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4732) = (uint32_t)(uintptr_t)((uint8_t *)&U_004181b0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4736) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4740) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416c40 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4744) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418270 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4748) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418290 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4752) = (uint32_t)(uintptr_t)((uint8_t *)&U_004182b0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4756) = (uint32_t)(uintptr_t)((uint8_t *)&U_004182d0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4760) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418310 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4764) = (uint32_t)(uintptr_t)((uint8_t *)&U_004182f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4768) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418330 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4772) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418350 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4776) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4780) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4784) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4788) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4792) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4796) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4800) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4804) = (uint32_t)(uintptr_t)((uint8_t *)&U_004300c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4808) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417770 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4812) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418380 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4816) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418540 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4820) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418580 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4824) = (uint32_t)(uintptr_t)((uint8_t *)&U_004173a0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4828) = (uint32_t)(uintptr_t)((uint8_t *)&U_004169f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4832) = (uint32_t)(uintptr_t)((uint8_t *)&U_00416e10 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4836) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417800 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4840) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417780 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4844) = (uint32_t)(uintptr_t)((uint8_t *)&U_00417770 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4848) = (uint32_t)(uintptr_t)((uint8_t *)&U_00418450 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4852) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 4536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4860) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19552);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4864) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4884) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4888) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4908) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19576);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4912) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4932) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19588);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4936) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19624);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4960) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19636);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 4984) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5004) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19652);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5008) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19684);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5032) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19704);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5056) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19728);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5080) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19740);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5104) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19756);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5128) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19768);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5152) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19780);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5176) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19796);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5200) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5220) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5224) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5252) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 478832);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5256) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19668);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5260) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5280) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19820);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5284) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19844);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19716);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19608);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5372) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 20648);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5412) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 20660);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5436) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 20672);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 5460) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7660) = (uint32_t)(uintptr_t)((uint8_t *)&U_00424290 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7664) = (uint32_t)(uintptr_t)((uint8_t *)&U_00424440 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7668) = (uint32_t)(uintptr_t)((uint8_t *)&U_00424600 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7672) = (uint32_t)(uintptr_t)((uint8_t *)&U_00424750 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7692) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7704) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7708) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7712) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7724) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7728) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7732) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7740) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7744) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7760) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7764) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7776) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7780) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7796) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7800) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7812) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7816) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7820) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7836) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7840) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7848) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7852) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7868) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7872) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7884) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7888) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7904) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7908) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7920) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7924) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7928) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7940) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7944) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7948) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7960) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7976) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7992) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 7996) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8012) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8016) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8032) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8048) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8064) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8068) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8084) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8088) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369280);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369344);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 8104) = (uint32_t)(uintptr_t)((uint8_t *)&sec_data + 369312);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22064);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16328) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22072);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 15076);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16352) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22088);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16356) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22104);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16380) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16400) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22112);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16404) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22124);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16428) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22136);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16452) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22152);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16472) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10876);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16476) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16496) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22756);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16500) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 14500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16520) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22768);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16524) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16544) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22784);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16548) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22796);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16568) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22800);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16572) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22816);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16592) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 22824);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16596) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16616) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23128);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16620) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16640) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23144);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16644) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16664) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23168);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16668) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23180);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16692) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19604);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16720) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23584);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23588);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16752) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23596);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16768) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23600);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23608);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16800) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23612);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16816) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23616);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23620);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16848) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23624);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16864) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23628);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16896) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24048);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16900) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16920) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24072);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16924) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24084);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16944) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24092);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16948) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24108);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16968) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24116);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16972) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24136);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16992) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24060);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 16996) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17016) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10908);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17020) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17040) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10920);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17044) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24044);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17072) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24140);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17096) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24148);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24168);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24204);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24216);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24232);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17232) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23596);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17236) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434680 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17240) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434690 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17244) = (uint32_t)(uintptr_t)((uint8_t *)&U_004346a0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17248) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434760 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17252) = (uint32_t)(uintptr_t)((uint8_t *)&U_004347c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17260) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434790 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17276) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23584);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17280) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434ee0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17284) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434ef0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17288) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434f00 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17292) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435020 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17296) = (uint32_t)(uintptr_t)((uint8_t *)&U_004350c0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17304) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435090 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17312) = (uint32_t)(uintptr_t)((uint8_t *)&U_0044c350 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17316) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434ec0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17320) = (uint32_t)(uintptr_t)((uint8_t *)&U_00434eb0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17324) = (uint32_t)(uintptr_t)((uint8_t *)&U_0044c470 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23600);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17340) = (uint32_t)(uintptr_t)((uint8_t *)&U_004350e0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17344) = (uint32_t)(uintptr_t)((uint8_t *)&U_004350f0 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17348) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435100 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17352) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435270 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17356) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435320 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17364) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435300 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17380) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23608);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17384) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435750 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17388) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435760 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17392) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435630 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17396) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435690 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17400) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435730 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17408) = (uint32_t)(uintptr_t)((uint8_t *)&U_00435710 + 0);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17444) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17464) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17468) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28516);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17484) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17488) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28544);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17508) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28572);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17524) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17528) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28592);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17544) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28612);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17548) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28620);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17564) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17568) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28640);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17584) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17588) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28660);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17604) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28680);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17608) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28692);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17624) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28712);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17628) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28724);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17644) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28744);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17648) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28756);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17664) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28776);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17668) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28788);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17684) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28820);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17704) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17708) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28852);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17724) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28872);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17728) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28884);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17732) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28908);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17756) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28920);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17760) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17780) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28948);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17804) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28968);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17808) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 29212);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 17836) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18024) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105864);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18048) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105872);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18072) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105884);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18096) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105896);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105908);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105924);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5300);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105952);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105964);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18216) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105968);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18220) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105980);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18240) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105984);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18244) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105980);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105996);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18268) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105964);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106008);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18292) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105964);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106020);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18316) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5444);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106036);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18340) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105980);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106052);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18364) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18388) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106084);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18412) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24232);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106100);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18436) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106116);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18460) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18480) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106128);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18484) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106140);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18508) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18528) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106152);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18532) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18552) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18556) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18576) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18580) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106200);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18600) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106208);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18604) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18688) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10888);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18692) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18712) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105856);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18716) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18736) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106384);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18740) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19860);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18760) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106396);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18764) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106408);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106412);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18788) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18808) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106424);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18812) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18832) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 3048);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18836) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106440);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18856) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 3204);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18860) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18880) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18884) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18904) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106460);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18908) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18928) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10968);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18932) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18952) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10980);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18956) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18976) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10896);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 18980) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19000) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10960);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19004) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19024) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19028) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106472);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19048) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106488);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19052) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1068);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19072) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 106500);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19076) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19096) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107400);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19100) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19120) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10928);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19124) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19144) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 10944);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19148) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 19840);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19168) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107412);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19172) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107428);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19192) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107432);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19196) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 105940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19216) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107448);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19220) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107460);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19240) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107464);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19244) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107480);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19264) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107484);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19268) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 107504);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19288) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108004);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19292) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108012);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19296) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108020);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19300) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108036);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19304) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108052);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19308) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108064);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19312) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108076);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19316) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108088);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19320) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108100);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19324) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108112);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19328) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108128);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19332) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108144);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19336) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108160);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19340) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108176);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19344) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108192);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19348) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108208);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19352) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108224);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19356) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108240);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19360) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108260);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19364) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108276);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19368) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108288);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19372) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108304);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19376) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108332);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19380) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108352);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19384) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108368);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19388) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108384);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19392) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108400);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19396) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108416);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19400) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108436);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19404) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108452);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19408) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108476);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19412) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108496);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19416) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108508);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19420) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108520);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19424) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 108536);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19432) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1327);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19436) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 2420);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19440) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 110164);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19444) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 16268);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19448) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 24684);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19452) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 23900);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19456) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 5564);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19460) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 110172);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19464) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 110184);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19472) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 110796);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19476) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19500) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 110808);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19504) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 940);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19784) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 1327);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19792) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 111328);
    *(ra_ua_uint32 *)((uint8_t *)&sec_data + 19796) = (uint32_t)(uintptr_t)((uint8_t *)&sec_rdata + 28944);
}
