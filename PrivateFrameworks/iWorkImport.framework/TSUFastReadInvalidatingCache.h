/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFastReadInvalidatingCache : NSObject {
    NSCondition * mCondition;
    id /* block */  mGenerator;
    bool  mIsGenerating;
    long long  mReaderCount;
    bool  mReentrant;
    id  mToDispose;
    id  mValue;
}

- (void)dealloc;
- (id)initForReentrant:(bool)arg1 withGenerator:(id /* block */)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
