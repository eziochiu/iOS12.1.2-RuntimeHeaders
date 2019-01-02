/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider> {
    <CNScheduler> * _backgroundScheduler;
    <CNScheduler> * _immediateScheduler;
    <CNScheduler> * _inlineScheduler;
    <CNScheduler> * _mainThreadScheduler;
    id /* block */  _readerWriterSchedulerProvider;
    id /* block */  _serialSchedulerProvider;
    id /* block */  _synchronousSerialSchedulerProvider;
}

@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *immediateScheduler;
@property (nonatomic, readonly) <CNScheduler> *inlineScheduler;
@property (nonatomic, readonly) <CNScheduler> *mainThreadScheduler;
@property (nonatomic, readonly, copy) id /* block */ readerWriterSchedulerProvider;
@property (nonatomic, readonly, copy) id /* block */ serialSchedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ synchronousSerialSchedulerProvider;

+ (id)defaultProvider;
+ (id)makeDefaultProvider;
+ (id)providerWithBackgroundConcurrencyLimit:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundScheduler;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)immediateScheduler;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(id /* block */)arg4 synchronousSerialSchedulerProvider:(id /* block */)arg5 readerWriterSchedulerProvider:(id /* block */)arg6;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(id /* block */)arg5 synchronousSerialSchedulerProvider:(id /* block */)arg6 readerWriterSchedulerProvider:(id /* block */)arg7;
- (id)inlineScheduler;
- (id)mainThreadScheduler;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (id)newSerialSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;
- (id /* block */)readerWriterSchedulerProvider;
- (id /* block */)serialSchedulerProvider;
- (id /* block */)synchronousSerialSchedulerProvider;

@end