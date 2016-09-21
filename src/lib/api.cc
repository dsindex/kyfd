#include <kyfd/decoder.h>
#include <kyfd/decoder-config.h>
#include <kyfd/api.h>

using namespace kyfd;

void* kyfd_create(int argc, char** argv, void** config)
{
    DecoderConfig* conf = new DecoderConfig;
	conf->parseCommandLine(argc, argv);
    Decoder* decoder = new Decoder(*conf);
	*config = conf;
	return decoder;
}


