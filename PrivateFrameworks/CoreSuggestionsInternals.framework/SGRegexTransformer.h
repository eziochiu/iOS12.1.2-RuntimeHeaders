/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRegexTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _mapping;
    SGRe2 * _regex;
}

@property (retain) NSString *mapping;
@property (retain) SGRe2 *regex;

+ (id)withRegex:(id)arg1 andMapping:(id)arg2;

- (void).cxx_destruct;
- (id)initWithRegex:(id)arg1 andMapping:(id)arg2;
- (id)mapping;
- (id)regex;
- (void)setMapping:(id)arg1;
- (void)setRegex:(id)arg1;
- (id)transform:(id)arg1;

@end
