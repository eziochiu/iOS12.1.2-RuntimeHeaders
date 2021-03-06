/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFakeProgress : TSUBasicProgress {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _currentStage;
    unsigned long long  _numberOfStages;
    bool  _stopped;
}

- (void)advanceToStage:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2;
- (void)p_slowlyAdvanceToNextStage;
- (void)start;
- (void)stop;

@end
