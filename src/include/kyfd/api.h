#ifndef KYFD_API_H__
#define KYFD_API_H__

#ifdef __cplusplus
extern "C" {
#endif

void* create_decoder(int argc, char** argv, void** config);

void  destroy_decoder(void* decoder, void* config);

int   run_decoder(void* decoder, char* in, char* out, int out_size);

#ifdef __cplusplus
}
#endif

#endif // KYFD_API_H__
