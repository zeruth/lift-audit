#include "program.h"

// 0x439dd2
void thunk_gethostname(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_gethostname");
    gethostname(arg0, arg1);
}

// 0x439dd8
uint64_t thunk_SDLNet_Init(void) { RA_ENTER("thunk_SDLNet_Init");
    return SDLNet_Init();
}

// 0x439dde
uint64_t thunk_SDLNet_ResolveHost(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDLNet_ResolveHost");
    return SDLNet_ResolveHost(arg0, arg1, arg2);
}

// 0x439de4
uint64_t thunk_SDLNet_ResolveIP(uint32_t arg0) { RA_ENTER("thunk_SDLNet_ResolveIP");
    return SDLNet_ResolveIP(arg0);
}

// 0x439dea
void thunk_SDLNet_GetLocalAddresses(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDLNet_GetLocalAddresses");
    SDLNet_GetLocalAddresses(arg0, arg1);
}

// 0x439df0
uint64_t thunk_SDLNet_UDP_Open(uint32_t arg0) { RA_ENTER("thunk_SDLNet_UDP_Open");
    return SDLNet_UDP_Open(arg0);
}

// 0x439df6
uint64_t thunk_SDLNet_UDP_GetPeerAddress(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDLNet_UDP_GetPeerAddress");
    return SDLNet_UDP_GetPeerAddress(arg0, arg1);
}

// 0x439dfc
uint64_t thunk_SDLNet_UDP_Send(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDLNet_UDP_Send");
    return SDLNet_UDP_Send(arg0, arg1, arg2);
}

// 0x439e02
uint64_t thunk_SDLNet_UDP_Recv(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDLNet_UDP_Recv");
    return SDLNet_UDP_Recv(arg0, arg1);
}

// 0x439e08
uint64_t thunk_SDLNet_UDP_Close(uint32_t arg0) { RA_ENTER("thunk_SDLNet_UDP_Close");
    return SDLNet_UDP_Close(arg0);
}

// 0x439e0e
uint64_t thunk_SDLNet_GetError(void) { RA_ENTER("thunk_SDLNet_GetError");
    return SDLNet_GetError();
}

