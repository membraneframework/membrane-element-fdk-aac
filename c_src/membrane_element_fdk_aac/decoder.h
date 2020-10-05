#pragma once

#include <fdk-aac/aacdecoder_lib.h>
#include <membrane/membrane.h>
#define MEMBRANE_LOG_TAG "Membrane.Element.FDK.AAC.DecoderNative"
#include "stdint.h"
#include <membrane/log.h>

typedef struct _DecoderState UnifexNifState;
typedef UnifexNifState State;

struct _DecoderState {
  HANDLE_AACDECODER handle;
  uint8_t *decoder_buffer;
  int decoder_buffer_size;
};

#include "_generated/decoder.h"
