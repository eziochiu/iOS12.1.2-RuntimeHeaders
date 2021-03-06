/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPlainTextDocument : NSObject {
    NSMutableArray * _fragments;
    NSMutableString * _text;
}

- (void)appendArchivedRepresentation:(id)arg1;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (id)archivedRepresentation;
- (void)dealloc;
- (unsigned long long)fragmentCount;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(bool*)arg2 encoding:(unsigned int)arg3;
- (void)getString:(id*)arg1 quoteLevel:(unsigned int*)arg2 ofFragmentAtIndex:(unsigned long long)arg3;
- (id)quotedString:(unsigned int)arg1;
- (id)string;

@end