// 0x439e14
uint64_t thunk_ov_clear(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_clear");
    return ov_clear((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e1a
uint64_t thunk_ov_open_callbacks(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_open_callbacks");
    return ov_open_callbacks((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e20
uint64_t thunk_ov_streams(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_streams");
    return ov_streams((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e26
uint64_t thunk_ov_seekable(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_seekable");
    return ov_seekable((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e2c
uint64_t thunk_ov_time_seek(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_time_seek");
    return ov_time_seek((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e32
uint64_t thunk_ov_info(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_info");
    return ov_info((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x439e38
uint64_t thunk_ov_read(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_ov_read");
    return ov_read((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x4424ab
uint64_t thunk_SDL_GetError(void) { RA_ENTER("thunk_SDL_GetError");
    return SDL_GetError();
}

// 0x4424b1
uint64_t thunk_SDL_Init(uint32_t arg0) { RA_ENTER("thunk_SDL_Init");
    return SDL_Init(arg0);
}

// 0x4424b7
void thunk_SDL_QuitSubSystem(uint32_t arg0) { RA_ENTER("thunk_SDL_QuitSubSystem");
    SDL_QuitSubSystem(arg0);
}

// 0x4424bd
void thunk_SDL_Quit(void) { RA_ENTER("thunk_SDL_Quit");
    SDL_Quit();
}

// 0x4424c3
void thunk_SDL_GetRelativeMouseState(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_GetRelativeMouseState");
    SDL_GetRelativeMouseState(arg0, arg1);
}

// 0x4424c9
void thunk_SDL_SetRelativeMouseMode(uint32_t arg0) { RA_ENTER("thunk_SDL_SetRelativeMouseMode");
    SDL_SetRelativeMouseMode(arg0);
}

// 0x4424cf
void thunk_SDL_ShowCursor(uint32_t arg0) { RA_ENTER("thunk_SDL_ShowCursor");
    SDL_ShowCursor(arg0);
}

// 0x4424d5
void thunk_SDL_SetHint(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_SetHint");
    SDL_SetHint(arg0, arg1);
}

// 0x4424db
uint64_t thunk_SDL_JoystickInstanceID(uint32_t arg0) { RA_ENTER("thunk_SDL_JoystickInstanceID");
    return SDL_JoystickInstanceID(arg0);
}

// 0x4424e1
uint64_t thunk_SDL_GameControllerOpen(uint32_t arg0) { RA_ENTER("thunk_SDL_GameControllerOpen");
    return SDL_GameControllerOpen(arg0);
}

// 0x4424e7
uint64_t thunk_SDL_GameControllerGetJoystick(uint32_t arg0) { RA_ENTER("thunk_SDL_GameControllerGetJoystick");
    return SDL_GameControllerGetJoystick(arg0);
}

// 0x4424ed
void thunk_SDL_GameControllerEventState(uint32_t arg0) { RA_ENTER("thunk_SDL_GameControllerEventState");
    SDL_GameControllerEventState(arg0);
}

// 0x4424f3
void thunk_SDL_GameControllerClose(uint32_t arg0) { RA_ENTER("thunk_SDL_GameControllerClose");
    SDL_GameControllerClose(arg0);
}

// 0x4424f9
uint64_t thunk_SDL_InitSubSystem(uint32_t arg0) { RA_ENTER("thunk_SDL_InitSubSystem");
    return SDL_InitSubSystem(arg0);
}

// 0x4424ff
uint64_t thunk_SDL_GetCurrentAudioDriver(void) { RA_ENTER("thunk_SDL_GetCurrentAudioDriver");
    return SDL_GetCurrentAudioDriver();
}

// 0x442505
uint64_t thunk_SDL_OpenAudio(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_OpenAudio");
    return SDL_OpenAudio(arg0, arg1);
}

// 0x44250b
uint64_t thunk_SDL_GetAudioDeviceName(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_GetAudioDeviceName");
    return SDL_GetAudioDeviceName(arg0, arg1);
}

// 0x442511
void thunk_SDL_PauseAudio(uint32_t arg0) { RA_ENTER("thunk_SDL_PauseAudio");
    SDL_PauseAudio(arg0);
}

// 0x442517
void thunk_SDL_LockAudio(void) { RA_ENTER("thunk_SDL_LockAudio");
    SDL_LockAudio();
}

// 0x44251d
uint64_t thunk_SDL_UnlockAudio(void) { RA_ENTER("thunk_SDL_UnlockAudio");
    return SDL_UnlockAudio() & 4294967295ull;
}

// 0x442523
void thunk_SDL_CloseAudio(void) { RA_ENTER("thunk_SDL_CloseAudio");
    SDL_CloseAudio();
}

// 0x442529
uint64_t thunk_SDL_PollEvent(uint32_t arg0) { RA_ENTER("thunk_SDL_PollEvent");
    return SDL_PollEvent(arg0) & 4294967295ull;
}

// 0x44252f
uint64_t thunk_SDL_GetPerformanceCounter(void) { RA_ENTER("thunk_SDL_GetPerformanceCounter");
    return SDL_GetPerformanceCounter();
}

// 0x442535
uint64_t thunk_SDL_GetPerformanceFrequency(void) { RA_ENTER("thunk_SDL_GetPerformanceFrequency");
    return SDL_GetPerformanceFrequency();
}

// 0x44253b
void thunk_SDL_SetPaletteColors(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_SetPaletteColors");
    SDL_SetPaletteColors(arg0, arg1, arg2, arg3);
}

// 0x442541
uint64_t thunk_SDL_CreateRGBSurface(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7) { RA_ENTER("thunk_SDL_CreateRGBSurface");
    return SDL_CreateRGBSurface(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x442547
uint64_t thunk_SDL_CreateRGBSurfaceWithFormatFrom(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) { RA_ENTER("thunk_SDL_CreateRGBSurfaceWithFormatFrom");
    return SDL_CreateRGBSurfaceWithFormatFrom(arg0, arg1, arg2, arg3, arg4, arg5);
}

// 0x44254d
void thunk_SDL_FreeSurface(uint32_t arg0) { RA_ENTER("thunk_SDL_FreeSurface");
    SDL_FreeSurface(arg0);
}

// 0x442553
void thunk_SDL_LockSurface(uint32_t arg0) { RA_ENTER("thunk_SDL_LockSurface");
    SDL_LockSurface(arg0);
}

// 0x442559
void thunk_SDL_UnlockSurface(uint32_t arg0) { RA_ENTER("thunk_SDL_UnlockSurface");
    SDL_UnlockSurface(arg0);
}

// 0x44255f
void thunk_SDL_FillRect(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_FillRect");
    SDL_FillRect(arg0, arg1, arg2);
}

// 0x442565
void thunk_SDL_LowerBlit(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_LowerBlit");
    SDL_LowerBlit(arg0, arg1, arg2, arg3);
}

// 0x44256b
void thunk_SDL_LockTexture(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_LockTexture");
    SDL_LockTexture(arg0, arg1, arg2, arg3);
}

// 0x442571
void thunk_SDL_UnlockTexture(uint32_t arg0) { RA_ENTER("thunk_SDL_UnlockTexture");
    SDL_UnlockTexture(arg0);
}

// 0x442577
uint64_t thunk_SDL_CreateWindow(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) { RA_ENTER("thunk_SDL_CreateWindow");
    return SDL_CreateWindow(arg0, arg1, arg2, arg3, arg4, arg5);
}

// 0x44257d
void thunk_SDL_SetWindowPosition(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_SetWindowPosition");
    SDL_SetWindowPosition(arg0, arg1, arg2);
}

// 0x442583
void thunk_SDL_SetWindowSize(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_SetWindowSize");
    SDL_SetWindowSize(arg0, arg1, arg2);
}

// 0x442589
void thunk_SDL_SetWindowMinimumSize(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_SetWindowMinimumSize");
    SDL_SetWindowMinimumSize(arg0, arg1, arg2);
}

// 0x44258f
uint64_t thunk_SDL_MinimizeWindow(uint32_t arg0) { RA_ENTER("thunk_SDL_MinimizeWindow");
    return SDL_MinimizeWindow(arg0);
}

// 0x442595
void thunk_SDL_SetWindowFullscreen(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_SetWindowFullscreen");
    SDL_SetWindowFullscreen(arg0, arg1);
}

// 0x44259b
void thunk_SDL_DestroyWindow(uint32_t arg0) { RA_ENTER("thunk_SDL_DestroyWindow");
    SDL_DestroyWindow(arg0);
}

// 0x4425a1
void thunk_SDL_WarpMouseInWindow(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_WarpMouseInWindow");
    SDL_WarpMouseInWindow(arg0, arg1, arg2);
}

// 0x4425a7
uint64_t thunk_SDL_CreateRenderer(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_CreateRenderer");
    return SDL_CreateRenderer(arg0, arg1, arg2);
}

// 0x4425ad
uint64_t thunk_SDL_CreateTexture(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) { RA_ENTER("thunk_SDL_CreateTexture");
    return SDL_CreateTexture(arg0, arg1, arg2, arg3, arg4);
}

// 0x4425b3
void thunk_SDL_RenderSetLogicalSize(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_RenderSetLogicalSize");
    SDL_RenderSetLogicalSize(arg0, arg1, arg2);
}

// 0x4425b9
void thunk_SDL_SetRenderDrawColor(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) { RA_ENTER("thunk_SDL_SetRenderDrawColor");
    SDL_SetRenderDrawColor(arg0, arg1, arg2, arg3, arg4);
}

// 0x4425bf
void thunk_SDL_RenderClear(uint32_t arg0) { RA_ENTER("thunk_SDL_RenderClear");
    SDL_RenderClear(arg0);
}

// 0x4425c5
void thunk_SDL_RenderCopy(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_RenderCopy");
    SDL_RenderCopy(arg0, arg1, arg2, arg3);
}

// 0x4425cb
void thunk_SDL_RenderPresent(uint32_t arg0) { RA_ENTER("thunk_SDL_RenderPresent");
    SDL_RenderPresent(arg0);
}

// 0x4425d1
void thunk_SDL_DestroyTexture(uint32_t arg0) { RA_ENTER("thunk_SDL_DestroyTexture");
    SDL_DestroyTexture(arg0);
}

// 0x4425d7
void thunk_SDL_DestroyRenderer(uint32_t arg0) { RA_ENTER("thunk_SDL_DestroyRenderer");
    SDL_DestroyRenderer(arg0);
}

// 0x443dfc
RA_NORETURN void thunk_longjmp(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_longjmp");
    ra_x86_longjmp(arg0, arg1);
    RA_UNREACHABLE();
}

// 0x443e02
uint64_t thunk__setjmp3(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk__setjmp3");
    return ra_x86_setjmp3(arg0, arg1);
}

// 0x443e08
uint64_t thunk_memset(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_memset");
    return memset(arg0, arg1, arg2) & 4294967295ull;
}

// 0x443e0e
void thunk_memcpy(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_memcpy");
    memcpy(arg0, arg1, arg2);
}

// 0x443e14
void thunk_memmove(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_memmove");
    memmove(arg0, arg1, arg2);
}

// 0x443e20
void thunk___current_exception(void) { RA_ENTER("thunk___current_exception");
    __current_exception();
}

// 0x443e26
void thunk___current_exception_context(void) { RA_ENTER("thunk___current_exception_context");
    __current_exception_context();
}

// 0x443e2c
void thunk__except_handler4_common(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk__except_handler4_common");
    _except_handler4_common(arg0, arg1, arg2, arg3);
}

// 0x443e74
uint64_t thunk__libm_sse2_pow_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4) { RA_ENTER("thunk__libm_sse2_pow_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[136] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    RA_U32(frame + 56) = (uint32_t)arg3;
    RA_U32(frame + 60) = (uint32_t)arg4;
    double ret = ra_x86_pow_sse2(RA_F64(xmm), RA_F64(xmm + 16));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443e7a
uint64_t thunk__libm_sse2_sqrt_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk__libm_sse2_sqrt_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ra_x86_sqrt_sse2(RA_F64(xmm));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443e80
uint64_t thunk__libm_sse2_cos_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk__libm_sse2_cos_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ra_x86_cos_sse2(RA_F64(xmm));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443e86
uint64_t thunk__libm_sse2_sin_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk__libm_sse2_sin_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ra_x86_sin_sse2(RA_F64(xmm));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443e8c
uint64_t thunk_floor(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk_floor");
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = floor(RA_F64(frame + 48));
    uint64_t st_w = (RA_U64((uint8_t *)&ra_x87_top) + 7ull) & 7ull;
    RA_F64((st_w << 3ull) + (uint64_t)(uintptr_t)(uint8_t *)&ra_x87_stack) = ret;
    RA_U64((uint8_t *)&ra_x87_top) = st_w;
    return 0;
}

// 0x443e92
uint64_t thunk_ceil(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk_ceil");
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ceil(RA_F64(frame + 48));
    uint64_t st_w = (RA_U64((uint8_t *)&ra_x87_top) + 7ull) & 7ull;
    RA_F64((st_w << 3ull) + (uint64_t)(uintptr_t)(uint8_t *)&ra_x87_stack) = ret;
    RA_U64((uint8_t *)&ra_x87_top) = st_w;
    return 0;
}

// 0x443ea4
uint64_t thunk__CIatan2(uint64_t arg0 RA_UNUSED) { RA_ENTER("thunk__CIatan2");
    ra_x86_ci_atan2();
    return 0;
}

// 0x443eaa
uint64_t thunk__libm_sse2_tan_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk__libm_sse2_tan_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ra_x86_tan_sse2(RA_F64(xmm));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443eb0
uint64_t thunk__libm_sse2_atan_precise(uint64_t arg0 RA_UNUSED, uint64_t arg1, uint64_t arg2) { RA_ENTER("thunk__libm_sse2_atan_precise");
    ra_u128 xmm_mem[16] RA_ALIGNED(16);
    uint8_t *xmm = (uint8_t *)&xmm_mem;
    uint8_t frame_mem[128] RA_ALIGNED(16);
    uint8_t *frame = (uint8_t *)&frame_mem;
    RA_U32(frame + 48) = (uint32_t)arg1;
    RA_U32(frame + 52) = (uint32_t)arg2;
    double ret = ra_x86_atan_sse2(RA_F64(xmm));
    *(ra_u128 *)((xmm)) = (ra_u128)0ull;
    RA_F64(xmm) = ret;
    return 0;
}

// 0x443ece
RA_NORETURN void thunk_exit(uint32_t arg0) { RA_ENTER("thunk_exit");
    exit(arg0);
    RA_UNREACHABLE();
}

// 0x443ef2
void thunk__seh_filter_exe(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk__seh_filter_exe");
    _seh_filter_exe(arg0, arg1);
}

// 0x443ef8
void thunk__set_app_type(uint32_t arg0) { RA_ENTER("thunk__set_app_type");
    _set_app_type(arg0);
}

// 0x443efe
void thunk___setusermatherr(uint32_t arg0) { RA_ENTER("thunk___setusermatherr");
    __setusermatherr(arg0);
}

// 0x443f04
void thunk__configure_narrow_argv(uint32_t arg0) { RA_ENTER("thunk__configure_narrow_argv");
    _configure_narrow_argv(arg0);
}

// 0x443f0a
void thunk__initialize_narrow_environment(void) { RA_ENTER("thunk__initialize_narrow_environment");
    _initialize_narrow_environment();
}

// 0x443f10
uint64_t thunk__get_narrow_winmain_command_line(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk__get_narrow_winmain_command_line");
    return _get_narrow_winmain_command_line((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x443f16
void thunk__initterm(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk__initterm");
    ra_x86_initterm(arg0, arg1);
}

// 0x443f1c
void thunk__initterm_e(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk__initterm_e");
    ra_x86_initterm_e(arg0, arg1);
}

// 0x443f22
RA_NORETURN void thunk__exit(uint32_t arg0) { RA_ENTER("thunk__exit");
    _exit(arg0);
    RA_UNREACHABLE();
}

// 0x443f28
void thunk__set_fmode(uint32_t arg0) { RA_ENTER("thunk__set_fmode");
    _set_fmode(arg0);
}

// 0x443f2e
void thunk__cexit(void) { RA_ENTER("thunk__cexit");
    _cexit();
}

// 0x443f34
void thunk__c_exit(void) { RA_ENTER("thunk__c_exit");
    _c_exit();
}

// 0x443f3a
void thunk__register_thread_local_exe_atexit_callback(uint32_t arg0) { RA_ENTER("thunk__register_thread_local_exe_atexit_callback");
    _register_thread_local_exe_atexit_callback(arg0);
}

// 0x443f40
void thunk__configthreadlocale(uint32_t arg0) { RA_ENTER("thunk__configthreadlocale");
    _configthreadlocale(arg0);
}

// 0x443f46
void thunk__set_new_mode(uint32_t arg0) { RA_ENTER("thunk__set_new_mode");
    _set_new_mode(arg0);
}

// 0x443f4c
void thunk___p__commode(void) { RA_ENTER("thunk___p__commode");
    ra_x86_p_commode();
}

// 0x443f5e
void thunk__initialize_onexit_table(uint32_t arg0) { RA_ENTER("thunk__initialize_onexit_table");
    ra_x86_initialize_onexit_table(arg0);
}

// 0x443f64
void thunk__register_onexit_function(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk__register_onexit_function");
    ra_x86_register_onexit_function(arg0, arg1);
}

// 0x443f70
void thunk__crt_atexit(uint32_t arg0) { RA_ENTER("thunk__crt_atexit");
    _crt_atexit(arg0);
}

// 0x443f7c
void thunk__controlfp_s(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk__controlfp_s");
    ra_x86_controlfp_s(arg0, arg1, arg2);
}

// 0x443f82
RA_NORETURN void thunk_terminate(void) { RA_ENTER("thunk_terminate");
    terminate();
    RA_UNREACHABLE();
}

// 0x44de7b
uint64_t thunk_SDL_malloc(uint32_t arg0) { RA_ENTER("thunk_SDL_malloc");
    return SDL_malloc(arg0);
}

// 0x44de81
uint64_t thunk_SDL_calloc(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_calloc");
    return SDL_calloc(arg0, arg1);
}

// 0x44de87
void thunk_SDL_free(uint32_t arg0) { RA_ENTER("thunk_SDL_free");
    SDL_free(arg0);
}

// 0x44de8d
uint64_t thunk_SDL_strtol(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_strtol");
    return SDL_strtol(arg0, arg1, arg2);
}

// 0x44de93
uint64_t thunk_SDL_memset(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_memset");
    return SDL_memset(arg0, arg1, arg2);
}

// 0x44de99
uint64_t thunk_SDL_memcpy(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_memcpy");
    return SDL_memcpy(arg0, arg1, arg2);
}

// 0x44de9f
void thunk_SDL_memmove(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_memmove");
    SDL_memmove(arg0, arg1, arg2);
}

// 0x44dea5
uint64_t thunk_SDL_memcmp(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_memcmp");
    return SDL_memcmp(arg0, arg1, arg2);
}

// 0x44deab
uint64_t thunk_SDL_strlen(uint32_t arg0) { RA_ENTER("thunk_SDL_strlen");
    return SDL_strlen(arg0) & 4294967295ull;
}

// 0x44deb1
uint64_t thunk_SDL_strchr(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_strchr");
    return SDL_strchr(arg0, arg1);
}

// 0x44deb7
uint64_t thunk_SDL_strrchr(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_strrchr");
    return SDL_strrchr(arg0, arg1);
}

// 0x44debd
uint64_t thunk_SDL_strstr(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_strstr");
    return SDL_strstr(arg0, arg1);
}

// 0x44dec3
uint64_t thunk_SDL_strcmp(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_strcmp");
    return SDL_strcmp(arg0, arg1) & 4294967295ull;
}

// 0x44dec9
uint64_t thunk_SDL_strncmp(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_strncmp");
    return SDL_strncmp(arg0, arg1, arg2);
}

// 0x44decf
uint64_t thunk_SDL_strncasecmp(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_SDL_strncasecmp");
    return SDL_strncasecmp(arg0, arg1, arg2);
}

// 0x44ded5
uint64_t thunk_SDL_getenv(uint32_t arg0) { RA_ENTER("thunk_SDL_getenv");
    return SDL_getenv(arg0);
}

// 0x44dedb
uint64_t thunk_SDL_GetCurrentDisplayMode(uint32_t arg0, uint32_t arg1) { RA_ENTER("thunk_SDL_GetCurrentDisplayMode");
    return SDL_GetCurrentDisplayMode(arg0, arg1);
}

// 0x44dee1
void thunk_SDL_WaitEvent(uint32_t arg0) { RA_ENTER("thunk_SDL_WaitEvent");
    SDL_WaitEvent(arg0);
}

// 0x44dee7
uint64_t thunk_SDL_GetTicks(void) { RA_ENTER("thunk_SDL_GetTicks");
    return SDL_GetTicks();
}

// 0x44deed
void thunk_SDL_Delay(uint32_t arg0) { RA_ENTER("thunk_SDL_Delay");
    SDL_Delay(arg0);
}

// 0x44def3
uint64_t thunk_SDL_snprintf(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7 RA_UNUSED, uint64_t arg8 RA_UNUSED) { RA_ENTER("thunk_SDL_snprintf");
    return SDL_snprintf((uint64_t)(uint32_t)arg1, (uint64_t)(uint32_t)arg2, (uint64_t)(uint32_t)arg3, (uint64_t)(uint32_t)arg4, (uint64_t)(uint32_t)arg5, (uint64_t)(uint32_t)arg6, arg0, 0);
}

// 0x44def9
uint64_t thunk_SDL_wcslen(uint32_t arg0) { RA_ENTER("thunk_SDL_wcslen");
    return SDL_wcslen(arg0);
}

// 0x44deff
uint64_t thunk_SDL_iconv_string(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_iconv_string");
    return SDL_iconv_string(arg0, arg1, arg2, arg3);
}

// 0x44df05
uint64_t thunk_SDL_SetMainReady(void) { RA_ENTER("thunk_SDL_SetMainReady");
    return SDL_SetMainReady() & 4294967295ull;
}

// 0x44df0b
void thunk_SDL_ShowSimpleMessageBox(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { RA_ENTER("thunk_SDL_ShowSimpleMessageBox");
    SDL_ShowSimpleMessageBox(arg0, arg1, arg2, arg3);
}

// 0x44df7d
uint64_t thunk_strncpy(uint32_t arg0, uint32_t arg1, uint32_t arg2) { RA_ENTER("thunk_strncpy");
    return strncpy(arg0, arg1, arg2);
}

uint64_t _except_handler4_common(uint64_t a0 RA_UNUSED, uint64_t a1 RA_UNUSED, uint64_t a2 RA_UNUSED, uint64_t a3 RA_UNUSED) { RA_ENTER("_except_handler4_common");
    ra_unsupported(0ull, 0ull);
    RA_UNREACHABLE();
}

void H_004371f2(uint32_t k, uint8_t * m_p_6, uint32_t k_1, uint32_t k_2, uint8_t * xmm, uint8_t * frame_top) { RA_ENTER("H_004371f2");
    uint32_t rsi_phi_20, rdi_phi_15, rot_4;
    for (rsi_phi_20 = 1u, rdi_phi_15 = 0u; (int32_t)rdi_phi_15 < 2; rsi_phi_20 = rot_4, rdi_phi_15++) {
        uint32_t rot_3 = ra_rotl_i32(rsi_phi_20, k);
        if ((RA_U32(m_p_6) & rot_3) != 0u) {
            uint32_t scaled_26 = rdi_phi_15 * 4u;
            uint32_t m_33 = RA_U32(k_1 + scaled_26);
            float vm_12 = RA_F32(k_2 + scaled_26);
            uint8_t *p_xmm0_17 = xmm;
            *(ra_u128 *)(p_xmm0_17) = (ra_u128)0ull;
            RA_F32(p_xmm0_17) = vm_12;
            RA_F32(frame_top - 20) = RA_F32(p_xmm0_17);
            Sbar_DrawPic((rdi_phi_15 << 4u) + 288u, (uint32_t)-16, m_33);
            float vm_13 = RA_F32(frame_top - 20);
            *(ra_u128 *)(p_xmm0_17) = (ra_u128)0ull;
            RA_F32(p_xmm0_17) = vm_13;
            float xmm0_10 = RA_F32(p_xmm0_17);
            float vm_14 = sec_rdata.f2004;
            uint8_t uno_2 = ra_isnan(xmm0_10) || ra_isnan(vm_14);
            *(ra_v2f64 *)((xmm + 16)) = __builtin_convertvector(*(ra_v2f32 *)(p_xmm0_17), ra_v2f64);
            if ((ra_ctpop_i8((uint8_t)(((uint64_t)((((uint8_t)2 | (uint8_t)((xmm0_10 < vm_14) | uno_2)) | (uint8_t)((uint8_t)uno_2 << (uint8_t)2)) | (uint8_t)((uint8_t)((xmm0_10 == vm_14) | uno_2) << (uint8_t)6)) << 8ull) >> 8ull) & (uint8_t)68) & (uint8_t)1) == (uint8_t)0) {
                double vm_15 = sec_data.cl_576;
                *(ra_u128 *)(p_xmm0_17) = (ra_u128)0ull;
                RA_F64(p_xmm0_17) = vm_15;
                RA_F64(p_xmm0_17) = RA_F64(p_xmm0_17) - sec_rdata.f16448;
                double xmm1_7 = RA_F64(xmm + 16);
                double xmm0_13 = RA_F64(p_xmm0_17);
                uint8_t uno_3 = ra_isnan(xmm1_7) || ra_isnan(xmm0_13);
                if (!(((xmm1_7 < xmm0_13) | uno_3) | ((xmm1_7 == xmm0_13) | uno_3))) {
                    sec_data.sb_updates = 0u;
                }
            }
        }
        rot_4 = ra_rotl_i32(rsi_phi_20, 1u);
    }
}

uint64_t H_004034c0(uint32_t k, uint32_t sp, uint32_t k_1, uint32_t k_2, uint32_t k_3, uint32_t k_4, uint32_t k_5, uint32_t k_6, uint32_t k_7, uint32_t k_8, uint32_t k_9, uint32_t k_10, uint32_t k_11, uint32_t k_12, uint32_t k_13, uint32_t k_14, uint32_t k_15, uint32_t k_16) { RA_ENTER("H_004034c0");
    uint32_t rdx_phi, rsi_phi_4, m_28;
    rdx_phi = 0u;
    rsi_phi_4 = 0u;
    do {
        uint8_t *m_p_14 = (uint8_t *)(uint64_t)k;
        rsi_phi_4 = rsi_phi_4 + 32u;
        uint32_t addr_34 = sp + (rdx_phi * 4u);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_2) = RA_U32(addr_34 + k_1);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_4) = RA_U32(addr_34 + k_3);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_6) = RA_U32(addr_34 + k_5);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_8) = RA_U32(addr_34 + k_7);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_10) = RA_U32(addr_34 + k_9);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_12) = RA_U32(addr_34 + k_11);
        RA_U32((rsi_phi_4 + RA_U32(m_p_14)) + k_14) = RA_U32(addr_34 + k_13);
        m_28 = RA_U32(m_p_14);
        rdx_phi = rdx_phi + 8u;
        RA_U32((rsi_phi_4 + m_28) + k_16) = RA_U32(addr_34 + k_15);
    } while ((int32_t)rdx_phi < 16);
    return (uint64_t)m_28;
}

void H_00422530(uint8_t * p_xmm0, uint32_t stack_arg0_lo, uint32_t m_1) { RA_ENTER("H_00422530");
    uint32_t rdi_phi_1, rax_phi, rax_phi_1;
    for (rdi_phi_1 = 0u; (int32_t)rdi_phi_1 < 3; rdi_phi_1++) {
        uint32_t logic_3 = (uint32_t)rand() & 0x8000001Fu;
        rax_phi = logic_3;
        if ((int32_t)logic_3 < 0) {
            rax_phi = ((logic_3 - 1u) | (uint32_t)-32) + 1u;
        }
        *(ra_u128 *)(p_xmm0) = (ra_u128)0ull;
        RA_U32(p_xmm0) = rax_phi - 16u;
        *(ra_v4f32 *)(p_xmm0) = __builtin_convertvector((ra_v4i32)*(ra_v4u32 *)(p_xmm0), ra_v4f32);
        uint32_t scaled = rdi_phi_1 * 4u;
        RA_F32(p_xmm0) = RA_F32(p_xmm0) + RA_F32(stack_arg0_lo + scaled);
        struct S188 *addr_9_s = (struct S188 *)(uint64_t)(m_1 + scaled);
        addr_9_s->f0 = RA_F32(p_xmm0);
        uint32_t logic_5 = (uint32_t)rand() & 0x800001FFu;
        rax_phi_1 = logic_5;
        if ((int32_t)logic_5 < 0) {
            rax_phi_1 = ((logic_5 - 1u) | (uint32_t)-512) + 1u;
        }
        *(ra_u128 *)(p_xmm0) = (ra_u128)0ull;
        RA_U32(p_xmm0) = rax_phi_1 - 256u;
        *(ra_v4f32 *)(p_xmm0) = __builtin_convertvector((ra_v4i32)*(ra_v4u32 *)(p_xmm0), ra_v4f32);
        addr_9_s->f20 = RA_F32(p_xmm0);
    }
}

uint64_t H_00427b60(uint32_t stack_arg0_lo, uint32_t stack_arg1_lo, uint8_t * xmm, uint8_t * p_xmm0, uint8_t * p_xmm2, uint8_t * p_xmm3, uint32_t stack_arg2_lo) { RA_ENTER("H_00427b60");
    uint32_t i, cvt;
    i = 0u;
    do {
        uint32_t scaled = i * 4u;
        uint32_t m_6 = RA_U32(stack_arg0_lo + scaled);
        uint32_t diff_3 = RA_U32(stack_arg1_lo + scaled) - m_6;
        *(ra_u128 *)((xmm + 16)) = (ra_u128)0ull;
        RA_U32(xmm + 16) = m_6;
        *(ra_v4f32 *)((xmm + 16)) = __builtin_convertvector((ra_v4i32)*(ra_v4u32 *)((xmm + 16)), ra_v4f32);
        *(ra_u128 *)(p_xmm0) = (ra_u128)0ull;
        RA_U32(p_xmm0) = diff_3;
        *(ra_v4f32 *)(p_xmm0) = __builtin_convertvector((ra_v4i32)*(ra_v4u32 *)(p_xmm0), ra_v4f32);
        RA_F32(p_xmm0) = RA_F32(p_xmm0) * RA_F32(p_xmm2);
        RA_F32(p_xmm0) = RA_F32(p_xmm0) + RA_F32(xmm + 16);
        *(ra_v2f64 *)(p_xmm0) = __builtin_convertvector(*(ra_v2f32 *)(p_xmm0), ra_v2f64);
        RA_F64(p_xmm0) = RA_F64(p_xmm0) + RA_F64(p_xmm3);
        cvt = (uint32_t)ra_fptosi_32(RA_F64(p_xmm0));
        RA_U32(stack_arg2_lo + scaled) = cvt;
        i = i + 1u;
    } while ((int32_t)i < 6);
    return (uint64_t)cvt;
}

void H_0043f68e(uint8_t * frame_top, uint32_t rsi_phi_15, uint8_t * st_p_8, uint8_t * st_p_50, uint32_t sum_41) { RA_ENTER("H_0043f68e");
    uint32_t rdx_phi_10;
    uint32_t sum_42 = (RA_U32(frame_top - 7180) + (rsi_phi_15 * 72u)) + RA_U32(RA_U32(st_p_8) + 9264u);
    uint32_t addr_208 = RA_U32(st_p_50) + (rsi_phi_15 * 4u);
    for (rdx_phi_10 = 0u; rdx_phi_10 < 18u; rdx_phi_10++) {
        uint32_t scaled_48 = rdx_phi_10 * 4u;
        uint8_t *m_p_89 = (uint8_t *)(uint64_t)(sum_42 + scaled_48);
        struct S385 *addr_210_s = (struct S385 *)(uint64_t)(sum_41 + scaled_48);
        RA_U32((addr_208 + (rdx_phi_10 << 7u)) + 48u) = RA_U32(m_p_89) + addr_210_s->f140;
        RA_U32(m_p_89) = addr_210_s->f212;
    }
}

void H_00440460(uint32_t m_2, uint32_t k, uint32_t k_1) { RA_ENTER("H_00440460");
    uint32_t rcx_phi_4;
    rcx_phi_4 = k_1;
    do {
        uint32_t scaled_15 = rcx_phi_4 * 4u;
        struct S14 *addr_50_s = (struct S14 *)(uint64_t)(m_2 + scaled_15);
        uint64_t product_1 = (uint64_t)(int32_t)addr_50_s->f0 * (uint64_t)(int32_t)sec_rdata.window_l[rcx_phi_4];
        addr_50_s->f0 = ra_fshr_i32((uint32_t)(product_1 >> 32ull), (uint32_t)product_1, 28u);
        uint64_t product_2 = (uint64_t)(int32_t)addr_50_s->f4 * (uint64_t)(int32_t)sec_rdata.window_l_4[rcx_phi_4];
        addr_50_s->f4 = ra_fshr_i32((uint32_t)(product_2 >> 32ull), (uint32_t)product_2, 28u);
        uint64_t product_3 = (uint64_t)(int32_t)addr_50_s->f8 * (uint64_t)(int32_t)sec_rdata.window_l_8[rcx_phi_4];
        addr_50_s->f8 = ra_fshr_i32((uint32_t)(product_3 >> 32ull), (uint32_t)product_3, 28u);
        rcx_phi_4 = rcx_phi_4 + 3u;
    } while (rcx_phi_4 < k);
}

void H_0043f4ae(uint32_t rbx_phi_10, uint32_t edi_19, uint8_t * st_p_8, uint8_t * st_p_50, uint32_t sum_25) { RA_ENTER("H_0043f4ae");
    uint32_t rdx_phi_6;
    uint32_t sum_26 = (rbx_phi_10 + (edi_19 * 72u)) + RA_U32(RA_U32(st_p_8) + 9264u);
    uint32_t addr_140 = RA_U32(st_p_50) + (edi_19 * 4u);
    for (rdx_phi_6 = 0u; rdx_phi_6 < 18u; rdx_phi_6++) {
        uint32_t scaled_24 = rdx_phi_6 * 4u;
        uint8_t *m_p_60 = (uint8_t *)(uint64_t)(sum_26 + scaled_24);
        struct S385 *addr_142_s = (struct S385 *)(uint64_t)(sum_25 + scaled_24);
        RA_U32((addr_140 + (rdx_phi_6 << 7u)) + 48u) = RA_U32(m_p_60) + addr_142_s->f140;
        RA_U32(m_p_60) = addr_142_s->f212;
    }
}

void H_00418400(uint32_t sum, uint32_t k, uint8_t * xmm, uint8_t * st_p_2, uint32_t sarg0, uint32_t k_1) { RA_ENTER("H_00418400");
    uint32_t rsi_phi;
    for (rsi_phi = 0u; (int32_t)rsi_phi < 3; rsi_phi++) {
        uint32_t addr_5 = sum + (rsi_phi * 4u);
        float vm_3 = RA_F32(addr_5 + k);
        *(ra_u128 *)((xmm)) = (ra_u128)0ull;
        RA_F32(xmm) = vm_3;
        RA_F32(st_p_2) = RA_F32(xmm);
        MSG_WriteCoord(sarg0, RA_U32(st_p_2));
        float vm_4 = RA_F32(addr_5 + k_1);
        *(ra_u128 *)((xmm)) = (ra_u128)0ull;
        RA_F32(xmm) = vm_4;
        RA_F32(st_p_2) = RA_F32(xmm);
        MSG_WriteAngle(sarg0, RA_U32(st_p_2));
    }
}

void H_00423331(uint8_t * st_p_8, uint8_t * p_xmm0, uint32_t stack_arg0_lo, uint32_t m_5) { RA_ENTER("H_00423331");
    uint32_t m_10;
    do {
        uint32_t rem = (uint32_t)((int64_t)(uint64_t)(int32_t)(uint32_t)rand() % (int64_t)6ull);
        m_10 = RA_U32(st_p_8);
        uint32_t diff_4 = rem - 3u;
        *(ra_u128 *)(p_xmm0) = (ra_u128)0ull;
        RA_U32(p_xmm0) = diff_4;
        *(ra_v4f32 *)(p_xmm0) = __builtin_convertvector((ra_v4i32)*(ra_v4u32 *)(p_xmm0), ra_v4f32);
        uint32_t scaled_3 = m_10 * 4u;
        RA_F32(p_xmm0) = RA_F32(p_xmm0) + RA_F32(stack_arg0_lo + scaled_3);
        RA_F32(m_5 + scaled_3) = RA_F32(p_xmm0);
        RA_U32(st_p_8) = m_10 + 1u;
    } while ((int32_t)(m_10 + 1u) < 3);
}

uint32_t H_004415d2(uint32_t cmov, uint8_t * p_xmm0, uint32_t sp_3) { RA_ENTER("H_004415d2");
    uint32_t rax_phi_3, rdx_phi_5;
    uint32_t logic_12 = cmov & (uint32_t)-32;
    rax_phi_3 = 0u;
    rdx_phi_5 = 0u;
    do {
        *(ra_ua_u128 *)((uint64_t)((sp_3 + (rdx_phi_5 * 2u)) + 76u)) = *(ra_u128 *)(p_xmm0);
        rdx_phi_5 = rdx_phi_5 + 32u;
        rax_phi_3 = rax_phi_3 + 64u;
        uint32_t addr_53 = sp_3 + rax_phi_3;
        *(ra_ua_u128 *)((uint64_t)(addr_53 + 28u)) = *(ra_u128 *)(p_xmm0);
        *(ra_ua_u128 *)((uint64_t)(addr_53 + 44u)) = *(ra_u128 *)(p_xmm0);
        *(ra_ua_u128 *)((uint64_t)(addr_53 + 60u)) = *(ra_u128 *)(p_xmm0);
    } while (rdx_phi_5 < logic_12);
    return rdx_phi_5;
}

void H_00422da0(uint32_t sp, uint32_t k) { RA_ENTER("H_00422da0");
    uint32_t rsi_phi;
    for (rsi_phi = 0u; (int32_t)rsi_phi < 3; rsi_phi++) {
        MSG_ReadCoord();
        uint64_t top = RA_U64((uint8_t *)&ra_x87_top);
        RA_F32((sp + (rsi_phi * 4u)) + k) = (float)RA_F64(((top & 7ull) << 3ull) + (uint64_t)(uintptr_t)(uint8_t *)&ra_x87_stack);
        RA_U64((uint8_t *)&ra_x87_top) = (top + 1ull) & 7ull;
    }
}

void H_00440430(uint32_t k, uint32_t m_2, uint32_t k_1, uint32_t k_2) { RA_ENTER("H_00440430");
    uint32_t rcx_phi_3;
    rcx_phi_3 = k_2;
    do {
        uint32_t scaled_12 = rcx_phi_3 * 4u;
        uint8_t *m_p_14 = (uint8_t *)(uint64_t)(m_2 + scaled_12);
        uint64_t product = (uint64_t)(int32_t)RA_U32(m_p_14) * (uint64_t)(int32_t)RA_U32(k + scaled_12);
        RA_U32(m_p_14) = ra_fshr_i32((uint32_t)(product >> 32ull), (uint32_t)product, 28u);
        rcx_phi_3 = rcx_phi_3 + 1u;
    } while (rcx_phi_3 < k_1);
}

void H_00448a34(uint32_t esi_9, uint32_t rbx_phi, uint32_t rdi_phi, uint32_t k) { RA_ENTER("H_00448a34");
    uint32_t rax_phi_1;
    for (rax_phi_1 = 0u; (int32_t)rax_phi_1 < 16; rax_phi_1++) {
        RA_U8((rdi_phi + rax_phi_1) + k) = RA_U8((rbx_phi + (esi_9 - rax_phi_1)) + 15u);
    }
}

void H_00408854(uint32_t stack_arg0_lo, uint32_t k, uint32_t k_1) { RA_ENTER("H_00408854");
    uint32_t rcx_phi_1;
    for (rcx_phi_1 = 0u; (int32_t)rcx_phi_1 < 16; rcx_phi_1++) {
        RA_U8(k_1 + rcx_phi_1) = RA_U8(k + (stack_arg0_lo - rcx_phi_1));
    }
}

uint32_t H_00441615(uint32_t edx_22, uint32_t addr_15, uint32_t diff_14, uint32_t logic_13) { RA_ENTER("H_00441615");
    uint32_t rcx_phi_10, rdi_phi_8;
    rcx_phi_10 = diff_14 >> 1u;
    rdi_phi_8 = addr_15 + (edx_22 * 2u);
    for (;;) {
        if (rcx_phi_10 != 0u) {
            RA_U32(rdi_phi_8) = logic_13;
            rcx_phi_10 = rcx_phi_10 - 1u;
            rdi_phi_8 = rdi_phi_8 + 4u;
            continue;
        }
        break;
    }
    return rdi_phi_8;
}

void H_0040a150(void) { RA_ENTER("H_0040a150");
    uint32_t rsi_phi;
    for (rsi_phi = 0u; (int32_t)rsi_phi < 12; rsi_phi++) {
        M_Print(16u, (rsi_phi * 8u) + 32u, (uint32_t)(uintptr_t)&sec_data.m_filenames + (rsi_phi * 40u));
    }
}

void H_00403c30(uint32_t stack_arg0_lo, uint8_t k, uint8_t k_1) { RA_ENTER("H_00403c30");
    uint32_t rax_phi;
    for (rax_phi = 0u; (int32_t)rax_phi < 39; rax_phi++) {
        uint8_t *m_p_4 = (uint8_t *)(uint64_t)(stack_arg0_lo + rax_phi);
        if (RA_U8(m_p_4) == k) {
            RA_U8(m_p_4) = k_1;
        }
    }
}

void H_00414fc0(uint8_t * st_p_4, uint8_t * va_m24, uint32_t k, uint32_t sarg0_3, uint32_t esi_z_1) { RA_ENTER("H_00414fc0");
    uint32_t rsi_phi;
    rsi_phi = esi_z_1;
    do {
        RA_U32(st_p_4) = (uint32_t)(uintptr_t)" ";
        RA_U32(va_m24 + 12) = k;
        Q_strcat(sarg0_3, (uint32_t)(uintptr_t)" ");
        rsi_phi = rsi_phi + 1u;
    } while ((int32_t)rsi_phi < 20);
}

void H_00441388(uint32_t sarg0, uint32_t sum_8, uint32_t k) { RA_ENTER("H_00441388");
    H_004413a0(sarg0, 5u, sum_8, 10u, k);
}

void H_004413a0(uint32_t sarg0, uint32_t k, uint32_t sum_8, uint32_t k_1, uint32_t k_2) { RA_ENTER("H_004413a0");
    uint32_t i;
    i = 0u;
    do {
        RA_U8((sum_8 + i) + k_1) = (uint8_t)mad_bit_read(sarg0, k);
        i = i + 1u;
    } while (i < k_2);
}

uint64_t U_00401fa0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00401fa0");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = SV_ClientPrintf((uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402500(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402500");
    uint64_t ret = Host_Begin_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402530(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402530");
    uint64_t ret = Host_Changelevel_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004025b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004025b0");
    uint64_t ret = Host_Color_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004026f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004026f0");
    uint64_t ret = Host_Connect_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402750(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402750");
    uint64_t ret = Host_Demos_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402780(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402780");
    uint64_t ret = Host_Fly_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004027f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004027f0");
    uint64_t ret = Host_Give_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402c40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402c40");
    uint64_t ret = Host_God_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00402ee0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00402ee0");
    uint64_t ret = Host_Kick_f(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004030c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004030c0");
    uint64_t ret = Host_Kill_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403130(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403130");
    uint64_t ret = Host_Loadgame_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004035a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004035a0");
    uint64_t ret = Host_Map_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004036e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004036e0");
    uint64_t ret = Host_Name_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403830(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403830");
    uint64_t ret = Host_Noclip_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004038c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004038c0");
    uint64_t ret = Host_Notarget_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403930(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403930");
    uint64_t ret = Host_Pause_f(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004039d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004039d0");
    uint64_t ret = Host_Ping_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403aa0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403aa0");
    uint64_t ret = Host_PreSpawn_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403b20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403b20");
    uint64_t ret = Host_Quit_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403b50(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403b50");
    uint64_t ret = Host_Reconnect_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403b60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403b60");
    uint64_t ret = Host_Restart_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00403c60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00403c60");
    uint64_t ret = Host_Savegame_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004040f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004040f0");
    uint64_t ret = Host_Say_Team_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404100(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404100");
    uint64_t ret = Host_Say_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404110(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404110");
    uint64_t ret = Host_Spawn_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004045a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004045a0");
    uint64_t ret = Host_Startdemos_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404670(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404670");
    uint64_t ret = Host_Status_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404810(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404810");
    uint64_t ret = Host_Stopdemo_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404830(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404830");
    uint64_t ret = Host_Tell_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404970(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404970");
    uint64_t ret = Host_Version_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004049a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004049a0");
    Host_Viewframe_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004049f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004049f0");
    uint64_t ret = Host_Viewmodel_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404a50(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404a50");
    uint64_t ret = Host_Viewnext_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404ab0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404ab0");
    uint64_t ret = Host_Viewprev_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00404ca0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00404ca0");
    uint64_t ret = Key_Bind_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00405880(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00405880");
    uint64_t ret = Key_Unbind_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004058e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004058e0");
    Key_Unbindall_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00407680(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00407680");
    uint64_t ret = Cache_Flush();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040a620(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a620");
    M_Menu_Help_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040a650(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a650");
    M_Menu_Keys_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040a700(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a700");
    uint64_t ret = M_Menu_Load_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040a730(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a730");
    uint64_t ret = M_Menu_Main_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040a7b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a7b0");
    M_Menu_MultiPlayer_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040a820(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a820");
    M_Menu_Options_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040a860(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a860");
    uint64_t ret = M_Menu_Quit_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040a8b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040a8b0");
    uint64_t ret = M_Menu_Save_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040aa60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040aa60");
    uint64_t ret = M_Menu_Setup_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0040aad0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040aad0");
    M_Menu_SinglePlayer_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040aaf0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040aaf0");
    M_Menu_Video_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0040d9e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0040d9e0");
    uint64_t ret = M_ToggleMenu_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00410060(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00410060");
    Mod_Print();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004101e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004101e0");
    uint64_t ret = MaxPlayers_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004108a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004108a0");
    uint64_t ret = NET_Listen_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00410940(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00410940");
    uint64_t ret = NET_Port_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411280(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411280");
    uint64_t ret = Slist_Send();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411330(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411330");
    uint64_t ret = Slist_Poll();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411610(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411610");
    NET_Slist_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00411690(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411690");
    uint64_t ret = VCR_CanSendMessage(ecx, u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004116f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004116f0");
    uint64_t ret = VCR_CheckNewConnections();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411760(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411760");
    VCR_Close();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00411770(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411770");
    uint64_t ret = VCR_Connect();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411780(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411780");
    uint64_t ret = VCR_GetMessage(ecx, u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411820(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411820");
    uint64_t ret = VCR_Init();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411900(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411900");
    VCR_SearchForHosts();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00411910(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411910");
    uint64_t ret = VCR_SendMessage(ecx, u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411970(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411970");
    VCR_Shutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00411980(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411980");
    uint64_t ret = Test_Poll();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411b20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411b20");
    uint64_t ret = Test2_Poll();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411cf0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411cf0");
    uint64_t ret = Datagram_CanSendMessage(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411d10(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411d10");
    uint64_t ret = Datagram_CanSendUnreliableMessage();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411d20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411d20");
    uint64_t ret = Datagram_CheckNewConnections();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411da0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411da0");
    uint64_t ret = Datagram_Close(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411dc0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411dc0");
    uint64_t ret = Datagram_Connect(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00411e90(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00411e90");
    uint64_t ret = Datagram_GetMessage(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00412180(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00412180");
    uint64_t ret = Datagram_Init();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004121e0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004121e0");
    uint64_t ret = Datagram_Listen(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00412200(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00412200");
    uint64_t ret = Datagram_SearchForHosts(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00412230(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00412230");
    uint64_t ret = Datagram_SendMessage(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004122f0(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004122f0");
    uint64_t ret = Datagram_SendUnreliableMessage(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00412370(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00412370");
    uint64_t ret = Datagram_Shutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00412e10(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00412e10");
    uint64_t ret = NET_Stats_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004131d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004131d0");
    uint64_t ret = Test2_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413330(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413330");
    uint64_t ret = Test_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004134d0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004134d0");
    uint64_t ret = Loop_CanSendMessage(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004134f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004134f0");
    uint64_t ret = Loop_CanSendUnreliableMessage();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413500(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413500");
    uint64_t ret = Loop_CheckNewConnections();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413570(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413570");
    uint64_t ret = Loop_Close(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004135c0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004135c0");
    uint64_t ret = Loop_Connect(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004136c0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004136c0");
    uint64_t ret = Loop_GetMessage(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413760(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413760");
    uint64_t ret = Loop_Init();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413770(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413770");
    Loop_Listen();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00413780(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413780");
    uint64_t ret = Loop_SearchForHosts();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413810(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413810");
    uint64_t ret = Loop_SendMessage(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004138c0(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004138c0");
    uint64_t ret = Loop_SendUnreliableMessage(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00413950(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00413950");
    Loop_Shutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00414070(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00414070");
    uint64_t ret = ED_Count();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00414b50(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00414b50");
    uint64_t ret = ED_PrintEdict_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00414b80(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00414b80");
    uint64_t ret = ED_PrintEdicts();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004165d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004165d0");
    uint64_t ret = PR_Profile_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416760(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416760");
    PF_error();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    RA_UNREACHABLE();
}

uint64_t U_004167b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004167b0");
    PF_objerror();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    RA_UNREACHABLE();
}

uint64_t U_00416800(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416800");
    uint64_t ret = PF_makevectors();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416830(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416830");
    uint64_t ret = PF_setorigin();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416870(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416870");
    uint64_t ret = PF_setsize();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004168a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004168a0");
    uint64_t ret = PF_setmodel(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416960(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416960");
    uint64_t ret = PF_bprint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416980(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416980");
    uint64_t ret = PF_sprint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004169f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004169f0");
    uint64_t ret = PF_centerprint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416a60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416a60");
    uint64_t ret = PF_normalize(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416b30(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416b30");
    uint64_t ret = PF_vlen(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416ba0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416ba0");
    uint64_t ret = PF_vectoyaw(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416c40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416c40");
    uint64_t ret = PF_vectoangles(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416db0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416db0");
    uint64_t ret = PF_random();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416de0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416de0");
    uint64_t ret = PF_particle();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416e10(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416e10");
    uint64_t ret = PF_ambientsound();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416f20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416f20");
    uint64_t ret = PF_sound();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00416ff0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00416ff0");
    uint64_t ret = PF_break();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417010(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417010");
    uint64_t ret = PF_traceline();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417170(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417170");
    uint64_t ret = PF_checkclient();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004172d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004172d0");
    uint64_t ret = PF_stuffcmd();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417350(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417350");
    uint64_t ret = PF_localcmd();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417370(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417370");
    uint64_t ret = PF_cvar();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004173a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004173a0");
    uint64_t ret = PF_cvar_set();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004173d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004173d0");
    uint64_t ret = PF_findradius();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417560(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417560");
    uint64_t ret = PF_dprint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417580(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417580");
    uint64_t ret = PF_ftos();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004175f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004175f0");
    uint64_t ret = PF_fabs();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417610(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417610");
    uint64_t ret = PF_vtos();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417670(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417670");
    uint64_t ret = PF_Spawn();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417690(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417690");
    uint64_t ret = PF_Remove();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004176b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004176b0");
    uint64_t ret = PF_Find(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417770(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417770");
    uint64_t ret = PF_precache_file();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417780(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417780");
    uint64_t ret = PF_precache_sound();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417800(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417800");
    uint64_t ret = PF_precache_model();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417890(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417890");
    uint64_t ret = PF_coredump();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004178a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004178a0");
    PF_traceon();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004178b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004178b0");
    PF_traceoff();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004178c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004178c0");
    uint64_t ret = PF_eprint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004178e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004178e0");
    uint64_t ret = PF_walkmove();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004179f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004179f0");
    uint64_t ret = PF_droptofloor();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417b20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417b20");
    uint64_t ret = PF_lightstyle();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417bb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417bb0");
    uint64_t ret = PF_rint();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417c00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417c00");
    uint64_t ret = PF_floor(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417c40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417c40");
    uint64_t ret = PF_ceil(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417c80(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417c80");
    uint64_t ret = PF_checkbottom();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417cb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417cb0");
    uint64_t ret = PF_pointcontents();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417ce0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417ce0");
    uint64_t ret = PF_nextent();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00417d40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00417d40");
    uint64_t ret = PF_aim(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004181b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004181b0");
    uint64_t ret = PF_changeyaw(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418270(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418270");
    uint64_t ret = PF_WriteByte();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418290(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418290");
    uint64_t ret = PF_WriteChar();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004182b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004182b0");
    uint64_t ret = PF_WriteShort();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004182d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004182d0");
    uint64_t ret = PF_WriteLong();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004182f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004182f0");
    uint64_t ret = PF_WriteAngle(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418310(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418310");
    uint64_t ret = PF_WriteCoord(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418330(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418330");
    uint64_t ret = PF_WriteString();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418350(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418350");
    uint64_t ret = PF_WriteEntity();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418380(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418380");
    uint64_t ret = PF_makestatic();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418450(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418450");
    uint64_t ret = PF_setspawnparms();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418540(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418540");
    uint64_t ret = PF_changelevel();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00418580(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00418580");
    PF_Fixme();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    RA_UNREACHABLE();
}

uint64_t U_0041b9f0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0041b9f0");
    uint64_t ret = D_DrawSpans8(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0041e9e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0041e9e0");
    uint64_t ret = R_TimeRefresh_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00420640(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00420640");
    uint64_t ret = R_GenerateSpans();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004206c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004206c0");
    uint64_t ret = R_GenerateSpansBackward();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00423040(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00423040");
    uint64_t ret = R_ReadPointFile_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00424290(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00424290");
    uint64_t ret = R_DrawSurfaceBlock8_mip0();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00424440(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00424440");
    uint64_t ret = R_DrawSurfaceBlock8_mip1();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00424600(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00424600");
    uint64_t ret = R_DrawSurfaceBlock8_mip2();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00424750(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00424750");
    uint64_t ret = R_DrawSurfaceBlock8_mip3(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00427b20(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00427b20");
    uint64_t ret = R_Alias_clip_bottom(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00427bf0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00427bf0");
    uint64_t ret = R_Alias_clip_left(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00427cc0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00427cc0");
    uint64_t ret = R_Alias_clip_right(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00427d90(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00427d90");
    uint64_t ret = R_Alias_clip_top(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00427e60(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00427e60");
    uint64_t ret = R_Alias_clip_z(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00429200(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00429200");
    uint64_t ret = SCR_ScreenShot_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004294a0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004294a0");
    uint64_t ret = SCR_SizeDown_f(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004294d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004294d0");
    uint64_t ret = SCR_SizeUp_f(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004300c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004300c0");
    uint64_t ret = SV_MoveToGoal(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004310e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004310e0");
    uint64_t ret = CD_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00431c90(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00431c90");
    uint64_t ret = S_Play();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00431d70(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00431d70");
    uint64_t ret = S_PlayVol();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00432230(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00432230");
    uint64_t ret = S_SoundInfo_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004322f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004322f0");
    uint64_t ret = S_SoundList();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00432680(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00432680");
    uint64_t ret = S_StopAllSoundsC();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00433ef0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00433ef0");
    uint64_t ret = paint_audio(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434680(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434680");
    uint64_t ret = S_MP3_CodecInitialize();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434690(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434690");
    S_MP3_CodecShutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004346a0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004346a0");
    uint64_t ret = S_MP3_CodecOpenStream(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434760(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434760");
    uint64_t ret = S_MP3_CodecReadStream(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434790(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434790");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = S_MP3_CodecCloseStream((uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004347c0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004347c0");
    uint64_t ret = S_MP3_CodecRewindStream(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434eb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434eb0");
    uint64_t ret = ovc_fclose();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434ec0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434ec0");
    uint64_t ret = ovc_fseek(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434ee0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434ee0");
    uint64_t ret = S_VORBIS_CodecInitialize();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00434ef0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434ef0");
    S_VORBIS_CodecShutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00434f00(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00434f00");
    uint64_t ret = S_VORBIS_CodecOpenStream(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435020(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435020");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = S_VORBIS_CodecReadStream(ecx, (uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435090(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435090");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = S_VORBIS_CodecCloseStream(ecx, (uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004350c0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_004350c0");
    uint64_t ret = S_VORBIS_CodecRewindStream(ecx, u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004350e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004350e0");
    uint64_t ret = S_FLAC_CodecInitialize();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004350f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004350f0");
    S_FLAC_CodecShutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00435100(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435100");
    uint64_t ret = S_FLAC_CodecOpenStream(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435270(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435270");
    uint64_t ret = S_FLAC_CodecReadStream(ecx, u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435300(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435300");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = S_FLAC_CodecCloseStream((uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435320(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435320");
    uint64_t ret = S_FLAC_CodecRewindStream(ecx, u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435350(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435350");
    uint64_t ret = FLAC_EOF_f(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435370(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435370");
    uint64_t ret = FLAC_Error_f(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004353d0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004353d0");
    uint64_t ret = FLAC_Length_f(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004353f0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004353f0");
    uint64_t ret = FLAC_Meta_f(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435430(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435430");
    uint64_t ret = FLAC_Read_f(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435480(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435480");
    uint64_t ret = FLAC_Seek_f(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004354a0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004354a0");
    uint64_t ret = FLAC_Tell_f(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004354d0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004354d0");
    uint64_t ret = FLAC_Write_f(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435630(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435630");
    uint64_t ret = S_WAV_CodecOpenStream(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435690(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435690");
    uint64_t ret = S_WAV_CodecReadStream(u0, u1, u2);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435710(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435710");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = S_WAV_CodecCloseStream((uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435730(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435730");
    uint64_t ret = S_WAV_CodecRewindStream(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435750(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435750");
    uint64_t ret = S_WAV_CodecInitialize();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00435760(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00435760");
    S_WAV_CodecShutdown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004366d0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004366d0");
    Sbar_DontShowScores();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00437fb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00437fb0");
    Sbar_ShowScores();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004386b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004386b0");
    Sys_SigHandler();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    RA_UNREACHABLE();
}

uint64_t U_00439320(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439320");
    uint64_t ret = VID_DescribeCurrentMode_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439340(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439340");
    uint64_t ret = VID_DescribeMode_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439380(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439380");
    uint64_t ret = VID_DescribeModes_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004393b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004393b0");
    VID_ForceMode_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_004393f0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004393f0");
    uint64_t ret = VID_Fullscreen_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004394b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004394b0");
    uint64_t ret = VID_Minimize_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004394c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004394c0");
    uint64_t ret = VID_NumModes_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004396b0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004396b0");
    uint64_t ret = VID_TestMode_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004397e0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004397e0");
    uint64_t ret = VID_Windowed_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e14(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e14");
    uint64_t ret = thunk_ov_clear(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e1a(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e1a");
    uint64_t ret = thunk_ov_open_callbacks(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e20(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e20");
    uint64_t ret = thunk_ov_streams(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e26(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e26");
    uint64_t ret = thunk_ov_seekable(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e2c(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e2c");
    uint64_t ret = thunk_ov_time_seek(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e32(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e32");
    uint64_t ret = thunk_ov_info(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00439e38(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00439e38");
    uint64_t ret = thunk_ov_read(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0043c950(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0043c950");
    uint64_t ret = synth_full(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0043d3f0(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0043d3f0");
    uint64_t ret = synth_half(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0043e310(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0043e310");
    uint64_t ret = mad_layer_I(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0043e7c0(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0043e7c0");
    uint64_t ret = mad_layer_II(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00441f20(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00441f20");
    uint64_t ret = mad_layer_III(u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint8_t U_00442950(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint32_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00442950");
    security_check_cookie(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return (uint8_t)0;
}

uint64_t U_00443e74(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e74");
    uint64_t ret = thunk__libm_sse2_pow_precise(ecx, u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443e7a(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e7a");
    uint64_t ret = thunk__libm_sse2_sqrt_precise(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443e80(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e80");
    uint64_t ret = thunk__libm_sse2_cos_precise(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443e86(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e86");
    uint64_t ret = thunk__libm_sse2_sin_precise(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443e8c(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e8c");
    uint64_t ret = thunk_floor(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443e92(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443e92");
    uint64_t ret = thunk_ceil(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443ea4(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443ea4");
    uint64_t ret = thunk__CIatan2(ecx);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443eaa(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443eaa");
    uint64_t ret = thunk__libm_sse2_tan_precise(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443eb0(uint64_t u0, uint64_t u1, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443eb0");
    uint64_t ret = thunk__libm_sse2_atan_precise(ecx, u0, u1);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00443f10(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_00443f10");
    uint64_t ret = thunk__get_narrow_winmain_command_line(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00444410(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00444410");
    V_BonusFlash_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00445510(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00445510");
    uint64_t ret = V_StartPitchDrift();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00445850(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00445850");
    uint64_t ret = V_cshift_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00445dd0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00445dd0");
    CL_Disconnect_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_00446170(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00446170");
    uint64_t ret = CL_PrintEntities_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00446de0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00446de0");
    uint64_t ret = CL_PlayDemo_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00446f20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00446f20");
    uint64_t ret = CL_Record_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447150(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447150");
    uint64_t ret = CL_Stop_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_004471c0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_004471c0");
    uint64_t ret = CL_TimeDemo_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447a80(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447a80");
    uint64_t ret = IN_AttackDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447a90(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447a90");
    uint64_t ret = IN_AttackUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447aa0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447aa0");
    uint64_t ret = IN_BackDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ab0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ab0");
    uint64_t ret = IN_BackUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ac0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ac0");
    uint64_t ret = IN_DownDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ad0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ad0");
    uint64_t ret = IN_DownUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ae0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ae0");
    uint64_t ret = IN_ForwardDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447af0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447af0");
    uint64_t ret = IN_ForwardUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b00");
    uint64_t ret = IN_Impulse();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b20");
    uint64_t ret = IN_JumpDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b30(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b30");
    uint64_t ret = IN_JumpUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b40");
    uint64_t ret = IN_KLookDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b50(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b50");
    uint64_t ret = IN_KLookUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b60");
    uint64_t ret = IN_LeftDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b70(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b70");
    uint64_t ret = IN_LeftUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b80(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b80");
    uint64_t ret = IN_LookdownDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447b90(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447b90");
    uint64_t ret = IN_LookdownUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ba0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ba0");
    uint64_t ret = IN_LookupDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447bb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447bb0");
    uint64_t ret = IN_LookupUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447bc0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447bc0");
    uint64_t ret = IN_MLookDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447bd0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447bd0");
    uint64_t ret = IN_MLookUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c00");
    uint64_t ret = IN_MoveleftDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c10(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c10");
    uint64_t ret = IN_MoveleftUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c20(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c20");
    uint64_t ret = IN_MoverightDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c30(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c30");
    uint64_t ret = IN_MoverightUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c40(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c40");
    uint64_t ret = IN_RightDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c50(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c50");
    uint64_t ret = IN_RightUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c60");
    uint64_t ret = IN_SpeedDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c70(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c70");
    uint64_t ret = IN_SpeedUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c80(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c80");
    uint64_t ret = IN_StrafeDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447c90(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447c90");
    uint64_t ret = IN_StrafeUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447ca0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447ca0");
    uint64_t ret = IN_UpDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447cb0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447cb0");
    uint64_t ret = IN_UpUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447cc0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447cc0");
    uint64_t ret = IN_UseDown();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00447cd0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00447cd0");
    uint64_t ret = IN_UseUp();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00449d00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00449d00");
    uint64_t ret = Cmd_Alias_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00449f60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00449f60");
    uint64_t ret = Cmd_Echo_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_00449fa0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_00449fa0");
    uint64_t ret = Cmd_Exec_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044a100(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044a100");
    uint64_t ret = Cmd_ForwardToServer();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044a210(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044a210");
    uint64_t ret = Cmd_StuffCmds_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044a450(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044a450");
    Cmd_Wait_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0044af60(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044af60");
    uint64_t ret = COM_Path_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c1a0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c1a0");
    FloatNoSwap(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0044c1b0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c1b0");
    uint64_t ret = FloatSwap(ecx, u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c1e0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c1e0");
    uint64_t ret = LongNoSwap(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c1f0(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c1f0");
    uint64_t ret = LongSwap(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c230(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c230");
    uint64_t ret = ShortNoSwap(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c240(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c240");
    uint64_t ret = ShortSwap(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c350(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c350");
    uint64_t ret = Q_fread(u0, u1, u2, u3);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c470(uint64_t u0, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c470");
    uint64_t ret = Q_ftell(u0);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044c920(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044c920");
    uint64_t ret = Con_Clear_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044cee0(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044cee0");
    Con_MessageMode2_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0044cf00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044cf00");
    Con_MessageMode_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return 0ull;
}

uint64_t U_0044d120(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044d120");
    uint32_t varargs_mem[8] RA_ALIGNED(16);
    uint8_t *varargs = (uint8_t *)&varargs_mem;
    uint64_t u6 = RA_U64((uint8_t *)&ra_args);
    uint64_t u7 = RA_U64((uint8_t *)&ra_args + 8);
    RA_U32(varargs) = (uint32_t)u0;
    RA_U32(varargs + 4) = (uint32_t)u1;
    RA_U32(varargs + 8) = (uint32_t)u2;
    RA_U32(varargs + 12) = (uint32_t)u3;
    RA_U32(varargs + 16) = (uint32_t)u4;
    RA_U32(varargs + 20) = (uint32_t)u5;
    RA_U32(varargs + 24) = (uint32_t)u6;
    RA_U32(varargs + 28) = (uint32_t)u7;
    uint64_t ret = Con_Printf((uint64_t)varargs);
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044d290(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044d290");
    uint64_t ret = Con_ToggleConsole_f();
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

uint64_t U_0044dd00(uint64_t u0 RA_UNUSED, uint64_t u1 RA_UNUSED, uint64_t u2 RA_UNUSED, uint64_t u3 RA_UNUSED, uint64_t u4 RA_UNUSED, uint64_t u5 RA_UNUSED, uint64_t ecx RA_UNUSED, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044dd00");
    uint64_t ret = WinMain_();
    RA_U64((uint8_t *)&ra_pops) = 16ull;
    return ret;
}

uint64_t U_0044def3(uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t ecx, uint64_t edx RA_UNUSED) { RA_ENTER("U_0044def3");
    uint64_t ret = thunk_SDL_snprintf(ecx, u0, u1, u2, u3, u4, u5, RA_U64((uint8_t *)&ra_args), RA_U64((uint8_t *)&ra_args + 8));
    RA_U64((uint8_t *)&ra_pops) = 0ull;
    return ret;
}

