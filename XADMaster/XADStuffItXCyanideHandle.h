#import "CSBlockStreamHandle.h"

@interface XADStuffItXCyanideHandle:CSBlockStreamHandle
{
	uint8_t *block;
}

-(id)initWithHandle:(CSHandle *)handle;
-(void)dealloc;

-(void)resetBlockStream;
-(int)produceBlockAtOffset:(off_t)pos;

-(void)readTernaryCodedBlock:(int)blocksize numberOfSymbols:(int)numsymbols;

@end
